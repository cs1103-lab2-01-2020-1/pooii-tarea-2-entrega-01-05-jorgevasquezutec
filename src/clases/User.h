//
// Created by Jorge Luis Vasquez on 1/05/2020.
//

#ifndef TAREA3_USER_H
#define TAREA3_USER_H


#include "../tipos.h"

class User{
private:
    int dni;
    string nombre;
    string appellido;
    string usuario;
    string password;
public:
    User();
    User(int dni,string nombre,string appellido,string usuario,string password);
    int getDni();
    void setDni(int dni);
    string getNombre();
    void setNombre(string nombre);
    string getAppellido();
    void setAppellido(string appellido);
    string getUsuario();
    void setUsuario(string usuario);
    string getPassword();
    void setPassword(string password);
    void printUsuario();

};


#endif //TAREA3_USER_H
