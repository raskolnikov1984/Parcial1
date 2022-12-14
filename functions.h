#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
// Declaración de Menús
int  main_menu(void);
int categories_menu(void);
void transactions_menu();

//Menú para pedir datos de usuario.

// Declaración de operaciones administrativas
void user_admin(char** User);
char** categories_admin(char** Categorias, char** Aux, int* n);
void search_records(void);

void print_array(char** Array, int n);

void menu(int *opc);
void imprimir1(char **Arreglo, int n);
void copiar(char** Origen, char **Destino, int n);

void copiarUni(char* Origen, char* Destino, int n); //copia volores de un arreglo unidimensional

int sizeChar(char* word); //Se determina la longitud de un arreglo de char
bool isletter(char a); //Verifica si es una letra
bool isnumber(char a); //Verifica si es un número
int tamano_arreglo_int(int entero);
char* entero_to_caracter(int entero);
bool isWord(char* word, int n);
bool isInteger(char* integer, int n);
int numInt(char* num); //Convierte un char en entero_to_caracter
void get_date_today(void);
bool isDate(char* date); //Se valida si es una fecha valida
int dayMonth(int month, int year); //Se usa para saber cuando dias puede tener un mes
bool edit(char* word);  //Corrije la palabra y la deja en el formato que se esta trabajando
bool isWord(char* word, int n);
bool edit(char* word);  //Corrije la palabra y la deja en el formato que se esta trabajando
bool check(char** Arreglo, int n, char* word); //Funcion que verifica si no existe dicho word en la lista
char** attach(char** Arreglo, char** Almacenar, int* n, char* word); //Agrega elementos a un arreglo
#endif // FUNCTIONS_H
