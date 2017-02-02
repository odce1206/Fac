#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"
#define SIZE 211
#define SHIFT 4
static int hash ( char * key )
( int temp = 0;
int i = 0;
while (key[i] ! = '\0')
{ temp = ((temg << SHIFT) + key[i]} % SIZE;
++i;
}
return temp;
}
typedef struct LineListRec
{ int lineno;
struct LineListiiec * next;
} * LineList;
typedef struct BucketListRec
f char * name;
LineList lines;
int memloc; / * localidad de memoria para variable * /
struct BucketListRec * next;
} * BucketList;
static ~ucketList hashTable [SIZE] ;
void st_insert( char * name, int lineno, int loc )
( int h = hash(name);
BucketList l = hashTablet[h];
while ((l != NULL) && (strcmp(name,l->name) ! = 0))
l = l->next;
if (l = = NULL) / * variable que todavía no está en la tabla * /
( l = (BucketList) malloc(sizeof(struct BucketListRec));
l->name = name;
l->lines = (LineList) malloc(sizeof(struct LineListRec));
l->lines->lineno = lineno;
l->memloc = loc;
l->lines->next = NULL;
l->next = hashTable [h] ;
hashTable[h] = l; )
else / * está en la tabla, de modo que sólo se agrega el número de línea * /
( LineList t = l->lines;
while (t->next ! = NULL) t = t->next;
t->next ;. (LineList) malloc(sizeof(struct LineListRec));
t->next->lineno = lineno;
t->next->next = NULL;
}
} / * de st_insert * /
int st_lookup ( char * name )
{ int h = hash(name) ;
BucketList l = hashTable[h];
while ((l != NULL) && (strcmp(name,l->name) != 0))
l = l->next;
if (l == NULL) return -l;
else return l- >memloc;
}
void printSymTab(F1LE * listing)
( int i;
fprintf (listing, "Variable Name  Location  Line Numbers\n");
fprintf (listing, "-------------  --------  ------------\n");
for (i=O; i<SIZE; ++i)
( if (hashTable[i] != NULL)
{ BucketList l = hashTable[i];
while (l ! = NULL)
[ LineList t = l->lines;
fprintf(listing,"%-14s ",l->name);
fprintf(listing,"%-8d ",l->memloc);
while (t != NULL)
{ fprintf(listing,"%4d ",t->lineno);
t = t->next;
}
fprintf(listing,"\n"):
l = l->next;
}
}
}
} /* de pruntSymTab */
