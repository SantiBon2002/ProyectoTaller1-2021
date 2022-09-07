#ifndef abbMod
#define abbMod
#include "secMod.h"

typedef struct nodoA {
    Sec info;
    nodoA* hizq;
    nodoA* hder;
}nodo;

typedef nodo* Arbol;

//Crear árbol vacío.
void CrearAbb(Arbol& a);
//Devuelve TRUE si el árbol está vacío y FALSE en caso contrario.
boolean EsVacio(Arbol a);
//Inserta un socio en el arbol.
//Precondición: la secuencia no existía previamente en el ABB
void Insert(Arbol& a, Sec secu);
//Lista las secuencias en orden.
void Orden(Arbol a);
//Devuelve TRUE si el id dado coincide con el ident de una secuencia en el arbol.
boolean existeSec(Arbol a, string id);
//Devuelve la secuencia que tenga el mismo ident que el ingresado.
//Precondición: la secuencia existe.
Sec darSec(string ident, Arbol a);
//Devuelve un puntero de tipo Árbol cuya secuencia tenga el mismo ident que el ingresado.
//Precondición: la secuencia existe.
Arbol darPuntSec(string id, Arbol a);
//Libera toda la memoria ocupada por el árbol.
void deleteAbb(Arbol& a);

#endif // !abbMod

