//
// Created by Jorge Luis Vasquez on 1/05/2020.
//

#include "User.h"


User::User() {
}

User::User(int dni, string nombre, string appellido, string usuario, string password) {
    this->dni=dni;
    this->nombre=nombre;
    this->appellido=appellido;
    this->usuario=usuario;
    this->password=password;
}

void User::setDni(int dni) {
    this->dni=dni;
}
int User::getDni() {
    return this->dni;
}

void User::setNombre(string nombre) {
    this->nombre=nombre;
}
string User::getNombre() {
    return  this->nombre;
}

void User::setAppellido(string appellido) {
    this->appellido=appellido;
}
string User::getAppellido() {
    return this->appellido;
}
void User::setUsuario(string usuario) {
    this->usuario=usuario;
}
string User::getUsuario() {
    return this->usuario;
}
void User::setPassword(string password) {
    this->password=password;
}
string User::getPassword() {
    return this->password;
}
void User::printUsuario() {
    cout<<"Dni:" <<getDni()<<endl;
    cout<<"Nombre:" <<getNombre()<<endl;
    cout<<"Apellido:" <<getAppellido()<<endl;
    cout<<"Usuario:" <<getUsuario()<<endl;
}