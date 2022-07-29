#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
using namespace std;
#include <math.h>

// Declaración de Menús
int  main_menu(void);
void categories_menu();
void transactions_menu();

//Menú para pedir datos de usuario.

// Declaración de operaciones administrativas
void user_admin(char** User);
void categories_admin();
void search_records();

void print_array(char** Array, int n);

void menu(int *opc);
void imprimir1(char **Arreglo, int n);
void copiar(char** Origen, char **Destino, int n);

void copiarUni(char* Origen, char* Destino, int n); //copia volores de un arreglo unidimensional

int sizeChar(char* word); //Se determina la longitud de un arreglo de char
bool isletter(char a); //Verifica si es una letra
bool isnumber(char a); //Verifica si es un número
<<<<<<< HEAD
int tamano_arreglo_int(int entero);
char* entero_to_caracter(int entero);
bool isWord(char* word, int n);
bool isInteger(char* integer, int n);
=======
int numInt(char* num); //Convierte un char en entero
bool isDate(char* date); //Se valida si es una fecha valida
int dayMonth(int month, int year); //Se usa para saber cuando dias puede tener un mes
bool edit(char* word);  //Corrije la palabra y la deja en el formato que se esta trabajando

bool isWord(char* word, int n);

>>>>>>> 4a937e490878a3b93f12127fa2bbbf886b93e484
bool edit(char* word);  //Corrije la palabra y la deja en el formato que se esta trabajando
bool check(char** Arreglo, int n, char* word); //Funcion que verifica si no existe dicho word en la lista
char** attach(char** Arreglo, char** Almacenar, int* n, char* word); //Agrega elementos a un arreglo
#endif // FUNCTIONS_H
