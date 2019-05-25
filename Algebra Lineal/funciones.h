#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
#include<windows.h>


using namespace std;

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que imprime un arreglo en forma de vector
 *
 *@param *m1: Puntero que se�ala la direcci�n donde comienza la matriz
 *
 *@param n: N�mero de renglones de la matriz
 *
 *@param n: N�mero de columnas de la matriz
 *
 **/
void imprimeMatriz(float *m1, int m, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que imprime un arreglo en forma de vector
 *
 *@param *v: Puntero que se�ala la direcci�n donde comienza ek vector
 *
 *@param n: Dimensi�n del arreglo
 *
 **/
void imprimeVector(float *v, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para realizar la operaci�n de suma de dos vectores
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza el primer vector
 *
 *@param *v2: Puntero que se�ala la direcci�n donde comienza el segundo vector
 *
 *@param *resul: Puntero que se�ala la direcci�n donde comienza el vector donde se guardar� el resultado
 *
 *@param n: Dimensi�n de los arreglos
 *
 *@pre Las dimensiones de los vectores deben ser iguales
 *
 **/
void sumaVectores(float *v1, float *v2, float *resul, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para realizar la operaci�n de resta de dos vectores
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza el primer vector
 *
 *@param *v2: Puntero que se�ala la direcci�n donde comienza el segundo vector
 *
 *@param *resul: Puntero que se�ala la direcci�n donde comienza el vector donde se guardar� el resultado
 *
 *@param n: Dimensi�n de los arreglos
 *
 *@pre Las dimensiones de los vectores deben ser iguales
 *
 **/
void restaVectores(float *v1, float *v2, float *resul, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para realizar la multipliaci�n de un vector por un escalar
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza el vector a multiplicar
 *
 *@param *resul: Puntero que se�ala la direcci�n donde comienza el vector donde se guardar� el resultado
 *
 *@param n: Dimensi�n de los arreglos
 *
 *@param c: Escalar por el cu�l se multiplicar� el vector
 *
 **/
void multiplicaEscalar(float *v1, float *resul, int n, float c);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que realiza la operaci�n de producto punto entre dos vectores
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza el primer vector
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza el segundo vector
 *
 *@param n: Dimensi�n de los arreglos
 *
 *@param c: Escalar por el cu�l se multiplicar� el vector
 *
 *@pre Las dimensiones de los vectores deben ser iguales
 *
 *@return El resultado del producto punto
 *
 **/
float productoPunto(float *v1, float *v2, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que calcula la longitud (norma) de un vector
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza el vector a calcular su norma
 *
 *@param n: Dimensi�n del vector
 *
 *@return La norma o longitud del vector
 *
 **/
float normaVector(float *v1,int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que calcula el �ngulo entre dos vectores
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza el primer vector
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza el segundo vector
 *
 *@param n: Dimensi�n de los arreglos
 *
 *@pre Las dimensiones de los vectores deben ser iguales
 *
 *@return �ngulo que forman los dos vectores dados
 *
 **/
float anguloVectores(float *v1, float *v2, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para realizar la operaci�n de suma de dos matrices y guarda el resultado en una tercera
 *
 *@param *m1: Puntero que se�ala la direcci�n donde comienza la primer matriz
 *
 *@param *m2: Puntero que se�ala la direcci�n donde comienza la segunda matriz
 *
 *@param *m3: Puntero que se�ala la direcci�n donde comienza la matriz donde se guardar� el resultado
 *
 *@param m: N�mero de renglones de las matrices
 *
 *@param n: N�mero de columnas de las matrices
 *
 *@pre Las dimensiones de las matrices deben ser iguales
 *
 **/
void sumaMatrices(float *m1, float *m2, float *m3, int m, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que crea un arreglo din�mico de dos dimensiones dados los param�tros de renglones y columnas
 *
 *@param m: N�mero de renglones del arreglo a crear
 *
 *@param n: N�mero de columnas del arreglo a crear
 *
 *@return Puntero al inicio del arreglo creado
 *
 **/
float* creaMatriz(int m, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que crea un arreglo din�mico dado el n�mero de componentes
 *
 *@param n: Dimensi�n del arreglo a crear
 *
 *@return Puntero al inicio del arreglo creado
 *
 **/
float* creaVector(int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que libera la memoria ocupada de un arreglo
 *
 *@param *&matriz: Puntero a donde comienza el arreglo a liberar, se pasa por referencia
 *
 **/
void destruyeMatriz(float *&matriz);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para realizar la operaci�n de resta de dos matrices y guarda el resultado en una tercera
 *
 *@param *m1: Puntero que se�ala la direcci�n donde comienza la primer matriz
 *
 *@param *m2: Puntero que se�ala la direcci�n donde comienza la segunda matriz
 *
 *@param *m3: Puntero que se�ala la direcci�n donde comienza la matriz donde se guardar� el resultado
 *
 *@param m: N�mero de renglones de las matrices
 *
 *@param n: N�mero de columnas de las matrices
 *
 *@pre Las dimensiones de las matrices deben ser iguales
 *
 **/
void restaMatrices(float *m1, float *m2, float *m3, int m, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para multiplicar una matriz por un escalar dado
 *
 *@param *m1: Puntero que se�ala la direcci�n donde comienza la matriz a multiplicar por el escalar
 *
 *@param *m2: Puntero que se�ala la direcci�n donde comienza la matriz donde
 *              se guardar� el resultado de la operaci�n
 *
 *@param m: N�mero de renglones de las matrices
 *
 *@param n: N�mero de columnas de las matrices
 *
 *@param c: Escalar por el cual multiplicar la matriz
 *
 *@pre Las dimensiones de las matrices deben ser iguales
 *
 **/
void matrizPorEscalar(float *m1, float *m2, int m, int n, int c);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para multiplicar dos matrices y guarda el resultado en otra matriz.
            Esta funci�n realiza el llenado de la tercera matriz de izquierda a derecha
 *
 *@param *m1: Puntero que se�ala la direcci�n donde comienza la matriz a multiplicar
 *
 *@param *m2: Puntero que se�ala la direcci�n donde comienza la segunda matriz a multiplicar
 *
 *@param *m3: Puntero que se�ala la direcci�n donde comienza la matriz donde
 *              se guardar� el resultado de la operaci�n
 *
 *@param m: N�mero de renglones de la primera y tercera matriz
 *
 *@param n: N�mero de columnas de la primera matriz, tambi�n es
 *              el n�mero de renglones de la segunda matriz
 *
 *@param p: N�mero de columnas de la segunda y tercera matriz
 *
 *@pre Las dimensiones de las matrices deben concordar para la multiplicaci�n
 *
 **/
void multiplaMatrices(float *m1, float *m2, float *m3, int m, int n, int p);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para multiplicar dos matrices y guarda el resultado en otra matriz.
            Esta funci�n realiza el llenado de la tercera matriz de derecha a izquierda
 *
 *@param *m1: Puntero que se�ala la direcci�n donde comienza la matriz a multiplicar
 *
 *@param *m2: Puntero que se�ala la direcci�n donde comienza la segunda matriz a multiplicar
 *
 *@param *m3: Puntero que se�ala la direcci�n donde comienza la matriz donde
 *              se guardar� el resultado de la operaci�n
 *
 *@param m: N�mero de renglones de la primera y tercera matriz
 *
 *@param n: N�mero de columnas de la primera matriz, tambi�n es
 *              el n�mero de renglones de la segunda matriz
 *
 *@param p: N�mero de columnas de la segunda y tercera matriz
 *
 *@pre Las dimensiones de las matrices deben concordar para la multiplicaci�n
 *
 **/
void multiplaMatrices2(float *m1, float *m2, float *m3, int m, int n, int p);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para multiplicar dos matrices y guarda el resultado en otra matriz.
            Esta funci�n realiza el llenado de la tercera matriz de arriba hacia abajo
 *
 *@param *m1: Puntero que se�ala la direcci�n donde comienza la matriz a multiplicar
 *
 *@param *m2: Puntero que se�ala la direcci�n donde comienza la segunda matriz a multiplicar
 *
 *@param *m3: Puntero que se�ala la direcci�n donde comienza la matriz donde
 *              se guardar� el resultado de la operaci�n
 *
 *@param m: N�mero de renglones de la primera y tercera matriz
 *
 *@param n: N�mero de columnas de la primera matriz, tambi�n es
 *              el n�mero de renglones de la segunda matriz
 *
 *@param p: N�mero de columnas de la segunda y tercera matriz
 *
 *@pre Las dimensiones de las matrices deben concordar para la multiplicaci�n
 *
 **/
void multiplaMatrices3(float *m1, float *m2, float *m3, int m, int n, int p);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para multiplicar una matriz de m x n por un vector de n componentes,
 *          guarda el resultado en el vector resul de tama�o m
 *
 *@param *m1: Puntero que se�ala la direcci�n donde comienza la matriz a multiplicar
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza vector a multiplicar
 *
 *@param *resul: Puntero que se�ala la direcci�n donde comienza el vector donde guardar el resultado
 *
 *@param m: N�mero de renglones de la matriz, tambi�n es el n�mero de componentes del vector resul
 *
 *@param n: N�mero de columnas de la primera matriz, tambi�n es
 *              el n�mero de componentes del vector v1
 *
 *@pre Las dimensiones de las matrices deben concordar para la multiplicaci�n
 *
 **/
void matrizPorVector(float *m1, float *v1, float *resul, int m, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n donde se leen dos matrices que est�n guardadas en un archivo, mientras se
 *          tenga el formato de las dimensiones en el primer renglon y luego los datos;
 *          una vez le�das, las guarda en dos arreglos bidimensionales para que puedan ser
 *          operadas
 *
 *@param *&m1: Puntero que se�ala la direcci�n donde comienza la matriz a guardar
 *
 *@param *&m2: Puntero que se�ala la direcci�n donde comienza la segunda matriz a guardar
 *
 *@param &m: N�mero de renglones de la primera matriz. Se pasa por referencia para tambien guardar este valor
 *
 *@param &n: N�mero de columnas de la primera matriz (tambi�n es el n�mero de renglones de la segunda).
 *              Tambi�n se pasa por referencia
 *
 *@param &p: N�mero de columnas de la segunda matriz, tambi�n se pasa por referencia
 *
 **/
void leeMatrices(float *&m1, float *&m2, int &m, int &n, int &p);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n donde se leen una matriz y un vector desde un archivo; mientras se
 *          tenga el formato de las dimensiones en el primer renglon y luego los datos;
 *          una vez le�das, las guarda en dos arreglos, uno bidimensional y otro normal
 *          para que puedan ser operados
 *
 *@param *&m1: Puntero que se�ala la direcci�n donde comienza la matriz a guardar
 *
 *@param *v1: Puntero que se�ala la direcci�n donde comienza la el vector a guardar
 *
 *@param &m: N�mero de renglones de la matriz, se pasa por referencia para poder guardar su valor
 *
 *@param &n: N�mero de columnas de la matriz, tambi�n debe ser el n�mero de componentes del vector,
 *              tambi�n se pasa por referencia
 *
 **/
void leeMatrizVector(float *&m1, float *&v, int &m, int &n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n donde se leen una matriz desde un archivo; mientras se
 *          tenga el formato de las dimensiones en el primer renglon y luego los datos;
 *          una vez le�das, las guarda en un arreglo bidimensional
 *
 *@param *&m1: Puntero que se�ala la direcci�n donde comienza la matriz a guardar
 *
 *@param &m: N�mero de renglones de la matriz, se pasa por referencia para poder guardar su valor
 *
 *@param &n: N�mero de columnas de la matriz, se pasa por referencia para poder guardar su valor
 *
 **/
void leeMatriz(float *&m1, int &m, int &n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que dada un puntero donde comienza una matriz, guarda sus valores en un archivo dadas
 *          sus dimensiones
 *
 *@param *m1: Puntero que se�ala la direcci�n donde comienza la matriz a guardar en el archivo
 *
 *@param m: N�mero de renglones de la matriz
 *
 *@param n: N�mero de columnas de la matriz
 *
 **/
void guardaMatriz(float *m1, int m, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n auxiliar, en ella se hace uno el pivote que (primer elemento del rengl�n),
 *          para esto, la matriz que se este tratando debe ser cuadrada (n x n).
 *          SD alude a superior derecha
 *
 *@param *p: Puntero que se�ala la direcci�n donde comienza el rengl�n
 *
 *@param n: N�mero de renglones de la matriz
 *
 *@return el valor utilizado para hacer uno el pivote (su valor antes de ser 1)
 *
 **/
float hacerUnoSD(float *p, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n auxiliar, en ella se restan dos renglones de una matriz para que todo lo que
 *          est� bajo el pivote se haga 0. (La matriz debe ser de n x n).
 *          SD alude a superior derecha
 *
 *@param *p: Puntero que se�ala la direcci�n donde comienza el rengl�n pivote
 *
 *@param *q: Puntero que se�ala la direcci�n donde comienza el rengl�n a restar
 *
 *@param n: N�mero de renglones de la matriz
 *
 *@return N�mero por el que se debe multiplicar el renglon a pivote para
 *          usarlo al afectar el vector
 *
 **/
float hacerCeroSD(float *p, float *q, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para reducir una matriz de n x n en su forma triangular superior derecha
 *
 *@param *p: Puntero que se�ala la direcci�n donde comienza la matriz a transformar
 *
 *@param n: N�mero de renglones de la matriz
 *
 *@param *v: Puntero que se�ala la direcci�n donde comienza el vector asociado a la matriz
 *
 **/
void reduceSD(float *p, int n, float *v);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para cambiar un vector despu�s de haber hecho uno el pivote en la matriz
 *
 *@param *v: Puntero que se�ala la direcci�n donde comienza el vector
 *
 *@param n: N�mero de componentes del vector
 *
 *@param valor: Valor que arroj� la funci�n hacerUno
 *
 **/
void hacerUnoAfectaVector(float *v, int n, float valor);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que resuelve un sistema de ecuaciones (dado en forma de una matriz en su
 *          forma triangular superior derecha y un vector). La matriz debe ser de n x n
 *
 *@param *m1: Puntero que se�ala donde comienza la matriz a resolver
 *
 *@param *v1: Puntero que se�ala donde comienza el vector asociado
 *
 *@param n: N�mero de renglones de la matriz (tambi�n de sus columnas y componentes del vector)
 *
 **/
void resolverSD(float *m1, float *v1, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para cambiar el componente de un vector una vez que la funci�n hacerCero
 *          ha sido utilizada en la matriz asociada
 *
 *@param *v: Puntero que se�ala el comienzo del vector a modificar
 *
 *@param vPiv: N�mero de componente que se relaciona con el rengl�n pivote de la matriz asociada
 *
 *@param vCam: N�mero de componente que se va a cambiar, restandole el componente pivote
 *
 *@param valor: Valor arrojado por la funci�n hacerCero
 *
 **/
void hacerCeroAfectaVector(float *v, int vPiv, int vCam, float valor);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para permutar dos renglones de una matriz
 *
 *@param *m1: Puntero que se�ala el inicio de la matriz a permutar renglones
 *
 *@param n: N�mero de columnas de la matriz
 *
 *@param r1: N�mero del rengl�n que se va a cambiar
 *
 *@param r2: N�mero del segundo rengl�n que se va a cambiar
 *
 **/
void permutaRenglonesMatriz(float *m1, int n, int r1, int r2);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para permutar dos componentes de un vector
 *
 *@param *v: Puntero que se�ala el inicio del vector
 *
 *@param c1: N�mero del componente que se va a cambiar
 *
 *@param c2: N�mero del segundo componente que se va a cambiar
 *
 **/
void permutaComponentesVector(float *v, int c1, int c2);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n auxiliar, en ella se hace uno el pivote,
 *          para esto, la matriz que se este tratando debe ser cuadrada (n x n).
 *          SI alude a superior izquierda
 *
 *@param *p: Puntero que se�ala la direcci�n donde comienza el rengl�n
 *
 *@param n: N�mero de renglones de la matriz
 *
 *@return el valor utilizado para hacer uno el pivote (su valor antes de ser 1)
 *
 **/
float hacerUnoSI(float *p, int n);


//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n auxiliar, en ella se restan dos renglones de una matriz para que todo lo que
 *          est� bajo el pivote se haga 0. (La matriz debe ser de n x n).
 *          SD alude a superior izquierda
 *
 *@param *p: Puntero que se�ala la direcci�n donde comienza el rengl�n pivote
 *
 *@param *q: Puntero que se�ala la direcci�n donde comienza el rengl�n a restar
 *
 *@param n: N�mero de renglones de la matriz
 *
 *@return N�mero por el que se debe multiplicar el rengl�n a pivote para
 *          usarlo al afectar el vector
 *
 **/
float hacerCeroSI(float *p, float *q, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para reducir una matriz de n x n en su forma triangular superior izquierda
 *
 *@param *p: Puntero que se�ala la direcci�n donde comienza la matriz a transformar
 *
 *@param n: N�mero de renglones de la matriz
 *
 *@param *v: Puntero que se�ala la direcci�n donde comienza el vector asociado a la matriz
 *
 **/
void reduceSI(float *p, int n, float *v);


//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que resuelve un sistema de ecuaciones (dado en forma de una matriz en su
 *          forma triangular superior izquierda y un vector). La matriz debe ser de n x n
 *
 *@param *m1: Puntero que se�ala donde comienza la matriz a resolver
 *
 *@param *v1: Puntero que se�ala donde comienza el vector asociado
 *
 *@param n: N�mero de renglones de la matriz (tambi�n de sus columnas y componentes del vector)
 *
 **/
void resolverSI(float *m1, float *v1, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para reducir una matriz de n x n en su forma triangular inferior derecha
 *
 *@param *p: Puntero que se�ala la direcci�n donde comienza la matriz a transformar
 *
 *@param n: N�mero de renglones de la matriz
 *
 *@param *v: Puntero que se�ala la direcci�n donde comienza el vector asociado a la matriz
 *
 **/
void reduceID(float *m1, int n, float *v);


//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que resuelve un sistema de ecuaciones (dado en forma de una matriz en su
 *          forma triangular inferior derecha y un vector). La matriz debe ser de n x n
 *
 *@param *m1: Puntero que se�ala donde comienza la matriz a resolver
 *
 *@param *v1: Puntero que se�ala donde comienza el vector asociado
 *
 *@param n: N�mero de renglones de la matriz (tambi�n de sus columnas y componentes del vector)
 *
 **/
void resolverID(float *m1, float *v1, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para reducir una matriz de n x n en su forma triangular inferior izquierda
 *
 *@param *p: Puntero que se�ala la direcci�n donde comienza la matriz a transformar
 *
 *@param n: N�mero de renglones de la matriz
 *
 *@param *v: Puntero que se�ala la direcci�n donde comienza el vector asociado a la matriz
 *
 **/
void reduceII(float *m1, int n, float *v);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que resuelve un sistema de ecuaciones (dado en forma de una matriz en su
 *          forma triangular inferior izquierda y un vector). La matriz debe ser de n x n
 *
 *@param *m1: Puntero que se�ala donde comienza la matriz a resolver
 *
 *@param *v1: Puntero que se�ala donde comienza el vector asociado
 *
 *@param n: N�mero de renglones de la matriz (tambi�n de sus columnas y componentes del vector)
 *
 **/
void resolverII(float *m1, float *v1, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que calcula la inversa de una matriz de n x n con funciones elementales
 *
 *@param *p: Puntero que se�ala donde comienza la matriz a calcular su inversa
 *
 *@param n: N�mero de renglones de la matriz (tambi�n de sus columnas)
 *
 *@return Puntero que se�ala la direcci�n donde se guard� la inversa
 **/
float* inversa(float *p, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que crea una matriz identidad de n x n
 *
 *@param n: N�mero de renglones de la matriz a crear (tambi�n de sus columnas)
 *
 *@return Puntero que se�ala la direcci�n donde se guard� la matriz identidad
 **/
float* identidad(int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que afecta la matriz aumentada al haber utilizado la funci�n hacerUnoSD en
 *          su matriz asociada
 *
 *@param *m: Puntero que se�ala donde comienza el rengl�n de la matriz aumentada a cambiar
 *
 *@param n: N�mero de renglones de la matriz (tambi�n de sus columnas)
 *
 *@param valor: Valor que arroj� la funci�n hacerUnoSD
 **/
void unoAfectaAumentada(float *m, int n, float valor);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que afecta la matriz aumentada al haber utilizado la funci�n hacerCeroSD en
 *          su matriz asociada
 *
 *@param *p: Puntero que se�ala donde comienza el rengl�n pivote de la matriz aumentada
 *
 *@param *q: Puntero que se�ala donde comienza el rengl�n a cambiar de la matriz aumentada
 *
 *@param n: N�mero de renglones de la matriz (tambi�n de sus columnas)
 *
 *@param valor: Valor a multiplicar el rengl�n pivote para restar a rengl�n a cambiar
 **/
void ceroAfectaAumentada(float *p, float *q, int n, float valor);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para permutar dos componentes de un vector
 *
 *@param *v1: Puntero que se�ala el componente a cambiar
 *
 *@param *v2: Puntero que se�ala el componente a cambiar
 *
 **/
void permutaComponentesVector(float *v1, float *v2);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n para permutar dos renglones de una matriz
 *
 *@param *p: Puntero que se�ala donde comienza el rengl�n a permutar
 *
 *@param *q: Puntero que se�ala el inicio del segundo rengl�n a permutar
 *
 **/
void permutaRenglonesMatriz(float *p, float *q, int n);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que realiza pivotaje parcial para reducir en forma superior derecha
 *
 *@param *m: Puntero que se�ala donde comienza la matriz
 *
 *@param *p: Puntero que se�ala el lugar pivote de la matriz
 *
 *@param *v: Puntero que se�ala donde comienza el vector asociado
 *
 *@param n: N�mero de renglones de la submatriz
 *
 *@param r: N�mero de renglones de la matriz original
 *
 **/
bool pivotajeParcialSD(float *m, float *p, float *v, int n, int r);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que realiza pivotaje parcial para reducir en forma superior izquierda
 *
 *@param *m: Puntero que se�ala donde comienza la matriz
 *
 *@param *p: Puntero que se�ala el lugar pivote de la matriz
 *
 *@param *v: Puntero que se�ala donde comienza el vector asociado
 *
 *@param n: N�mero de renglones de la submatriz
 *
 *@param r: N�mero de renglones de la matriz original
 *
 **/
bool pivotajeParcialSI(float *m, float *p, float *v, int n, int r);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que realiza pivotaje parcial para reducir en forma inferior derecha
 *
 *@param *m: Puntero que se�ala donde comienza la matriz
 *
 *@param *p: Puntero que se�ala el lugar pivote de la matriz
 *
 *@param *v: Puntero que se�ala donde comienza el vector asociado
 *
 *@param n: N�mero de renglones de la submatriz
 *
 *@param r: N�mero de renglones de la matriz original
 *
 **/
bool pivotajeParcialID(float *m, float *p, float *v, int n, int r);

//---------------------------------------------------------------------------------------------
 /**
 *@brief Funci�n que realiza pivotaje parcial para reducir en forma inferior izquierda
 *
 *@param *m: Puntero que se�ala donde comienza la matriz
 *
 *@param *p: Puntero que se�ala el lugar pivote de la matriz
 *
 *@param *v: Puntero que se�ala donde comienza el vector asociado
 *
 *@param n: N�mero de renglones de la submatriz
 *
 *@param r: N�mero de renglones de la matriz original
 *
 **/
bool pivotajeParcialII(float *m, float *p, float *v, int n, int r);

#endif // FUNCIONES_H_INCLUDED
