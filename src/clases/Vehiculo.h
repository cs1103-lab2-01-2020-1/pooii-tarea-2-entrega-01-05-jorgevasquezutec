//
// Created by Jorge Luis Vasquez on 1/05/2020.
//

#ifndef TAREA3_VEHICULO_H
#define TAREA3_VEHICULO_H

#include "../tipos.h"

class Vehiculo {
private:
    int codigo_vechiculo;
    string ubicacion;
    string estado;
public:
    Vehiculo(int codigo_vechiculo, string ubicacion,string estado){
        this->codigo_vechiculo=codigo_vechiculo;
        this->ubicacion=ubicacion;
        this->estado=estado;
    }

     string getUbicacion()  {
        return ubicacion;
    }

    void setUbicacion(string ubicacion) {
        this->ubicacion = ubicacion;
    }

     string getEstado()  {
        return estado;
    }

    void setEstado(string estado) {
        this->estado = estado;
    }

};


#endif //TAREA3_VEHICULO_H
