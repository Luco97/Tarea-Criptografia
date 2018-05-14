#include "Descifrador.h"
#include "Cifrado.h"
#include "Base.h"
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void menu()
{
    cout << "   Menu" << endl << endl;
    cout << "1. Cifrar" << endl << "2. Descifrar" << endl << "3. Salir" << endl << endl << "Opcion: ";
}

void Programa()
{
    Cifrado Encriptar;
    Descifrador Desencriptar;
    string mensaje = "",clave = "";
    bool Menu = true;
    int Opcion;
    do{
        menu();
        cin >> Opcion;
        switch(Opcion){
        case 1:
            system("cls");
            cout << "Mensaje: ";
            fflush(stdin);
            getline(cin,mensaje);
            cout << endl << "Clave: ";
            getline(cin,clave);
            system("cls");
            mensaje = Encriptar.Comienza(mensaje,clave);
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            if(mensaje != ""){
                cout << "Clave: ";
                fflush(stdin);
                getline(cin,clave);
                mensaje = Desencriptar.Comienza(mensaje,clave);
                system("pause");
            }
            system("cls");
            break;
        case 3:
            Menu = false;
            break;
        }
    }while(Menu != false);
}

int main()
{
    Programa();
    cout << "Hola mundo!" << endl;
    return 0;
}
