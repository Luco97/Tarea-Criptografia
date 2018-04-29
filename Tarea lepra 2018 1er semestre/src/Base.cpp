#include "Base.h"


void gotoxy(int x,int y) // Funcion para mover posicionarse en consola
{
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}


Base::Base(string x, string y) // Constructor de Base
{
    Mensaje = x;
    Clave = y;
}

Base::~Base() // Destructor
{
    //dtor
}

bool Base::Comprobar_error_mensaje(string x) // Comprueba si en el mensaje hay minusculas o simbolos
{
    for(int i = 0; i<x.length() ; i++){
        if(x[i] == ' '){
            continue;
        }
        if(char_to_number(x[i]) == 26){
            return true;
        }
    }
    return false;
}

bool Base::Comprobar_error_clave(string x) // Comprueba si en la clave hay minusculas, simbolos o espacios
{
    for(int i = 0; i<x.length() ; i++){
        if(char_to_number(x[i]) == 26){
            return true;
        }
    }
    return false;
}

void Base::Procedimiento(char x, char y, char z, int i) // Muestra el procedimiento
{
    gotoxy(i*3,4);cout << x;
    gotoxy(i*3,6);cout << char_to_number(x);
    gotoxy(i*3,8);cout << y;
    gotoxy(i*3,10);cout << char_to_number(y);
    gotoxy(i*3,12);cout << z;
    gotoxy(i*3,14);cout << char_to_number(z);
}
