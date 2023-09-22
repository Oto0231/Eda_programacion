/* 1111111 */ // sustituiir con los 7 dígitos de la cédula

#include "../include/archivo.h"
#include "../include/linea.h"


struct _rep_archivo {
    Cadena nombre;
    Cadena extension;
    bool escritura;
    _rep_archivo *sig;
    _rep_fila *fila;
};

typedef struct _rep_archivo *TArchivo;

//Crea un archivo vacío con nombre nombreArchivo, extensión extension y con permiso de lectura/escritura
//El archivo no contiene filas.
TArchivo createEmptyFile (Cadena nombreArchivo, Cadena extension){
    TArchivo nuevo_archivo = new _rep_archivo;
    nuevo_archivo->nombre = nombreArchivo;
    nuevo_archivo->extension = extension;
    nuevo_archivo->escritura = true;
    nuevo_archivo->sig = NULL;
    nuevo_archivo->fila = createRow();
}

//Retorna un puntero a un array con el nombre del archivo "archivo"
char* getFileName (TArchivo archivo){
    return archivo->nombre;    
}

//Retorna true si archivo tiene permiso de escritura
bool haveWritePermission (TArchivo archivo){
    return archivo->escritura;
}

//retorna true si archivo no tiene filas;
bool isEmptyFile(TArchivo archivo){
    return archivo->fila == NULL;
}

//Retorna un puntero a la primer Fila de archivo
TLinea getFirstRow (TArchivo archivo){
    return headRow(archivo->fila);
}

//Retorna un puntero a la siguiente Fila de archivo
TLinea getNextRow (TArchivo archivo){
    return 
}

//Retorna la cantidad de Fila que tiene el archvio "archivo"
int getCountRow (TArchivo archivo);

//Retorna la cantidad de caracteres que tiene el archvio "archivo"
int getCountChars (TArchivo archivo);

//imprime la Linea del archivo indicada por "numero_linea"
//pre-condición el archivo tiene por lo menos numero_linea de lineas
void printLineFile(TArchivo archivo, int numero_linea);
    
//Elimina los cant cantidad de caracteres finales del "archivo"
//En caso que el archivo tenga menos caracteres los elimina a todos
void deleteCharterFile (TArchivo &archivo, int cant);
    
//Cambia el nombre del archivo "archivo" por nuevoNombre
void setName(TArchivo &archivo, Cadena nuevoNombre);

//Cambia la extension del "archivo" por nuevoNombre
void setExtension(TArchivo &archivo, Cadena nuevaExtension);

//Inserta el texto "texto" como una nueva fila al comienzo del archivo 
void insertChartsNewRow(TArchivo &archivo, Cadena texto);

//pre-condicion El archivo tiene por lo menos una fila
//Inserta el texto "texto" al inicio de la primer fila del archivo
void insertChartsFirstRow(TArchivo &archivo, Cadena texto);

//si valor == true se le asigna el permiso de escritura de "archivo"
//si valor == false se le quita el permiso de escritura de "archivo"
//pre-condicion archivo !=NULL
void setWritePermission(TArchivo &archivo, bool valor);

//elimina toda la memoria utilizada por "archivo"
void destroyFile (TArchivo &archivo); 

//Retorna un puntero a la primera fila del archivo
TFila firstRowFile(TArchivo archivo);

//Retorna un puntero a la siguiente fila del archivo "archivo"
TFila nextRowFile(TArchivo archivo);

//Retorna true si el archivo no tiene filas, es decir el archivo es vacio
bool isEmptyRowFile(TArchivo);


#endif
