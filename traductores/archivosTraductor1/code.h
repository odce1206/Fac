#ifndef _CODE_H_
#define _CODE_H_

#define pc 7

#define mp 6

#define gp 5

#define ac O

#define acl 1

void emitRO( char *op, int r, int S, int t, char *c);

void emitRM( char * op, int r, int d, int s, char *c);

int emitSkip( int howMany);

void emitBackup( int loc) ;

void emitRestore(void) ;

void emitComment( char * c );

void emitRM_Abs( char *op, int r, int a, char * c);

#endif
