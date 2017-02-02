#include "globals.h"
#include "symtab.h"
#include "analyze.h"

static int location = 0;

static void traverse( TreeNode * t,
void (* preProc) (TreeNode *),
void (* postProc) (TreeNode *) )
{ if (t != NULL)
{ preProc(t);
{ int i;
for (i=0; i < MAXCHILDREN; i++)
traverse(t->child[il,preProc,poetProc);
}
postProc(t);
traverse(t->sibling,preProc,postProc);
}
}

if (st_lookup(t->attr.name) == -1)
st_insert(t->attr.name,t->lineno,location++);
else
st-insert(t->attr.name,t->lineno,O);
break;
default:
break;
}
break;
case ExpK:
switch (t->kind.exp)
{case IdK:
if (st_lookup(t->attr.name) == -1)
st_insert(t->attr.name,t->lineno,location++);
else
st_insert(t->attr.name,t->lineno,O);
break;
default:
break;
}
break;
default:
break;
}
}

void buildSymtab(TreeNode * syntaxTree)
{ traverse(syntaxTree,insertNode,nullProc);
if (TraceAnalyze)
{ fprintf (listing, "\nSymbol table:\n\n");
printSymTab(1isting);
}
}

static void typeError(TreeN0de * t, char * message)
{ fprintf (listing, "Type error at line %d: %s\n", t->lineno,message) ;
Error = TRUE;
}

static void checkNode(TreeN0de * t)
( switch (t->nodekind)
case ExpK:
switch (t->kind.exp)
{ case OpK:
if ((t->child[O]->type != Integer)  I I
(t->child[l]->type != Integer))
typeError (t, "Op applied to non-integer") ;
if ((t->attr.op == EQ) l I (t->attr.op == LT))
t->type = Boolean;
else
t->type = Integer;
break;
case ConstK:
case IdK:
t->type = Integer;
break;
default:
break;
}
break;
case StmtK:
switch (t->kind.stmt)
( case IfK:
if (t->child[O] ->type == Integer)
typeError(t->child[O],"if test is not Boolean");
break;
case AssignK:
if (t->child[O] ->type != Integer)
typeError(t->child [o],"asslgnment of non-integer value") ;
break;
case WriteK:
if (t->child[Ol->type != Integer)
typeError(t->child[O], "write of non-integer value") ;
break;
case RegeatK:
if (t->child[l] ->type == Integer)
typeError(t->child[l] , "rapeat test is not Boolean") ;
break;
default:
break;
}
break;
default:
break;

}
}

void tygeCheck(TreeNode * syntaxTree)
{ traverse(syntaxTree,nullProc,checkNode);
}
