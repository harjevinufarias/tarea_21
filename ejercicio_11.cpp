/*
Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:
+
++
+++
++++
*/

#include <iostream>

using namespace std;


void Figura(int filas, const string & relleno) 
{
    for (int i = 1; i <= filas; i++) 
    {
        for (int p = 0; p < i; p++) 
        {
            cout<<relleno;
        }
        cout<<endl;
    }
}

int main() 
{
    int filas;
    string relleno;
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;

    cout<<"Ingrese el relleno: ";
    cin>>relleno;

    Figura(filas, relleno);

    return 0;
}