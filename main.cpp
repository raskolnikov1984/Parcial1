#include "functions.h"


// int main()
// {
//     char** Users; //Arreglo de Usuarios [][]
//     char** Categories; //Arreglo Manejo de Categories [][]
//     char** Transactions; //Arreglo Manejo de Transacciones [][]
//     char** Aux; //Arreglo auxiliar para realizar copias debe permanecer vacío

    get_date_today();
    cout << sizeof(Categories);
    bool run=true;
    
    do{
        int option;
        option = main_menu();

        switch(option)
        {
        case 1:
	  user_admin(Users);
	  run = false;
	  break;
        case 2:
	  categories_admin(Categories, Aux);
	  break;
        case 3:
	  break;
        }
    }while(run);    
    return 0;
}
