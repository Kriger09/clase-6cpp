#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;


int main(){
//1.- Encuentra el mensaje oculto en el siguiente array
    string descubriendo[3][3]=
    {
        {"mundo", "maiz", "star"},
        {"sol", "silla", "C++"},
        {"hola", "en", "corazón"}
    };

    //Palabra 1, guardame en una variable. PISTA: Palabra comúnmente utilizada para saludar a alguien
    string p1=descubriendo[2][0];
    //Palabra 2, guardame en una variable. PISTA: Soy una preposición
    string p2=descubriendo[2][1];
    //Palabra 3, guardame en una variable. PISTA: Es un lenguaje de programación
    string p3=descubriendo[1][2];


    cout<<"¡FELICIDADES!, Me encontraste, el mensaje es: "<<p1<<"\t"<<p2<<"\t"<<p3<<"\t"<<endl;

    //Muestra el mensaje secreto concatenando variables
   
}