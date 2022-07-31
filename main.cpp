#include "functions.h"


int main()
{
    char** Users; //Arreglo de Usuarios [][]
    char** Categories = nullptr; //Arreglo Manejo de Categories [][]
    char** Transactions; //Arreglo Manejo de Transacciones [][]
    char** Aux = nullptr  ; //Arreglo auxiliar para realizar copias debe permanecer vacío
    int nCat = 0;
    int* ptrnCat = &nCat;

      
    get_date_today();
    bool run=true;
    
    do{
      	cout<<Categories;
        int option;
        option = main_menu();


        switch(option)
        {
        case 1:
	  user_admin(Users);
	  run = false;
	  break;
        case 2:
	  Categories = categories_admin(Categories, Aux, ptrnCat);
	  break;
        case 3:
	  break;
        }
    }while(run);    
    return 0;
}
