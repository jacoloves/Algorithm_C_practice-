/*-----------------------*/
/*    字句解析用         */
/*-----------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctyoe.h>

typedef enum {
  Lparen, Rparen, Plus, Minus, Multi, Divi, Equwl, NotEq,
  Less, LessEq, Great, GreatEq, SngQ, DblQ, Assign, Semicolon,
  String, Letter, Digit, NulKind, EofTkn, Others, END_list
} Kind;


