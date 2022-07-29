#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>

using namespace std;

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
//void imprimir(char Arreglo[][20], int n);
void copiar(char** Origen, char **Destino, int n);
void copiarUni(char* Origen, char* Destino, int n); //copia volores de un arreglo unidimensional
int sizeChar(char* word); //Se determina la longitud de un arreglo de char
bool isletter(char a); //Verifica si es una letra
bool isnumber(char a); //Verifica si es un número
bool isWord(char* word, int n);
bool edit(char* word);  //Corrije la palabra y la deja en el formato que se esta trabajando
bool check(char** Arreglo, int n, char* word); //Funcion que verifica si no existe dicho word en la lista
char** attach(char** Arreglo, char** Almacenar, int* n, char* word); //Agrega elementos a un arreglo
#endif // FUNCTION_H
