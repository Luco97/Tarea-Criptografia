#ifndef BASE_H
#define BASE_H

#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

class Base
{
    private:
        string Mensaje;
        string Clave;
    public:
        Base();
        Base(string,string);
        virtual ~Base();
        bool Comprobar_error_mensaje(string); //Comprueba si posee minusculas
        bool Comprobar_error_clave(string); //Comprueba si posee minusculas o espacios
        void Procedimiento(char,char,char,int); //Muestra en pantalla el proceso
        string GetMensaje() { return Mensaje; }
        void SetMensaje(string val) { Mensaje = val; }
        string GetClave() { return Clave; }
        void SetClave(string val) { Clave = val; }
        int char_to_number(char x) //Retorna el numero del caracter, si no pertenece retorna 26
        {
            if(x == 'A')return 0;
            if(x == 'B')return 1;
            if(x == 'C')return 2;
            if(x == 'D')return 3;
            if(x == 'E')return 4;
            if(x == 'F')return 5;
            if(x == 'G')return 6;
            if(x == 'H')return 7;
            if(x == 'I')return 8;
            if(x == 'J')return 9;
            if(x == 'K')return 10;
            if(x == 'L')return 11;
            if(x == 'M')return 12;
            if(x == 'N')return 13;
            if(x == 'O')return 14;
            if(x == 'P')return 15;
            if(x == 'Q')return 16;
            if(x == 'R')return 17;
            if(x == 'S')return 18;
            if(x == 'T')return 19;
            if(x == 'U')return 20;
            if(x == 'V')return 21;
            if(x == 'W')return 22;
            if(x == 'X')return 23;
            if(x == 'Y')return 24;
            if(x == 'Z')return 25;
            else return 26;
        }
        char number_to_char(int x) // Retorna el caracter que pertenece al numero
        {
            if(x == 0)return 'A' ;
            if(x == 1)return 'B' ;
            if(x == 2)return 'C' ;
            if(x == 3)return 'D' ;
            if(x == 4)return 'E' ;
            if(x == 5)return 'F' ;
            if(x == 6)return 'G' ;
            if(x == 7)return 'H' ;
            if(x == 8)return 'I' ;
            if(x == 9)return 'J' ;
            if(x == 10)return 'K' ;
            if(x == 11)return 'L' ;
            if(x == 12)return 'M' ;
            if(x == 13)return 'N' ;
            if(x == 14)return 'O' ;
            if(x == 15)return 'P' ;
            if(x == 16)return 'Q' ;
            if(x == 17)return 'R' ;
            if(x == 18)return 'S' ;
            if(x == 19)return 'T' ;
            if(x == 20)return 'U' ;
            if(x == 21)return 'V' ;
            if(x == 22)return 'W' ;
            if(x == 23)return 'X' ;
            if(x == 24)return 'Y' ;
            if(x == 25)return 'Z' ;
        }

};

#endif // BASE_H
