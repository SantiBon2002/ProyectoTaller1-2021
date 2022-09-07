#ifndef stringMod
#define stringMod

#include "booleanMod.h" 

const int MAX = 80;
typedef char* string;

//Crea un string vacío.
void strCrear(string& s);
//Libera la memoria usada por el string.
void strDestruir(string& s);
//Devuelve el largo del string s.
int strLar(string s);
//Copia el contenido del string s2 en s1.
void strCop(string& s1, string s2);
//Lee el string s desde teclado.
void strScan(string& s);
//Imprime el string s por pantalla.
void strPrint(string s);
//Compara dos strings para ver si son exactamente iguales siendo case-sensitive
boolean strEq(string s1, string s2);
//Devuelve TRUE en caso de que s1 sea menor alfabéticamente que s2.
boolean strmen(string s1, string s2);
//Determina si un string es totalmente alfabético(también admite '.').
boolean strEsAlfabetico(string s);
//Determina si un string es totalmente numérico.
boolean strEsNumerico(string s);
//Determina si un string finaliza con ".txt".
boolean validarNomArch(string s);
//Toma el valor de un string y lo devuelve como entero.
//Precondición: el string es totalmente numérico.
int strToInt(string s);
//Devuelve la cantidad de palabras en un string con ayuda de los espacios entre palabras.
int strContPalabras(string s);
//Escribe en el archivo los caracteres del string s
//Precondición: El archivo viene abierto para escritura.
void Bajar_String(string s, FILE* f);
//Lee desde el archivo los caracteres del string s.
//Precondición: El archivo viene abierto para lectura.
void Levantar_String(string& s, FILE* f);


#endif
