#include "Descifrador.h"
#include "Cifrado.h"

using namespace std;



int main()
{
    Cifrado A("3 ","TAQUION");
    if(A.Comprobar_error_clave(A.GetClave()) == false)
    {
        cout << "wena cabroz del yutu" << endl;
    }
    A.Comienza(A.GetMensaje(),A.GetClave());
    Descifrador B(A.GetMensaje(),A.GetClave());
    B.Termino(B.GetMensaje(),B.GetClave());
    cout << " " << endl;
    return 0;
}
