%option noyywrap yylineno
%option outfile="lexer.c" header-file="lexer.h"
%s COMMENT
%{
#include "lang.h"
#include "parser.h"
%}


%%

0|[1-9][0-9]* {
    yylval.n = build_nat(yytext, yyleng);
    return TM_NAT;
}

"With" {return TM_WITH;}
"Require" {return TM_REQUIRE;}
"Ensure" {return TM_ENSURE;}
"__return" {return TM__RETURN;}
"Inv" {return TM_INV;}
"forall" {return TM_FORALL;}
"exists" {return TM_EXISTS;}
"Let" {return TM_LET;}
"sizeof" {return TM_SIZEOF;}


"void" {return TM_VOID;}
"char" {return TM_CHAR;}
"unsigned char" {return TM_U8;}
"int" {return TM_INT;}
"long long" {return TM_INT64;}
"unsigned int" {return TM_UINT;}
"unsigned long long" {return TM_UINT64;}


"struct" {return TM_STRUCT;}
"union" {return TM_UNION;}
"enum" {return TM_ENUM;}



"if" {return TM_IF;}
"else" {return TM_ELSE;}
"switch" {return TM_SWITCH;}
"case" {return TM_CASE;}
"default" {return TM_DEFAULT;}
"for" {return TM_FOR;}
"while" {return TM_WHILE;}
"do" {return TM_DO;}
"break" {return TM_BREAK;}
"continue" {return TM_CONTINUE;}
"return" {return TM_RETURN;}


[_A-Za-z][_A-Za-z0-9]* {
    yylval.i = new_str(yytext, yyleng);
    return TM_IDENT;
}


"//@" {BEGIN(COMMENT);return TM_COMMENT;}
"/*@" {return TM_COMMENT_BEGIN;}
"*/" {return TM_COMMENT_END;}


";" {return TM_SEMICOL;}
"," {return TM_COMMA;}
":" {return TM_COLON;}
"(" {return TM_LP;}
")" {return TM_RP;}
"[" {return TM_LB;}
"]" {return TM_RB;}
"{" {return TM_LC;}
"}" {return TM_RC;}


"+=" {return TM_ADD_ASSIGN;}
"-=" {return TM_SUB_ASSIGN;}
"*=" {return TM_MUL_ASSIGN;}
"/=" {return TM_DIV_ASSIGN;}
"%=" {return TM_MOD_ASSIGN;}
"&=" {return TM_BAND_ASSIGN;}
"|=" {return TM_BOR_ASSIGN;}
"^=" {return TM_XOR_ASSIGN;}
"<<=" {return TM_SHL_ASSIGN;}
">>=" {return TM_SHR_ASSIGN;}

"++" {return TM_INC;}
"--" {return TM_DEC;}

"+" {return TM_PLUS;}
"-" {return TM_MINUS;}
"*" {return TM_MUL;}
"/" {return TM_DIV;}
"%" {return TM_MOD;}

"<<" {return TM_SHL;}
">>" {return TM_SHR;}
"<=" {return TM_LE;}
">=" {return TM_GE;}
"<" {return TM_LT;}
">" {return TM_GT;}
"==" {return TM_EQ;}
"!=" {return TM_NE;}
"=" {return TM_ASGNOP;}
"&&" {return TM_AND;}
"||" {return TM_OR;}
"&" {return TM_BAND;}
"|" {return TM_BOR;}
"^" {return TM_XOR;}
"!" {return TM_NOTBOOL;}
"~" {return TM_NOTINT;}
"." {return TM_FIELDOF;}
"->" {return TM_FIELDOFPTR;}

<COMMENT>\n {BEGIN(INITIAL);return TM_NEWLINE;}

[ \t\n\r]    { };

.   {printf("%s",yytext);
     return -1; }
%%