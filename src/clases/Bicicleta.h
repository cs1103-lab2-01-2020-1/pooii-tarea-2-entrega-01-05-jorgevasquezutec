//
// Created by Jorge Luis Vasquez on 1/05/2020.
//

#ifndef TAREA3_BICICLETA_H
#define TAREA3_BICICLETA_H

#include "../tipos.h"
#include "Vehiculo.h"

class Bicicleta : public Vehiculo {
public:
    Bicicleta(int codigo,string ubicacion):Vehiculo(codigo,ubicacion,"LIBRE"){};
};


#endif //TAREA3_BICICLETA_H
