#include "functions.h"

using namespace std;

int main_menu(void){

    int option;
    bool repeat = true;

    do{

        system("cls");

        cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t. Operaciones basicas" << endl;
        cout << "\n\t1. Administrar Usuarios"<< endl;
        cout << "\n\t2. Administrar Categorías"<< endl;
        cout << "\t. Transaccionales" << endl;
        cout << "\n\t3. Listar Registros"<< endl;

        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            repeat = false;
            break;

        case 2:
            repeat = false;
            break;

        case 3:
            repeat = false;
            break;

        case 4:
            repeat = false;
            break;

        case 0:
            repeat = false;
            break;
        default:
            repeat = true;
        }
    } while (repeat);
    return option;
}

int  user_menu(void){
    int option;
    bool repeat = true;

    do{
        system("cls");
      
        cout << "\n\n\t\t\tMENU USERS" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t1. Registrar Usuario" << endl;
        cout << "\t2. Listar Usuarios" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            repeat = false;
            break;

        case 2:
            repeat = false;
            break;

        case 0:
            repeat = false;
            break;
        default:
            repeat = true;
        }
    } while (repeat);
    return option;
}

void categories_menu(){
    int option;
    bool repeat = true;

    do{
        system("cls");

        cout << "\n\n\t\t\tMENU CATEGORIES" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t1. Operaciones basicas" << endl;
        cout << "\t2. Operaciones variadas" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una option: ";
        cin >> option;
    } while (repeat);
}

char* get_dates_user(int numeroCampo){
  /*función que se encarga de pedir datos de usuarios*/
  char* Aux;
  int sizeWord,numchar = 0;
  bool palabra = true;
  const int charMax = 30; //longitud máxima de caracteres

  switch(numeroCampo){
  case 1:
    do{
      Aux = new char[charMax];
      cin>>Aux;
      sizeWord = sizeChar(Aux);
      palabra = isWord(Aux, sizeWord);
      if(palabra==false || palabra == 0){
	cout << "\n\t VALOR INCORRECTO, INGRESE ( 0 ) PARA CANCELAR!!!" << endl;
      }else{
	return Aux;
	delete[] Aux;
	Aux = nullptr;
      }
    }while(palabra == false || palabra != 0);
    
  case 0:
    int document, sizeEntero;
    char* charDocument;
    cin>>document;
    sizeEntero = tamano_arreglo_int(document);
    Aux = new char[sizeEntero];
    charDocument = entero_to_caracter(document);
    for(int i=0; i < sizeEntero; i++){
      *(Aux+i) = *(charDocument+i);
    }
  }
  return Aux;
}

void user_admin(char** User){
  /*función que permite administrar usuarios.*/
  const int charMax = 30; //longitud máxima de caracteres
  char* document = new char[charMax];
  char* name = new char[charMax];
  char* apellidos = new char[charMax];
  char* day[2], month[2], year[4];
  int option;
  int n=0;

  option = user_menu();
  switch(option)
    {
    case 1:
      char dn[2], mn[2], an[4];
      char dateBirthday[12];
      cout<<"\t\t\t-------------------------------------------------";
      cout << "\n\t Por favor Ingrese el valor del campo Documento: ";
      cin>>document;
      cout << "\n\t Por favor Ingrese el valor del campo Nombre: ";
      name = get_dates_user(1);
      cout << "\n\t Por favor Ingrese el valor del campo Apellidos: ";
      apellidos = get_dates_user(1);
      cout<<"\t\t\t-------------FECHA DE NACIMIENTO----------------";

      //Introducir por teclado la fecha de nacimiento
      cout << "\n\tFecha de nacimiento:\n";
      cout << "\n\tDia: ";
      cin >> dn;
      cout << "\n\tMes: ";
      cin >> mn;
      cout << "\n\tAnio: ";
      cin >> an;

      for(int i=0; i<sizeof(dn); i++){
	dateBirthday[i] = dn[i];
      }
      dateBirthday[2] = '/';
      n+=3;
      for(int i=0; i<sizeof(mn); i++){
	dateBirthday[n] = mn[i];
	n++;
      }
      dateBirthday[n] = '/';
      for(int i=0; i<sizeof(an); i++){
	n++;
	dateBirthday[n] = an[i];
      }

      cout<<document;
      cout<<name;
      cout<<apellidos;
      cout<<dateBirthday;

      break;
  case 2:
    //print_array();
    break;
  }
}

void categories_admin(void){
    /*función que permite administrar categoráis.*/
}

void search_records(void){
    /*función que permita buscar registros dependiendo
    de los parametros suministrados*/
}

void print_array(char** Array, int n){
    cout << "\n************ Categorias ***********" << endl;
    if (n==0) {
        cout << "   ----- No hay Categorias -----" << endl;
    }
    for (int i = 0; i < n; ++i) {
        cout << Array[i] << endl;
    }
    cout << "***********************************" << endl;
}

void imprimir1(char **Arreglo, int n){
    cout << "\n************ Categorias ***********" << endl;
    if (n==0) {
        cout << "   ----- No hay Categorias -----" << endl;
    }
    for (int i = 0; i < n; ++i) {
        cout << Arreglo[i] << endl;
    }
    cout << "***********************************" << endl;
}


void transactions_menu(){
    int option;
    bool repeat = true;

    do{
        system("cls");

        cout << "\n\n\t\t\tMENU TRANSACTIONS" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t1. Operaciones basicas" << endl;
        cout << "\t2. Operaciones variadas" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una option: ";
        cin >> option;
    }while(repeat);
}

void menu(int *opc){
    //int opc;
    cout << "\nMenu" << endl;
    cout << "1. Visualizar Categorias" << endl;
    cout << "2. Agregar" << endl;
    cout << "3. Eliminar" << endl;
    cout << "0. Salir" << endl;

    cout << "Seleccion: ";
    cin >> *opc;
}

int sizeChar(char* word){
    /*Función que se encarga de retornar un entero
    cuyo valor es la longitud de un conjunto de
    caracteres*/
    bool condi = true;
    int i = 0;

    //Se itera mientras no se encuentre el caracter nulo.
    while(condi == true){
        if(word[i] != 0){
            i++;
        }else{condi = false;}
    }return i;
}

bool isWord(char* word, int n){
    bool palabra = true;
    for(int i = 0; i<n; i++){
        palabra = isletter(*(word + i));
        if(palabra==false){
            break;
            return palabra;
        }
    }return palabra;
}

bool isletter(char a){
    /*Funcion qeu se encarga de verificar si el caracter
    es una letra*/
    if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
    {
        return true;
    }else{
        return false;
    }
}

bool isnumber(char a){
    /*Funcion que se encarga de verificar si el caracter
    es un número*/
    if (a>=48 && a<=57) return true;
    else return false;
}

int numInt(char* num){
    int size = sizeChar(num), place = pow(10,size-1), sum = 0;
    for (int i = 0; i<size; i++){
        if (isnumber(num[i]) == true){
            sum = sum+((num[i]-48)*place);
            place /= 10;
        }
    }
    return sum;
}


bool isDate(char* date){
    int size = sizeChar(date);
    int dia = 0, mes = 0, año = 0, availday = 0;
    char day[3]= {}; char month[3]={}; char year[5];

    //DD/MM/AAAA => size=10

    if (size == 10){
        day[0] = date[0];
        day[1] = date[1];
        day[2] = 0;
        month[0] = date[3];
        month[1] = date[4];
        month[2] = 0;
        year[0] = date[6];
        year[1] = date[7];
        year[2] = date[8];
        year[3] = date[9];
        year[4] = 0;

        año = numInt(year);
        if (año > 0){
             mes = numInt(month);
             if (mes >=1 && mes <=12){
                 availday = dayMonth(mes,año);
                 dia = numInt(day);
                 if (dia <= availday && dia >0) return true;
             }
        }
        return false;
    }
    else return false;
}

int dayMonth(int month, int year){
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else if (month == 2){
        if ((year % 4 == 0) || ((year % 100 !=0) && (year % 400 ==0))) return 29;
        else return 28;
    }
    else return 31;
}

char* entero_to_caracter(int entero){
  int sizeEntero = (tamano_arreglo_int(entero));
  char* Cadena = new char[sizeEntero];

  for(int i=0;i<sizeEntero;i++){
    Cadena[sizeEntero-i] = (entero % 10)+48;
    entero = entero / 10;
  }return Cadena;
}

int tamano_arreglo_int(int entero){
  bool ban = true;
  int i=0, residuo=0;

  while(entero > 0){
    residuo = entero % 10;
    entero = entero / 10;
    i++;
    
  }return i;
}

bool edit(char* word){
    int size=sizeChar(word);
    for (int i = 0; i < size; i++){
        if (isletter(word[i]) == true){
            if (i==0){
                if (word[0] >= 97 && word[0] <= 122) word[i] -= 32;
            }
            else{
                if (word[0] >= 65 && word[0] <= 90) word[i] +=32;
            }
        }
        else word[i]=0;
        return false;
    }
    return true;
}

void copiarUni(char* Origen, char* Destino, int n){
    for(int i=0; i<n; i++){
        *(Origen+i) = *(Destino+i);
    }
}
void copiar(char **Origen, char **Destino, int n){
    /*
  Función que se encarga de copiar de un arreglo bidimensional a otro
  */
    for (int i = 0; i < n; ++i){
        Destino[i] = new char[(sizeChar(Origen[i]))-1];
        Destino[i] = Origen[i];
    }

    delete[] Origen;
    Origen = nullptr;
}

bool check(char** Arreglo, int n, char* word){
    if (n == 0){
        return false;
    }
    int sizeWord = sizeChar(word), cont = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < (sizeChar(Arreglo[i])-1); j++){
            if (Arreglo[i][j] == word[j]){
                cont++;
            }
        }
        if(cont == (sizeWord-1)){
            return true;
        }else {cont=0;}
    }
    return false;
}


char** attach(char** Arreglo, char** Almacenar, int* n, char* word){
    /* Función que permite agregar registros al arreglo
     realizando una copia en otro arreglo bidimensional */
    if (check(Arreglo,*n,word) == false){
        Almacenar = new char*[*n];
        copiar(Arreglo,Almacenar,*n);

        *n = *n + 1;

        Arreglo = new char*[*n];
        copiar(Almacenar,Arreglo,*n-1);

        Arreglo[*n-1] = new char[sizeChar(word)];
        for (int i = 0; i < sizeChar(word); i++){
            Arreglo[*n-1][i] = word[i];
        }
        Arreglo[*n-1][sizeChar(word)]=0;

    }return Arreglo;
}
