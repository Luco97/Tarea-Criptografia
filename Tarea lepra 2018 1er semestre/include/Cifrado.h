#ifndef CIFRADO_H
#define CIFRADO_H
#include "Base.h"

class Cifrado:public Base
{
    public:
        Cifrado(string,string);
        virtual ~Cifrado();
        void Comienza(string,string);
};

#endif // CIFRADO_H
