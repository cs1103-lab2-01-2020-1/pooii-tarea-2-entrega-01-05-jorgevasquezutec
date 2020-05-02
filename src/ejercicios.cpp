//
// Created by Jorge Luis Vasquez on 1/05/2020.
//


#include "ejercicios.h"
#include "clases/User.h"
#include "clases/Producto.h"
#include "clases/Orden.h"
#include "clases/Bicicleta.h"
#include "clases/Camnion.h"
#include "clases/LIFO.h"
#include "funciones.h"
#include "clases/LIFOSIMPLE.h"

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
void ejercicio4(){
    LIFO<int> lifo1;
    lifo1.push(5);
    lifo1.push(30);
    lifo1.push(31);
    lifo1.push(20);
    lifo1.push(21);
    lifo1.push(22);
    lifo1.push(23);
    lifo1.push(24);
    lifo1.push(25);
    lifo1.push(26);
    lifo1.push(27);
    lifo1.printLIFO();
    lifo1.pop();
    lifo1.printLIFO();

}
void ejercicio3(){

    int arra[]={2,10,5,35,16};
    int arra2[]={100,35,4,80,50};
    int n= sizeof(arra)/sizeof(arra[0]);
    int n2=sizeof(arra2)/sizeof(arra2[0]);
    list<int> lista1(arra,arra+n);
    print_list(lista1);
    list<int> lista2(arra2,arra2+n);
    print_list(lista2);
    list<int> lista3(n+n2);
    cout<<"Merge"<<endl;
    merge(lista1.begin(),lista1.end(),lista2.begin(),lista2.end(),lista3.begin());
    print_list(lista3);

    cout<<"Sort"<<endl;
    lista3.sort([](int a , int b){return (a<b);});
    print_list(lista3);
    auto it =binary_search(lista3.begin(),lista3.end(),4);
    if(it){
        cout<<"Encontro el valor"<<endl;
    } else{cout<<"No enontro"<<endl;}

    list<int>::iterator max_value=max_element(lista3.begin(),lista3.end());
    list<int>::iterator lower=lower_bound(lista3.begin(),lista3.end(),*max_value);
    cout << "lower_bound for "<< *max_value <<" is " << *lower<< '\n';



}
void ejercicio2(){

    LIFOSIMPLE lifo1;
    lifo1.push(5);
    lifo1.push(30);
    lifo1.push(31);
    lifo1.push(20);
    lifo1.push(21);
    lifo1.push(22);
    lifo1.push(23);
    lifo1.push(24);
    lifo1.push(25);
    lifo1.push(26);
    lifo1.push(27);
    lifo1.printLIFO();
    lifo1.pop();
    lifo1.printLIFO();

}
