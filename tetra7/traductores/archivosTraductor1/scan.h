/***********************************************************************/
/*Archivo: acan.h						       */
/*La interfaz del analizador lexico para el compilador TINY	       */
/*Construccion de compiladores: principiod y practica 		       */
/*Kenneth C. Louden 						       */
/***********************************************************************/

#ifndef _SCAN_H_
#define _SCAN_H_

#define MAXTOKENLEN 40

extern char tokenString(MAXTOKENLEN+1);

TokenType getToken(void);

#endif
