//
// Created by Jorge Luis Vasquez on 1/05/2020.
//

#include "funciones.h"
#include "ejercicios.h"
#include "clases/User.h"
#include "clases/User.cpp"
#include "clases/Producto.h"
#include "clases/Orden.h"
#include "clases/Orden.cpp"
#include "clases/Bicicleta.h"
#include "clases/Camnion.h"

void ejercicio1(){

    User user1(72391682,"Jorge","Vásquez","jvasquezd","1234");
    user1.printUsuario();
    Orden orden1(user1);
    long long codigoorden=orden1.getCodigoOrden();
    cout<<to_string(codigoorden)<<endl;
    Producto prod1("PROD1","Zapatilla Nike",220.90);
    Producto prod2("PROD2","laptop HP",5000);
    orden1.agregar_producto(prod1);
    orden1.agregar_producto(prod2);
    orden1.imprimir_productos();
    orden1.eliminar_producto("PROD1");
    orden1.imprimir_productos();
    Vehiculo* v1 = new Bicicleta(1,"Rinconad de lago");
    orden1.Enviar("Las palmas 110",v1);
    orden1.TrackearPedido();
    orden1.Finalizar_Orden();
    delete v1;
}
void ejercicio2(){

}
void ejercicio3(){

}
void ejercicio4(){

}
