#ifndef listaNumMod
#define listaNumMod
#include "stringMod.h"

typedef struct nodoNumL {
    int info;
    nodoNumL* sig;
}nodoNum;

typedef nodoNum* ListaNum;

//Deja la lista apuntando a NULL.
void lstCrear(ListaNum& L);
//Muestra el contenido de la lista.
void lstMostrar(ListaNum L);
//Determina si la lista está vacía.
boolean lstVacia(ListaNum L);
//Inserta el número dado al principio de la lista.
void insFront(ListaNum& L, int num);
//Inserta el número dado al final de la lista.
void insBackNum(ListaNum& L, int num);
//Inserta L1 y L2 en L3 en ese orden.
void lstConcatenar(ListaNum L1, ListaNum L2, ListaNum& L3);
//Devuelve la suma de todos los valores de la lista. 
int lstSumar(ListaNum L);
//Inserta L1 en L2 pero de manera invertida.
void lstInvertir(ListaNum L1, ListaNum& L2);
//Baja la lista al archivo dado.
//Precondición: el archivo viene abierto para escritura.
void Bajar_Lista(ListaNum L, FILE* f);
//Levanta la lista del archivo dado.
//Precondición: el archivo viene abierto para lectura.
void Levantar_Lista(ListaNum& L, FILE* f);


#endif 