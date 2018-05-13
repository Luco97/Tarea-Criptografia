#ifndef DESCIFRADOR_H
#define DESCIFRADOR_H

#include <Base.h>


class Descifrador : public Base
{
    public:
        Descifrador();
        Descifrador(string,string);
        virtual ~Descifrador();
        void Comienza(string,string);
};

#endif // DESCIFRADOR_H
