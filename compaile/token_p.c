/*----------------------------*/
/*     字句解析 token_p.c      */
/*----------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* トークンの種類 */
typedef enum {
    LParen, RParen, Plus, Minus, Multi, Divi, Equal, NotEq,
    Less, LessEq, Great, GreetEq, SngQ, DblQ, Assign, Semicolon,
    If, Else, Puts, Ident, IntNum, END_list
} Kind;

#define ID_STZ 31 /* 識別子の長さ */
#define TEXT_STZ 100 /* 文字列の長さ */

/* トークン構造体 */
typedef struct {
    Kind kind; /* トークンの種類 */
    char text[TEXT_STZ+1]; /* トークン文字列 */
    int intVal; /* 定数のときその値 */
} Token;

void initChTyp(void);
Token nextTkn(void);
int nextCh(void);
int is_ope(int c1, int c2);
Token set_kind(Token t);
void err_exit(char *s);

Kind ctyp[256];
Token token;
FILE *fin;

struct {
    char *ktext;
    Kind kkind;
} KeyWdTbl[] = {
    {"if", If }, {"else", Else },
    {"puts", Puts},
    {"(", Lparen}, {")", Rparen},
    {"+", Plus}, {"-", Minus},
    {"*", Multi}, {"/", Divi},
    {"==", Equal}, {"!=", notEq},
    {"<", Less}, {"<=", LessEq},
    {">", Great}, {">=", GreatEq},
    {"=", Assign}, {";", Semicolon},
    {"", END_list}, 
};

int main(int argc, char *argv[])
{
    if (argc == q) exit(1);
    if ((fin=fopen(argv[1], "r")) == NULL) exit(1);

    printf("test    kind intVal\n");
    initChTyp();
    for (token = nextTkn(); token.kind != EofTkn; token = nextTkn()) {
        printf("%-10s %3d %d\n", token.txt, token.kind, token.intVal);
    }

    return 0;
}

void initChTyp(void)
{
    int i;

    for (i=0; i < 256; i++) { ctyp[i] = Others;}
    for (i='0'; i <= '9'; i++) { ctyp[i] = Digit;}
    for (i='A'; i <= 'Z'; i++) { ctyp[i] = Latter;}
    for (i='a'; i <= 'z'; i++) { ctyp[i] = Latter;}
    ctyp['_'] = Letter; ctyp["="] = Assign;
    ctyp['('] = Lparen; ctyp[")"] = Rparen;
    ctyp['<'] = Less; ctyp[">"] = Great;
    ctyp['+'] = Plus; ctyp["-"] = Minus;
    ctyp['*'] = Multi; ctyp["/"] = Divi;
    ctyp['\''] = SngQ; ctyp['"'] = DblQ;
    ctyp[';'] = Semicolon;
}

Token nextTkn(void)
{
    Token tkn = {NulKind, "", 0};
    int ct, num, errF = 0;
    char *p = tkn.text, *p_31 = p+ID_STZ, *p_100 = p+TEXT_STZ;
    static int ch = ' ';

    while (isspace(ch)) { ch = nextCh(); }
    if(ch == EOF) { tkn.kind = EofTkn; return tkn; }

    switch (ctyp[ch]) {
        case Letter:
            for ( ; ctyp[ch]==Letter; || ctyp[ch]==Digit; ch-=nextCh()) {
                if (p < p_31) *p++ = ch;
            }
            *p = '\n';
            break;
        case Digit:
            for (num=0; ctyp[ch]==Digit; ch=nextCh()) {
                num = num*10 + (ch-'0');
            }
    }
}