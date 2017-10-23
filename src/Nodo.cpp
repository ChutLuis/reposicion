/*
 * Nodo.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: Luis
 */
#include <iostream>
#include "Nodo.h"
template <class T>
Nodo<T>::Nodo(T elemento, Nodo<T>* next){
	element= elemento;
	*siguiente = *next;
}
template <class T>
T Nodo<T>::getV(){
	return element;
}
template <class T>
void Nodo<T>::setV(T elements) {
	element= elements;
}
template <class T>
Nodo<T>* Nodo<T>::getSiguiente(){
	return *siguiente;
}
template <class T>
void Nodo<T>::setSiguiente(Nodo<T> *newNext){
	*siguiente= *newNext;
}








