#ifndef listaComMod
#define listaComMod
#include "stringMod.h"

typedef struct nodoComL {
    string info;
    nodoComL* sig;
}nodoCom;

typedef nodoCom* ListaCom;

//Deja la lista apuntando a NULL.
void lstComCrear(ListaCom& lstCom);
//Inserta el string dado al final de la lista.
void insBackCom(ListaCom& L, string str);
//Separa el string dado en substrings por medio de sus espacios y los inserta en una lista.
void strSeparar(string s, ListaCom &lstCom); 
//Devuelve la cantidad de strings que hay en la lista.
int contParametros(ListaCom lstCom);
//Librea el espacio en memoria ocupado por la lista.
void lstDelete(ListaCom& lstCom);

#endif
