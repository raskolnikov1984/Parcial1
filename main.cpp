#include "functions.h"

int main()
{
  char** Users; //Arreglo de Usuarios [][]
  char** Categories; //Arreglo Manejo de Categories [][]
  char** Transactions; //Arreglo Manejo de Transacciones [][]

  bool run=true;
    
  do{
    int option;
    option = main_menu();
    
    switch(option)
    {
    case 1:
      user_admin();
      run = false;
      break;
    case 2:
      categories_admin();
      break;
    case 3:
      search_records();
      break;
    }
  }while(run);
  
/*
    int n = 0;
    int* ptrn = &n;
    int opcion;

    char **Categorias = nullptr;
    char **Aux = nullptr;

    do {
        menu(&opcion);
        switch (opcion) {
        case 1:
            imprimir(Categorias, n);
            break;

        case 2:
            char palabra1[20];
            cin>>palabra1;

            
            Aux = new char*[n];
            Copiar(Categorias,Aux,n);

            n++;

            Categorias = new char*[n];
            Copiar(Aux,Categorias,n-1);

            Categorias[n-1] = new char[sizeChar(palabra1)];
            for (int i = 0; i < sizeChar(palabra1); i++){
               Categorias[n-1][i] = palabra1[i];
            }
            
            Categorias=attach(Categorias,Aux,ptrn,palabra1);

            break;


        case 3:

            cout<<(Categorias[0]);
            
            char palabra[]="piolin";
            cout<<(check(Categorias,n,palabra));
            edit(Categorias[0]);
            cout << (Categorias[0]);
            break;
        }
    }while(opcion!=0);
*/

    return 0;

}

