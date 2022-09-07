#ifndef parsingMod
#define parsingMod
#include "listaComMod.h"
#include "abbMod.h"
#include "archivoMod.h"

typedef enum{create, insback, show, sum, concat, reverse, save, load, exit, null}comando;

//Devolver� una variable de tipo comando seg�n el string ingresado,
//en caso de que el string no coincida con ning�n comando se devolver� null.
comando strToCom(string str);
//Entra en un bucle el cual acaba cuando el usuario ingresa el comando exit,
//en este bucle se pide al usuario que ingrese el comando y se ejecuta la acci�n que corresponda
void comEjecucion();
//Valida todos los par�metros e inserta una secuencia en el �rbol.
void comCreate(ListaCom lstCom, Arbol& a);
//Valida todos los par�metros e inserta un n�mero en una secuencia del �rbol.
void comInsBack(ListaCom lstCom, Arbol& a);
//Valida todos los par�metros y muestra todas las secuencias en el �rbol.
void comShow(ListaCom lstCom, Arbol& a);
//Valida todos los par�metros y muestra la suma de todos los elementos de la secuencia.
void comSum(ListaCom lstCom, Arbol& a);
//Valida todos los par�metros y concatena las dos primeras secuencias dadas en una nueva secuencia.
void comConcat(ListaCom lstCom, Arbol& a);
//Valida todos los par�metros y guarda la secuencia dada por el primer par�metro en una nueva secuencia pero invertida.
void comReverse(ListaCom lstCom, Arbol& a);
//Valida todos los par�metros y guarda en el disco la secuencia dada.
void comSave(ListaCom lstCom, Arbol& a);
//Valida todos los par�metros y levanta del disco el archivo pedido e inserta la secuencia del archivo en el �rbol.
void comLoad(ListaCom lstCom, Arbol& a);


#endif // !"parsingMod.h"