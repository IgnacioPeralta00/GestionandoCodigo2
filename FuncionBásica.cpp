//Encontrando el mayor de dos numeros

//Directivas de procesador: Librerias y macros
#include <iostream>
#include <conio.h>
using namespace std;

/* Prototipos de funcion: Se declara el tipo, nombre y variables principales de la funciones
existentes que llamaremos en la funcion principal */

int FindNumMax(int x, int y);

//Funcion principal

int main (){

int n1, n2;

cout << "Digite un entero: "; cin >> n1;
cout << "Digite otro entero: "; cin >> n2;

FindNumMax(n1,n2); /*Invocando a la función respectiva, la cual recibe "n1" y "n2" en la posicion
de "x" y de "y" en el orden digitado, o sea, n1 es recibido por x y n2 por y. Si se colocara
"FindNumMax(n2,n1)" entonces n2 sería recibido por x y n1 por y*/

cout << "\nEl numero mayor es: "<<FindNumMax(n1,n2)<< endl;


    getch();
    return 0;
}

//Definiciones de función LERLEROLEROLERO
int FindNumMax(int x, int y){
    int NumMax; //Esta no se coloca en las variables del parentesis pues es el valor de retorno. O sea 
    if (x > y)  //que depende de x y y
    { NumMax = x; }
    else
    { NumMax = y;}

    return NumMax; //El valor que esta funcion retorna.
    

}

