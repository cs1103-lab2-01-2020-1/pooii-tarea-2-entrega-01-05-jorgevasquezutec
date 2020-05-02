//
// Created by Jorge Luis Vasquez on 1/05/2020.
//

#ifndef TAREA3_ORDEN_H
#define TAREA3_ORDEN_H

#include "../tipos.h"
#include "User.h"
#include "Vehiculo.h"
#include "Producto.h"

class Orden {
private:
    const int costo_por_porducto=0.5;
    long long codigo_orden;
    vector<Producto> productos;
    string estado;
    double costo;
    Vehiculo * vechiculo;
    string destino;
    User user;

public:
    Orden(User user){
        time_t theTime = time(NULL);
        struct tm *aTime = localtime(&theTime);
        int day = aTime->tm_mday;
        int month = aTime->tm_mon + 1;
        int year = aTime->tm_year + 1900;
        int hour=aTime->tm_hour;
        int min=aTime->tm_min;
        int sec=aTime->tm_sec;
        string cod=to_string(year)+to_string(month)+to_string(day)+to_string(hour)+to_string(min)+to_string(sec);
        codigo_orden= std::stoll(cod);
        estado="EN PROCESO";
        this->user = User(user.getDni(),user.getNombre(),user.getAppellido(),user.getUsuario(),user.getPassword());
    }
    void Enviar (string destino,Vehiculo *vehiculo ){
        if(vehiculo->getEstado()=="OCUPADO"){
            cout<<"El vehiculo ya se encuentra en progreso"<<endl;
        }
        else if( productos.empty()) {
            cout<<"No ha agregado productos"<<endl;
        }
        else{
            for(auto x:productos){
                costo+=x.getCosto();
                costo+=costo_por_porducto;
            }
            this->destino=destino;
            vehiculo->setEstado("OCUPADO");
            this->vechiculo=vehiculo;
            this->estado="ENVIADO";
            cout<<"Se ha enviado su orden"<<endl;
        }
    }
    void TrackearPedido(){
        if(this->estado=="EN PROGRESO"){
            cout <<"Su orden esta creandose"<<endl;
        }
        else if(this->estado=="ENVIADO"){
            cout<< vechiculo->getUbicacion()<<endl;
        }
        else{
            cout<< "Su orden ha finalizado"<<endl;
        }
    }
    void Finalizar_Orden(){
        if(this->estado=="ENVIADO"){
            this->estado="FINALIADO";
            this->vechiculo->setEstado("LIBRE");
            cout<<"Su orden ha finalizado"<<endl;
        }
        else{
            cout<< "No se puede finaliar porque su orden se encuentra en: "+getEstado()<<endl;
        }

    }
    void agregar_producto(Producto iproducto){
        auto it =buscarProducto(iproducto.getCodigo());
        if(it!=productos.end()){
            cout<<"El prodcuto ya fue agregado"<<endl;
        }else{
            productos.push_back(iproducto);
            cout<<"Producto Agregar"<<endl;
        }
    }
    void eliminar_producto(string codigo){
        auto it =buscarProducto(codigo);
        if(it!=productos.end()){
             productos.erase(it);
            cout<<"Productor eliminado"<<endl;
        }else{
            cout<<"El producto no existe"<<endl;
        }
    }
    void imprimir_productos() {
        for (size_t i = 0; i < productos.size(); ++i) {
            cout << "," << productos[i].getNombre() << endl;
        }
    }
    long long getCodigoOrden()  {
        return codigo_orden;
    }
    string getEstado()  {
        return estado;
    }
    void setEstado(string estado) {
        this->estado = estado;
    }
    double getCosto()  {
        return costo;
    }
    string getDestino()  {
        return destino;
    }
    void setDestino(string destino) {
      this->destino = destino;
    }
    vector<Producto>::iterator buscarProducto(string codigo){

        auto it=find_if(productos.begin(),productos.end(),[&codigo](Producto& prod){return prod.getCodigo() == codigo;});

        return it;
    }


};


#endif //TAREA3_ORDEN_H
