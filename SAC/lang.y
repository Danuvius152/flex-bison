%{
	// this part is copied to the beginning of the parser 
	#include <stdio.h>
	#include "lang.h"
	#include "lexer.h"
	void yyerror(char *);
	int yylex(void);
  struct def_list * root;
%}

%union {
unsigned int n;
char *i;
struct type *t;
struct expr *e;
struct expr_list *exl;
struct var_list  *vl;
struct var_dec_list  *vdl;
struct def_list  *dl;
struct enum_list *enl;
struct RA_list   *rl;
struct Case_list *cl;
struct field_dec_list *fdl;
struct Afuncdef *afd;
struct ASepdef  *asd;
struct var_dec   *vd;
struct field_dec *fd;
struct def  *d;
struct cmd  *c;
struct simple_cmd *sc;
struct Case *cas;
struct RAssertion *r;
void *none;
}

// Terminals
%token <n> TM_NAT
%token <i> TM_IDENT TM__RETURN
%token <none> TM_VOID TM_CHAR TM_U8 TM_INT TM_INT64 TM_UINT TM_UINT64
%token <none> TM_LP TM_RP TM_LB TM_RB TM_LC TM_RC TM_SEMICOL TM_COMMA TM_COLON
%token <none> TM_WITH TM_REQUIRE TM_ENSURE TM_INV TM_FORALL TM_EXISTS TM_LET TM_SIZEOF
%token <none> TM_STRUCT TM_UNION TM_ENUM TM_COMMENT TM_COMMENT_BEGIN TM_COMMENT_END 
%token <none> TM_IF TM_ELSE TM_WHILE TM_DO TM_SWITCH TM_CASE TM_DEFAULT TM_FOR TM_BREAK TM_CONTINUE TM_RETURN
%token <none> TM_ASGNOP TM_ADD_ASSIGN TM_SUB_ASSIGN TM_MUL_ASSIGN TM_DIV_ASSIGN TM_MOD_ASSIGN TM_BAND_ASSIGN TM_BOR_ASSIGN TM_XOR_ASSIGN TM_SHL_ASSIGN TM_SHR_ASSIGN 
%token <none> TM_OR TM_AND TM_NOTBOOL TM_NOTINT TM_SHL TM_SHR TM_BAND TM_BOR TM_XOR TM_NEWLINE
%token <none> TM_INC TM_DEC
%token <none> TM_FIELDOF TM_FIELDOFPTR
%token <none> TM_LT TM_LE TM_GT TM_GE TM_EQ TM_NE
%token <none> TM_PLUS TM_MINUS
%token <none> TM_MUL TM_DIV TM_MOD

// Nonterminals
%type <dl> NT_WHOLE
%type <c> NT_CMD
%type <c> NT_CMDS
%type <c> NT_cmd
%type <c> NT_BLOCK
%type <sc> NT_SIMPLE_CMD
%type <d> NT_DEF
%type <dl> NT_DEF_LIST
%type <e> NT_EXPR
%type <exl> NT_EXPR_LIST
%type <vd> NT_VAR_DEC
%type <vl> NT_VAR_LIST  
%type <vdl> NT_VAR_DEC_LIST
%type <cas> NT_CASE
%type <cl> NT_CASE_LIST
%type <enl> NT_ENUM_LIST
%type <rl> NT_RA_LIST
%type <fdl> NT_FIELD_DEC_LIST
%type <fd> NT_FIELD_DEC
%type <r> NT_RASSERTION
%type <afd> NT_AFUNCDEF
%type <asd> NT_ASEPDEF
%type <t> NT_TYPE


// Priority
%nonassoc TM_EXISTS TM_FORALL TM_IDENT 
%nonassoc TM_ASGNOP TM_ADD_ASSIGN TM_SUB_ASSIGN TM_MUL_ASSIGN TM_DIV_ASSIGN TM_MOD_ASSIGN TM_BAND_ASSIGN TM_BOR_ASSIGN TM_XOR_ASSIGN TM_SHL_ASSIGN TM_SHR_ASSIGN 
%left TM_COMMA
%left TM_OR
%left TM_AND
%left TM_BOR
%left TM_XOR
%left TM_BAND
%left TM_EQ TM_NE
%left TM_GE TM_GT TM_LE TM_LT
%left TM_SHL TM_SHR
%left TM_PLUS TM_MINUS
%left TM_MUL TM_DIV TM_MOD
%right TM_INC TM_DEC TM_NOTBOOL TM_NOTINT TM_SIZEOF
%left TM_FIELDOF TM_FIELDOFPTR 
%left TM_LP TM_RP TM_LB TM_RB 
%right TM_SEMICOL 

%nonassoc LOWER_THAN_ELSE
%nonassoc TM_ELSE

%start NT_WHOLE
%%

NT_WHOLE:
  NT_DEF_LIST
  {
    $$ = ($1);
    root = $$;
  }
;

NT_DEF_LIST:

  {
    $$ = (DFLNil());
  } 
| NT_DEF NT_DEF_LIST
  {
    $$ = (DFLCons($1,$2));
  }
;

NT_CMDS :
  {
    $$ = NULL;
  }
| NT_cmd NT_CMDS  
  {
    $$ = (TSeq($1, $2));
  }
;

NT_DEF:                                         
  NT_TYPE TM_IDENT TM_LP NT_VAR_DEC_LIST TM_RP NT_AFUNCDEF TM_LC NT_CMDS TM_RC
  {
    $$ = (TFuncdef($1,$2,$4,$8,$6));
  }
| NT_TYPE TM_IDENT TM_LP TM_RP NT_AFUNCDEF TM_LC NT_CMDS TM_RC
  {
    $$ = (TFuncdef($1,$2,NULL,$7,$6));
  }
| NT_TYPE TM_IDENT TM_LP NT_VAR_DEC_LIST TM_RP TM_LC NT_CMDS TM_RC
  {
    $$ = (TFuncdef($1,$2,$4,$7,NULL));
  }
| NT_TYPE TM_IDENT TM_LP TM_RP TM_LC NT_CMDS TM_RC
  {
    $$ = (TFuncdef($1,$2,NULL,$6,NULL));
  }
| NT_TYPE TM_IDENT TM_LP NT_VAR_DEC_LIST TM_RP NT_AFUNCDEF TM_SEMICOL
  {
    $$ = (TFuncdec($1,$2,$4,$6));
  }
| NT_TYPE TM_IDENT TM_LP TM_RP NT_AFUNCDEF TM_SEMICOL
  {
    $$ = (TFuncdec($1,$2,NULL,$5));
  }
| NT_TYPE TM_IDENT TM_LP NT_VAR_DEC_LIST TM_RP TM_SEMICOL
  {
    $$ = (TFuncdec($1,$2,$4,NULL));
  }
| NT_TYPE TM_IDENT TM_LP TM_RP TM_SEMICOL
  {
    $$ = (TFuncdec($1,$2,NULL,NULL));
  }
| NT_ASEPDEF
  {
    $$ = (TSepdef($1));
  }
| TM_UNION TM_IDENT TM_LC NT_FIELD_DEC_LIST TM_RC TM_SEMICOL
  {
    $$ = (TUniondef($2,$4));
  }
| TM_ENUM TM_IDENT TM_LC NT_ENUM_LIST TM_RC TM_SEMICOL
  {
    $$ = (TEnumdef($2,$4));
  }
| TM_STRUCT TM_IDENT TM_LC NT_FIELD_DEC_LIST TM_RC TM_SEMICOL
  {
    $$ = (TStructdef($2,$4));
  }
| NT_VAR_DEC TM_SEMICOL
  {
    $$ = (Tvardec($1));
  }
;

NT_TYPE:
  TM_VOID
  {
    $$ = (TBasic(T_VOID));
  }
| TM_CHAR
  {
    $$ = (TBasic(T_CHAR));
  }
| TM_U8
  {
    $$ = (TBasic(T_U8));
  }
| TM_INT
  {
    $$ = (TBasic(T_INT));
  }
| TM_INT64
  {
    $$ = (TBasic(T_INT64));
  }
| TM_UINT
  {
    $$ = (TBasic(T_UINT));
  }
| TM_UINT64
  {
    $$ = (TBasic(T_UINT64));
  }
| TM_STRUCT TM_IDENT
  {
    $$ = (TStruct($2));
  }
| TM_UNION TM_IDENT
  {
    $$ = (TUnion($2));
  }
| TM_ENUM TM_IDENT
  {
    $$ = (TEnum($2));
  }
| NT_TYPE TM_MUL 
  {
    $$ = (TPtr($1));
  }
| NT_TYPE TM_IDENT TM_LB NT_EXPR TM_RB
  {
    $$ = (TArray($1,$2,$4));
  }
;

NT_VAR_LIST:

  {
    $$ = (VLNil());
  } 
| TM_IDENT NT_VAR_LIST 
  {
    $$ = (VLCons($1,$2));
  }
;
NT_VAR_DEC_LIST:
  NT_VAR_DEC
  {
    $$ = (VARCons($1,VARNil()));
  } 
| NT_VAR_DEC_LIST TM_COMMA NT_VAR_DEC
  {
    $$ = (VARCons($3,$1));
  }
;

NT_AFUNCDEF:
  TM_COMMENT_BEGIN TM_WITH NT_VAR_LIST TM_REQUIRE NT_RASSERTION TM_ENSURE NT_RASSERTION TM_COMMENT_END
  {
    $$ = (TAfuncdef($3,$5,$7));
  }
| TM_COMMENT_BEGIN TM_REQUIRE NT_RASSERTION TM_ENSURE NT_RASSERTION TM_COMMENT_END
  {
    $$ = (TAfuncdef(NULL,$3,$5));
  }
;

NT_ASEPDEF:
  TM_COMMENT_BEGIN TM_LET TM_IDENT TM_LP NT_EXPR_LIST TM_RP TM_ASGNOP NT_RASSERTION TM_COMMENT_END
  {
    $$ = (TAsepdef($3,$5,$8));
  }
| TM_COMMENT TM_LET TM_IDENT TM_LP NT_EXPR_LIST TM_RP TM_ASGNOP NT_RASSERTION TM_NEWLINE
  {
    $$ = (TAsepdef($3,$5,$8));
  }
;

NT_FIELD_DEC_LIST:

  {
    $$ = (FDLNil());
  }
| NT_FIELD_DEC NT_FIELD_DEC_LIST
  {
    $$ = (FDLCons($1,$2));
  }
;

NT_FIELD_DEC:
  NT_TYPE TM_IDENT TM_SEMICOL
  {
    $$ = (TFIELDDEC($1,$2));
  }
;

NT_VAR_DEC:
  NT_TYPE TM_IDENT
  {
    $$ = (TVARDEC($1,$2));
  }
| NT_TYPE
  {
    $$ = (TVARDEC($1,NULL));
  }
;

NT_ENUM_LIST:
  TM_IDENT
  {
    $$ = (ENLCons($1,ENLNil()));
  }
| TM_IDENT TM_COMMA NT_ENUM_LIST
  {
    $$ = (ENLCons($1,$3));
  }
  
;

NT_RA_LIST :
  NT_RASSERTION
  { 
    $$ = (RALCons($1, RALNil()));
  }
|  NT_RASSERTION TM_COMMA NT_RA_LIST
  {
    $$ = (RALCons($1, $3));
  }
;

NT_RASSERTION : 
  TM_LP NT_RASSERTION TM_RP
  {
    $$ = ($2); 
  }
| TM_NAT
  { 
    $$ = (RAConst($1));
  }
| TM__RETURN
  {
    $$ = (RAVar($1,0));
  }
| TM_IDENT
  { 
    $$ = (RAVar($1,1));
  }
| TM_IDENT TM_LP NT_RA_LIST TM_RP 
  {
    $$ = (RACall($1,$3));
  }
| TM_MINUS NT_RASSERTION %prec TM_SIZEOF
  {
    $$ = (RAUnop(T_UMINUS,$2));
  }
| TM_PLUS NT_RASSERTION %prec TM_SIZEOF
  {
    $$ = (RAUnop(T_UPLUS,$2));
  }
| TM_NOTBOOL NT_RASSERTION
  {
    $$ = (RAUnop(T_NOTBOOL,$2));
  }
| TM_NOTINT NT_RASSERTION
  {
    $$ = (RAUnop(T_NOTINT,$2));
  }
| NT_RASSERTION TM_PLUS NT_RASSERTION
  {
    $$ = (RABinop(T_PLUS,$1,$3));
  }
| NT_RASSERTION TM_MINUS NT_RASSERTION
  {
    $$ = (RABinop(T_MINUS,$1,$3));
  }
| NT_RASSERTION TM_MUL NT_RASSERTION
  {
    $$ = (RABinop(T_MUL,$1,$3));
  }
| NT_RASSERTION TM_DIV NT_RASSERTION
  {
    $$ = (RABinop(T_DIV,$1,$3));
  }
| NT_RASSERTION TM_MOD NT_RASSERTION
  {
    $$ = (RABinop(T_MOD,$1,$3));
  }
| NT_RASSERTION TM_LT NT_RASSERTION
  {
    $$ = (RABinop(T_LT,$1,$3));
  }
| NT_RASSERTION TM_GT NT_RASSERTION
  {
    $$ = (RABinop(T_GT,$1,$3));
  }
| NT_RASSERTION TM_LE NT_RASSERTION
  {
    $$ = (RABinop(T_LE,$1,$3));
  }
| NT_RASSERTION TM_GE NT_RASSERTION
  {
    $$ = (RABinop(T_GE,$1,$3));
  }
| NT_RASSERTION TM_EQ NT_RASSERTION
  {
    $$ = (RABinop(T_EQ,$1,$3));
  }
| NT_RASSERTION TM_NE NT_RASSERTION
  {
    $$ = (RABinop(T_NE,$1,$3));
  }
| NT_RASSERTION TM_AND NT_RASSERTION
  {
    $$ = (RABinop(T_AND,$1,$3));
  }
| NT_RASSERTION TM_OR NT_RASSERTION
  {
    $$ = (RABinop(T_OR,$1,$3));
  }
| NT_RASSERTION TM_BAND NT_RASSERTION
  {
    $$ = (RABinop(T_BAND,$1,$3));
  }
| NT_RASSERTION TM_BOR NT_RASSERTION
  {
    $$ = (RABinop(T_BOR,$1,$3));
  }
| NT_RASSERTION TM_XOR NT_RASSERTION
  {
    $$ = (RABinop(T_XOR,$1,$3));
  }
| NT_RASSERTION TM_SHL NT_RASSERTION
  {
    $$ = (RABinop(T_SHL,$1,$3));
  }
| NT_RASSERTION TM_SHR NT_RASSERTION
  {
    $$ = (RABinop(T_SHR,$1,$3));
  }
| TM_MUL NT_RASSERTION %prec TM_NOTBOOL
  {
    $$ = (RADeref($2));
  }
| TM_BAND NT_RASSERTION
  {
    $$ = (RAAddress($2));
  }
| TM_LP NT_TYPE TM_RP NT_RASSERTION
  {
    $$ = (RACast($2,$4));
  }
| NT_RASSERTION TM_LB NT_RASSERTION TM_RB
  {
    $$ = (RAIndex($1,$3));
  }
| NT_RASSERTION TM_FIELDOF TM_IDENT
  {
    $$ = (RAFieldof($1,$3));
  }
| NT_RASSERTION TM_FIELDOFPTR TM_IDENT
  {
    $$ = (RAFieldofptr($1,$3));
  }
| TM_FORALL TM_IDENT TM_COMMA NT_RASSERTION
  {
    $$ = (RAQfop(A_FORALL,$2,$4));
  }
| TM_EXISTS TM_IDENT TM_COMMA NT_RASSERTION
  {
    $$ = (RAQfop(A_EXISTS,$2,$4));
  }
;


NT_EXPR_LIST :
  NT_EXPR
  { 
    $$ = (ELCons($1, ELNil()));
  }
| NT_EXPR TM_COMMA NT_EXPR_LIST
  {
    $$ = (ELCons($1, $3));
  }
;

NT_EXPR : 
  TM_NAT
  {
    $$ = (TConst($1));
  }
| TM_LP NT_EXPR TM_RP
  {
    $$ = ($2);
  }
| TM_IDENT
  {
    $$ = (TVar($1));
  }
| TM_IDENT TM_LP TM_RP 
  {
    $$ = (TCall($1, ELNil()));
  }
| TM_IDENT TM_LP NT_EXPR_LIST TM_RP 
  {
    $$ = (TCall($1,$3));
  }
| TM_SIZEOF TM_LP NT_TYPE TM_RP
  {
    $$ = (TSizeofType($3));
  }
| TM_MINUS NT_EXPR %prec TM_SIZEOF
  {
    $$ = (TUnop(T_UMINUS,$2));
  }
| TM_PLUS NT_EXPR %prec TM_SIZEOF
  {
    $$ = (TUnop(T_UPLUS,$2));
  }
| TM_NOTBOOL NT_EXPR
  {
    $$ = (TUnop(T_NOTBOOL,$2));
  }
| TM_NOTINT NT_EXPR
  {
    $$ = (TUnop(T_NOTINT,$2));
  }
| NT_EXPR TM_PLUS NT_EXPR
  {
    $$ = (TBinop(T_PLUS,$1,$3));
  }
| NT_EXPR TM_MINUS NT_EXPR
  {
    $$ = (TBinop(T_MINUS,$1,$3));
  }
| NT_EXPR TM_MUL NT_EXPR 
  {
    $$ = (TBinop(T_MUL,$1,$3));
  }
| NT_EXPR TM_DIV NT_EXPR
  {
    $$ = (TBinop(T_DIV,$1,$3));
  }
| NT_EXPR TM_MOD NT_EXPR
  {
    $$ = (TBinop(T_MOD,$1,$3));
  }
| NT_EXPR TM_LT NT_EXPR
  {
    $$ = (TBinop(T_LT,$1,$3));
  }
| NT_EXPR TM_GT NT_EXPR
  {
    $$ = (TBinop(T_GT,$1,$3));
  }
| NT_EXPR TM_LE NT_EXPR
  {
    $$ = (TBinop(T_LE,$1,$3));
  }
| NT_EXPR TM_GE NT_EXPR
  {
    $$ = (TBinop(T_GE,$1,$3));
  }
| NT_EXPR TM_EQ NT_EXPR
  {
    $$ = (TBinop(T_EQ,$1,$3));
  }
| NT_EXPR TM_NE NT_EXPR
  {
    $$ = (TBinop(T_NE,$1,$3));
  }
| NT_EXPR TM_AND NT_EXPR
  {
    $$ = (TBinop(T_AND,$1,$3));
  }
| NT_EXPR TM_OR NT_EXPR
  {
    $$ = (TBinop(T_OR,$1,$3));
  }
| NT_EXPR TM_BAND NT_EXPR
  {
    $$ = (TBinop(T_BAND,$1,$3));
  }
| NT_EXPR TM_BOR NT_EXPR
  {
    $$ = (TBinop(T_BOR,$1,$3));
  }
| NT_EXPR TM_XOR NT_EXPR
  {
    $$ = (TBinop(T_XOR,$1,$3));
  }
| NT_EXPR TM_SHL NT_EXPR
  {
    $$ = (TBinop(T_SHL,$1,$3));
  }
| NT_EXPR TM_SHR NT_EXPR
  {
    $$ = (TBinop(T_SHR,$1,$3));
  }
| TM_MUL NT_EXPR %prec TM_NOTBOOL
  {
    $$ = (TDeref($2));
  }
| TM_BAND NT_EXPR
  {
    $$ = (TAddress($2));
  }
| TM_LP NT_TYPE TM_RP NT_EXPR
  {
    $$ = (TCast($2,$4));
  }
| NT_EXPR TM_LB NT_EXPR TM_RB
  {
    $$ = (TIndex($1,$3));
  }
| NT_EXPR TM_FIELDOF TM_IDENT
  {
    $$ = (TFieldof($1,$3));
  }
| NT_EXPR TM_FIELDOFPTR TM_IDENT
  {
    $$ = (TFieldofptr($1,$3));
  }
;


NT_SIMPLE_CMD:
  NT_EXPR
  {
    $$ = (TComputation($1));
  }
| NT_EXPR TM_ASGNOP NT_EXPR 
  {
    $$ = (TAsgn(T_ASSIGN,$1,$3));
  }
| NT_EXPR TM_ADD_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_ADD_ASSIGN,$1,$3));
  }
| NT_EXPR TM_SUB_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_SUB_ASSIGN,$1,$3));
  }
| NT_EXPR TM_MUL_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_MUL_ASSIGN,$1,$3));
  }
| NT_EXPR TM_DIV_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_DIV_ASSIGN,$1,$3));
  }
| NT_EXPR TM_MOD_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_MOD_ASSIGN,$1,$3));
  }
| NT_EXPR TM_BAND_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_BAND_ASSIGN,$1,$3));
  }
| NT_EXPR TM_BOR_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_BOR_ASSIGN,$1,$3));
  }
| NT_EXPR TM_XOR_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_XOR_ASSIGN,$1,$3));
  }
| NT_EXPR TM_SHL_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_SHL_ASSIGN,$1,$3));
  }
| NT_EXPR TM_SHR_ASSIGN NT_EXPR
  {
    $$ = (TAsgn(T_SHR_ASSIGN,$1,$3));
  }
| TM_INC NT_EXPR 
  {
    $$ = (TIncDec(T_INC_F,$2));
  }
| NT_EXPR TM_INC 
  {
    $$ = (TIncDec(T_INC_B,$1));
  }
| TM_DEC NT_EXPR 
  {
    $$ = (TIncDec(T_DEC_F,$2));
  }
| NT_EXPR TM_DEC 
  {
    $$ = (TIncDec(T_DEC_B,$1));
  }
;

NT_CASE:
  TM_CASE NT_EXPR TM_COLON NT_CMDS
  {
    $$ = (TCase($2,$4));
  }
| TM_DEFAULT TM_COLON NT_CMDS
  {
    $$ = (TDefault($3));
  }
;
NT_CASE_LIST:
  
  {
    $$ = CLNil();
  }
|
  NT_CASE NT_CASE_LIST
  {
    $$ = (CLCons($1,$2));
  }
;


NT_CMD:
  NT_VAR_DEC TM_SEMICOL
  {
    $$ = (TVarDecl($1));
  }
| NT_SIMPLE_CMD TM_SEMICOL
  {
    $$ = (TSimple($1));
  }
| TM_IF TM_LP NT_EXPR TM_RP NT_CMD %prec LOWER_THAN_ELSE
  {
    $$ = (TIf($3,$5,NULL));
  }
| TM_IF TM_LP NT_EXPR TM_RP NT_CMD TM_ELSE NT_CMD
  {
    $$ = (TIf($3,$5,$7));
  }
| TM_SWITCH NT_EXPR TM_LC NT_CASE_LIST TM_RC
  {
    $$ = (TSwitch($2,$4));
  }
| TM_WHILE TM_LP NT_EXPR TM_RP NT_CMD
  {
    $$ = (TWhile(NULL,$3,$5));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_WHILE TM_LP NT_EXPR TM_RP NT_CMD
  {
    $$ = (TWhile($3,$7,$9));
  }
| TM_DO NT_CMD TM_WHILE NT_EXPR TM_SEMICOL
  {
    $$ = (TDoWhile(NULL,$4,$2));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_DO NT_CMD TM_WHILE NT_EXPR TM_SEMICOL
  {
    $$ = (TDoWhile($3,$8,$6));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_FOR TM_LP NT_SIMPLE_CMD TM_SEMICOL NT_EXPR TM_SEMICOL NT_SIMPLE_CMD TM_RP NT_CMD
  {
    $$ = (TFor($3,$7,$9,$11,$13));
  }
| TM_FOR TM_LP NT_SIMPLE_CMD TM_SEMICOL NT_EXPR TM_SEMICOL NT_SIMPLE_CMD TM_RP NT_CMD
  {
    $$ = (TFor(NULL,$3,$5,$7,$9));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_FOR TM_LP TM_SEMICOL TM_SEMICOL TM_RP NT_CMD
  {
    $$ = (TFor($3,NULL,NULL,NULL,$10));
  }
| TM_FOR TM_LP TM_SEMICOL TM_SEMICOL TM_RP NT_CMD
  {
    $$ = (TFor(NULL,NULL,NULL,NULL,$6));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_FOR TM_LP NT_SIMPLE_CMD TM_SEMICOL TM_SEMICOL TM_RP NT_CMD
  {
    $$ = (TFor($3,$7,NULL,NULL,$11));
  }
| TM_FOR TM_LP NT_SIMPLE_CMD TM_SEMICOL TM_SEMICOL TM_RP NT_CMD
  {
    $$ = (TFor(NULL,$3,NULL,NULL,$7));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_FOR TM_LP TM_SEMICOL TM_SEMICOL NT_SIMPLE_CMD TM_RP NT_CMD
  {
    $$ = (TFor($3,NULL,NULL,$9,$11));
  }
| TM_FOR TM_LP TM_SEMICOL TM_SEMICOL NT_SIMPLE_CMD TM_RP NT_CMD
  {
    $$ = (TFor(NULL,NULL,NULL,$5,$7));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_FOR TM_LP TM_SEMICOL NT_EXPR TM_SEMICOL TM_RP NT_CMD
  {
    $$ = (TFor($3,NULL,$8,NULL,$11));
  }
| TM_FOR TM_LP TM_SEMICOL NT_EXPR TM_SEMICOL TM_RP NT_CMD
  {
    $$ = (TFor(NULL,NULL,$4,NULL,$7));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_FOR TM_LP NT_SIMPLE_CMD TM_SEMICOL TM_SEMICOL NT_SIMPLE_CMD TM_RP NT_CMD
  {
    $$ = (TFor($3,$7,NULL,$10,$12));
  }
| TM_FOR TM_LP NT_SIMPLE_CMD TM_SEMICOL TM_SEMICOL NT_SIMPLE_CMD TM_RP NT_CMD
  {
    $$ = (TFor(NULL,$3,NULL,$6,$8));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_FOR TM_LP NT_SIMPLE_CMD TM_SEMICOL NT_EXPR TM_SEMICOL TM_RP NT_CMD
  {
    $$ = (TFor($3,$7,$9,NULL,$12));
  }
| TM_FOR TM_LP NT_SIMPLE_CMD TM_SEMICOL NT_EXPR TM_SEMICOL TM_RP NT_CMD
  {
    $$ = (TFor(NULL,$3,$5,NULL,$8));
  }
| TM_COMMENT TM_INV NT_RASSERTION TM_NEWLINE TM_FOR TM_LP TM_SEMICOL NT_EXPR TM_SEMICOL NT_SIMPLE_CMD TM_RP NT_CMD
  {
    $$ = (TFor($3,NULL,$8,$10,$12));
  }
| TM_FOR TM_LP TM_SEMICOL NT_EXPR TM_SEMICOL NT_SIMPLE_CMD TM_RP NT_CMD
  {
    $$ = (TFor(NULL,NULL,$4,$6,$8));
  }
| TM_BREAK TM_SEMICOL
  {
    $$ = (TBreak());
  }
| TM_CONTINUE TM_SEMICOL
  {
    $$ = (TContinue());
  }
| TM_RETURN TM_SEMICOL
  {
    $$ = (TReturn(NULL));
  }
| TM_RETURN NT_EXPR TM_SEMICOL
  {
    $$ = (TReturn($2));
  }
| NT_BLOCK
  {
    $$ = ($1);
  }
| TM_SEMICOL
  {
    $$ = NULL;
  }
;

NT_BLOCK :
  TM_LC NT_CMDS TM_RC
  {
    $$ = ($2);
  }
;

NT_cmd :
  NT_CMD
  {
    $$=$1;
  }
| TM_COMMENT NT_RASSERTION TM_NEWLINE
  {
    $$ = (TComment($2));
  }
| TM_COMMENT_BEGIN  NT_RASSERTION TM_COMMENT_END
  {
    $$ = (TComment($2));
  }
;


%%

void yyerror(char* s)
{
    fprintf(stderr , "%s\n",s);
}
