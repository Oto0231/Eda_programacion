/* 1111111 */ // sustituiir con los 7 dígitos de la cédula
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "../include/fila.h"
#include "../include/linea.h"
#include<stdio.h>
typedef char* Cadena;

struct _rep_fila {
    TLinea linea;
    _rep_fila *sig;
};

typedef struct _rep_fila *TFila;

//Pos-condición crea una fila vacía.
TFila createRow(
    TFila fila = NULL;
    return fila;
)

//Pos-Condición retorna true si la fila es vacía.
bool isEmptyRow(TFila fila){
    if(fila == NULL){
        return true;
    }else{
        return false;
    }
}

//Pos-Condición Inserta una nueva fila al principio de "fila"
void insertRow (TFila &fila, TLinea linea){
    TFila nueva_fila = new _rep_fila;
    nueva_fila->sig = fila;
    fila = nueva_fila;
}
 
//pre-condicion: fila !=NULL
//pos-condicion: retorna un puntero al primer nodo de la fila "fila"
TLinea headRow(TFila fila){
    return fila->linea;
}

//pre-condicion: fila !=NULL
//pos-condicion: Retorna un puntero al siguente elemento de la fila "fila"
TFila nextRow (TFila fila){
    return fila->sig ;
}
 
//pre-condicion: fila != NULL
//elimina el primer nodo de la fila "fila"
void deleteFirstRow (TFila &fila){
    TFila aux = fila;
    fila = fila->sig;
    delete aux;
}
 
//Elimina toda la memoria de la fila "fila"
void deleteRows (TFila& fila){
    while(fila != NULL){
        delete fila;
    }
}
 

#endif /* FILA_H */
