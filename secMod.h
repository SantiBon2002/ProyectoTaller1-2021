#ifndef secMod
#define secMod
#include "listaNumMod.h"

typedef struct {
	string ident;
	ListaNum Nums;
}Sec;

//Devuelve un string con el identificador de la secuencia dada.
string darIdent(Sec secu);
//Devuelve la cabeza de la lista de la secuencia dada.
ListaNum darLstNum(Sec secu);
//Crea una secuencia.
void secCrear(Sec &secu, string id);
//Muestra una secuencia.
void secMostrar(Sec secu);
//Guarda en disco la secuencia dada.
void Bajar_Sec(Sec secu, string nomArch);
//Levanta una secuencia del disco.
void Levantar_Sec(Sec& secu, string nomArch);

#endif