#ifndef DESCIFRADOR_H
#define DESCIFRADOR_H

#include <Base.h>


class Descifrador : public Base
{
    public:
        Descifrador(string,string);
        virtual ~Descifrador();
        void Termino(string,string);
};

#endif // DESCIFRADOR_H
