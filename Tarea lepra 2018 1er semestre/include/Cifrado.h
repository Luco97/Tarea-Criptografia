#ifndef CIFRADO_H
#define CIFRADO_H
#include "Base.h"

class Cifrado:public Base
{
    public:
        Cifrado();
        Cifrado(string,string);
        virtual ~Cifrado();
        bool Comienza(string,string);
};

#endif // CIFRADO_H
