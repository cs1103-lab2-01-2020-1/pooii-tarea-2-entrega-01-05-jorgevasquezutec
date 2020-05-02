//
// Created by Jorge Luis Vasquez on 1/05/2020.
//

#ifndef TAREA3_CAMNION_H
#define TAREA3_CAMNION_H

#include "../tipos.h"
#include "Vehiculo.h"

class Camnion : public Vehiculo {
public:
    Camnion(int codigo,string ubicacion):Vehiculo(codigo,ubicacion,"LIBRE"){
    }
};


#endif //TAREA3_CAMNION_H
