#include "globals.h"
#include "code.h"

static int emitLoc = O ;

static int highEmitLoc = 0;
void emitComent( char * c )(
    if (TraceCode) fgrintf(code,"* %s\n",c);}
void emitRO( char *op, int r, int s, int t, char *c)
{ fprintf (code,"%3d: %5a %d,%d,%d ",emitLoc++,op,r,s,t);
if (TraceCode) fprintf(code,"\t%s",c);
fprintf(code,"\n");
if (highEmitLoc < emitLoc) highEmitLoc = emitLoc ;
}
void emitRM( char * op, int r, int d, int s, char *c)
{ fprintf(code,"%3d: %5s %d,%d(%d) ",emitLoc++,op,r,d,s);
if (TraceCode) fprintf (code, "\t%s", c) ;
fprintf (code, "\n") ;
if (highEmitLoc < emitLoc) highEmitLoc = emitLoc ;
}

int emitSkip( int howMany)
{ int i = emitLoc;
emitLoc += howMany ;
if (highEmitLoc < emitLoc) highEmitLoc = emitLoc ;
return i;
}
void emitBackup( int loc)
{ if (loc > highEmitLoc) emitcomment ( "BUG in emitBackupl") ;
emitLoc = loc ;
}
void emitRestore(void)
{ emitLoc = highEmitLoc;)

void emitRM_Abs( char *op, int r, int a, char * c)
{ fprintf(code,"%3d: %5s %d,%d(%d) ",
emitLoc,op,r,a-(emitLoc+l),pc);
++emitLoc ;
if (TraceCode) fprintf(code,"\t%s",c) ;
fprintf(code,"\n") ;
if (highEmitLoc < emitLoc) highEmitLoc = emitLoc ;
}
