#ifndef parsingMod
#define parsingMod
#include "listaComMod.h"
#include "abbMod.h"
#include "archivoMod.h"

typedef enum{create, insback, show, sum, concat, reverse, save, load, exit, null}comando;

//Devolverá una variable de tipo comando según el string ingresado,
//en caso de que el string no coincida con ningún comando se devolverá null.
comando strToCom(string str);
//Entra en un bucle el cual acaba cuando el usuario ingresa el comando exit,
//en este bucle se pide al usuario que ingrese el comando y se ejecuta la acción que corresponda
void comEjecucion();
//Valida todos los parámetros e inserta una secuencia en el árbol.
void comCreate(ListaCom lstCom, Arbol& a);
//Valida todos los parámetros e inserta un número en una secuencia del árbol.
void comInsBack(ListaCom lstCom, Arbol& a);
//Valida todos los parámetros y muestra todas las secuencias en el árbol.
void comShow(ListaCom lstCom, Arbol& a);
//Valida todos los parámetros y muestra la suma de todos los elementos de la secuencia.
void comSum(ListaCom lstCom, Arbol& a);
//Valida todos los parámetros y concatena las dos primeras secuencias dadas en una nueva secuencia.
void comConcat(ListaCom lstCom, Arbol& a);
//Valida todos los parámetros y guarda la secuencia dada por el primer parámetro en una nueva secuencia pero invertida.
void comReverse(ListaCom lstCom, Arbol& a);
//Valida todos los parámetros y guarda en el disco la secuencia dada.
void comSave(ListaCom lstCom, Arbol& a);
//Valida todos los parámetros y levanta del disco el archivo pedido e inserta la secuencia del archivo en el árbol.
void comLoad(ListaCom lstCom, Arbol& a);


#endif // !"parsingMod.h"