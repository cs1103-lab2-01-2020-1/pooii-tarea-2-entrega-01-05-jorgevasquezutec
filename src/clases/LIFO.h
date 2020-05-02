//
// Created by Jorge Luis Vasquez on 1/05/2020.
//

#ifndef TAREA3_LIFO_H
#define TAREA3_LIFO_H

#include "../tipos.h"

template <typename  T>
class LIFO {
private:
    T * data;
    int cap;
    int top;
    void addone(){
        if (top + 1 > cap) {
            cap *= 2;
            int* aux = new int[cap];
            for (size_t i = 0; i < getsize(); i++)
                aux[i] = data[i];
            delete [] data;
            data = aux;
            delete [] aux;
        }
        ++top;
    }
    void deleteone(){
        if (top - 1 <= cap / 2) {
            cap /= 2;
            int* aux = new int[cap];
            for (size_t i = 0; i < getsize() - 1; ++i)
                aux[i] = data[i];
            delete [] data;
            data = aux;
            delete [] aux;
        }
        --top;
    }
public:
    LIFO(int cap=10){
        this->cap=cap;
        top=-1;
        data = new T[cap];
    }
    ~LIFO(){
        delete [] data;
    }
    void push(T valor){
        addone();
        data[top]=valor;
    }
    void pop(){
        if(!is_empy()){
            deleteone();
        }
    }
    bool is_empy(){
        return  (top==-1);
    }
    bool isfull(){
        return (cap==top+1);
    }
    int getsize(){
        return top+1;
    }
    void printLIFO(){
        for(int i=0;i<getsize();i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }


};


#endif //TAREA3_LIFO_H
