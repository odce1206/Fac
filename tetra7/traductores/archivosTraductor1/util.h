#ifndef _UTIL_H_
#define _UTIL_H_

void printToken( TokenType, const char* );

TreeNode * newStmtNode(StmtKind);

TreeNode * newExpNode(ExpKind);

char * copy String( char * );

void printTree( TreeNode * );

#endif
