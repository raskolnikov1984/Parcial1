#include "functions.h"


void imprimir(char **Arreglo, int n){
    cout << "\n************ Categorias ***********" << endl;
    if (n==0) {
        cout << "   ----- No hay Categorias -----" << endl;
    }
    for (int i = 0; i < n; ++i) {
        cout << Arreglo[i] << endl;
    }
    cout << "***********************************" << endl;
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

void Copiar(char **Origen, char **Destino, int n){
    for (int i = 0; i < n; ++i) {

        Destino[i] = new char[(sizeChar(Origen[i]))-1];
        Destino[i] = Origen[i];
    }
    delete[] Origen;
    Origen = nullptr;
}


int sizeChar(char* word){
    bool condi = true;
    int i = 0;

    //Se itera mientras no se encuentre el caracter nulo.
    while(condi == true){
        if(word[i] != 0) i++;

        else condi = false;
    }
    return i;
}

bool isletter(char a){
    if ((a >= 97 | a <= 122) && (a >= 65 | a <= 90)) return true;
    else return false;
}

bool edit(char* word){
    int size=sizeChar(word);
    for (int i = 0; i < size; i++){
        if (isletter(word[i]) == true){
            if (i==0){
                if (word[0] >= 97 | word[0] <= 122) word[i] -= 32;
            }
            else{
               if (word[0] >= 65 | word[0] <= 90) word[i] +=32;
            }
        }
        else word[i]=0;
        return false;
    }
    return true;
}

bool check(char** Arreglo, int n, char* word){
    if (n == 0) return false;
    int sizeWord = sizeChar(word), cont = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < (sizeChar(Arreglo[i])-1); j++){
            if (Arreglo[i][j] == word[j]){
                cont++;
            }
        }
        if (cont == (sizeWord-1)) return true;
        else cont=0;
    }
    return false;
}

char** attach(char** Arreglo, char** Almacenar, int* n, char* word){
    if (check(Arreglo,*n,word) == false){

        Almacenar = new char*[*n];
        Copiar(Arreglo,Almacenar,*n);

        *n = *n + 1;

        Arreglo = new char*[*n];
        Copiar(Almacenar,Arreglo,*n-1);

        Arreglo[*n-1] = new char[sizeChar(word)];
        for (int i = 0; i < sizeChar(word); i++){
            Arreglo[*n-1][i] = word[i];
        }
        Arreglo[*n-1][sizeChar(word)]=0;

        return Arreglo;

    }
}

