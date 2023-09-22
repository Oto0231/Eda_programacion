/* 1111111 */ // sustituiir con los 7 dígitos de la cédula
/*
 Modulo que implemente el archivo linea.h
 
 */

#include "../include/linea.h"
#include<stdio.h>

struct _rep_linea{
       	char letra;
        _rep_linea *sig;
};


TLinea linea = new _rep_linea;

//Pos-condicion: Crea una linea vacía
TLinea createLine (){
    return linea = NULL; 
}

//pos-condicion: Retorna true si la linea "linea" es vacia
bool isEmptyLine (TLinea linea){
    if(linea == NULL){
        return true;
    }else{
        return false;
    }
}

//pre-condicion: linea != NULL
//Inserta el caracter letra al inicio de la linea.
void insertCharLine(char letra, TLinea& linea){
    TLinea nueva_linea = new _rep_linea;
    nueva_linea->sig = linea;
    nueva_linea->letra = letra;
}

//pre-condición linea != NULL
//Retorna el primer caracter de la linea "linea"
char firstCharLine(TLinea linea){
    printf("%c", linea->letra);
}

//pre-condicion linea !=NULL
//Retorna un puntero a al siguiente nodo de "linea"
TLinea nextLine(TLinea linea){
    return linea->sig;
}

//Retorna la cantidad de elementos que tiene la linea "linea"
int countNodesLine(TLinea linea){
    int count;
    while(linea != NULL){
        count++;
	    linea = linea->sig;
    }
    return count;
}

//pre-condicion: linea != NULL
//pos-condicion: Elimina el primer nodo de la linea "linea"
void deleteFirstChar(TLinea& linea){ 
    TLinea aux = linea;
    linea =  linea->sig;
	delete aux;
}

//pre-condicion: linea != NULL
//pos-condicion: Elimina el ultimo nodo de la linea "linea"
void deleteLastChar(TLinea& linea){
	TLinea aux;
	aux = linea;
	while(linea->sig != NULL){
		aux = aux->sig;
}
delete linea;
}

//Pos-condicion: Destruye toda la memoria utilizada por linea
void destroyLine(TLinea& linea){
	while(linea != NULL){
		delete linea;
        linea = linea->sig;
}
}

#endif /* LINEA_H */


