#ifndef abbMod
#define abbMod
#include "secMod.h"

typedef struct nodoA {
    Sec info;
    nodoA* hizq;
    nodoA* hder;
}nodo;

typedef nodo* Arbol;

//Crear �rbol vac�o.
void CrearAbb(Arbol& a);
//Devuelve TRUE si el �rbol est� vac�o y FALSE en caso contrario.
boolean EsVacio(Arbol a);
//Inserta un socio en el arbol.
//Precondici�n: la secuencia no exist�a previamente en el ABB
void Insert(Arbol& a, Sec secu);
//Lista las secuencias en orden.
void Orden(Arbol a);
//Devuelve TRUE si el id dado coincide con el ident de una secuencia en el arbol.
boolean existeSec(Arbol a, string id);
//Devuelve la secuencia que tenga el mismo ident que el ingresado.
//Precondici�n: la secuencia existe.
Sec darSec(string ident, Arbol a);
//Devuelve un puntero de tipo �rbol cuya secuencia tenga el mismo ident que el ingresado.
//Precondici�n: la secuencia existe.
Arbol darPuntSec(string id, Arbol a);
//Libera toda la memoria ocupada por el �rbol.
void deleteAbb(Arbol& a);

#endif // !abbMod

