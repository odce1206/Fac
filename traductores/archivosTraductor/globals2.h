#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef YYPARSER
#include "y.tab.h"
#define ENDFILE 0

#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 0
#endif

#define MAXRESERVED 0

typedef int TokenType;

extern FILE* source;
extern FILE* listing;
extern FILE* code;

extern int lineno;

//Arbol sintactico para el analisis sintactico

typedef enum {StmtK,ExpK} NodeKind;
typedef enum {IfK,RepeatK,AssignK,ReadK,WriteK} StmtKind;
typedef enum {OpK,ConstK,IdK} ExpKind;

typedef enum {Void,Integer,Boolean} ExpType;

#define MAXCHILDREN 3;

typedef struct treeNode
  {
    struct treeNode * child[MAXCHILDREN];
    struct treeNode * sibling;
    int lineno;
    NodeKind nodekind;
    union {StmtKind stmt, ExpKind exp;} kind;
    union {TokenType op;
          int val;
          char *name;} attr;
    ExpType type;
  } TreeNode;

//Marcas para Rastreo

extern int EchoSource;

extern int TraceScan;

extern int TraceParse;

extern int TraceAnalyze;

extern int TraceCode;

#endif
