#include "Descifrador.h"
#include "Cifrado.h"
#include "Base.h"
#include <stdlib.h>
using namespace std;


void Programa()
{
    string mensaje,clave;
    Cifrado Encriptar;
    bool Salida;
    do{
        cout << "Mensaje: ";
        getline(cin,mensaje);
        cout << endl << "Clave: ";
        getline(cin,clave);
        system("cls");
        Salida = Encriptar.Comienza(mensaje,clave);
        mensaje = Encriptar.GetMensaje();
    }while(Salida != true);
    system("pause");
    system("cls");
    Descifrador Desencriptar(mensaje,clave);
    clave = "";
    do{
        cout << "Clave: ";
        getline(cin,clave);
    }while(clave != Desencriptar.GetClave());
    Desencriptar.Comienza(Desencriptar.GetMensaje(),clave);
}

int main()
{
    Programa();
    cout << "Hola mundo!" << endl;
    return 0;
}
