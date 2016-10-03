/***********************************************************************/
/*Archivo: symtab.h						       */
/*Interfaz de la tabla de simbolos para el compilador TINYY            */
/*(permite solamente una tabla de simbolos)                            */
/*Construccion de compiladores: principiod y practica 		       */
/*Kenneth C. Louden 						       */
/***********************************************************************/

#ifndef _SYMTAB_H_
#define _SYMTAB_H_

void st_insert( char * name, int lineno, int loc );

int st_lookup ( char * name );

void printSymtab(FILE * listing);

#endif
