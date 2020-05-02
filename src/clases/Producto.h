//
// Created by Jorge Luis Vasquez on 1/05/2020.
//

#ifndef TAREA3_PRODUCTO_H
#define TAREA3_PRODUCTO_H

#include "../tipos.h"

class Producto {
private:
    string codigo;
    string nombre;
    double costo;
public:
    Producto(){

    }
    Producto(string codigo,string nombre, double costo){
        this->codigo=codigo;
        this->nombre=nombre;
        this->costo=costo;
    }

     string getCodigo()  {
        return codigo;
    }

    void setCodigo( string codigo) {
        this->codigo = codigo;
    }

     string getNombre()  {
        return nombre;
    }

    void setNombre(string nombre) {
       this->nombre = nombre;
    }

    double getCosto() const {
        return costo;
    }

    void setCosto(double costo) {
       this->costo = costo;
    }

};


#endif //TAREA3_PRODUCTO_H
