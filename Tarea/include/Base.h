#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;

class Base
{
        string Mensaje;
        string Clave;
    public:
        Base();
        virtual ~Base();
        string GetMensaje() { return Mensaje; }
        void SetMensaje(string val) { Mensaje = val; }
        string GetClave() { return Clave; }
        void SetClave(string val) { Clave = val; }
};

#endif // BASE_H
