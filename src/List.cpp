/*
 * List.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: Luis
 */

#include "List.h"
#include <iostream>
template <class T>
List<T>::List(){
	head= NULL;
	Tail= NULL;
	size = 0;
}
template <class T>
int List<T>::getSize(){
	return size;
}
template <class T>
bool List<T>::isEmpty(){
	return size==0;
}
template <class T>
T List<T>::first(){
	if(isEmpty()) return NULL;
	return head->getV();
}
template <class T>
T List<T>::last(){
	if(isEmpty()) return NULL;
	return *Tail->getV();
}
template <class T>
void List<T>::addFirst(T *element)
{
	head = new Nodo<T>(*element,head);
	if(size==0){
		*Tail=*head;
	}
	size++;
}
template <class T>
void List<T>::addLast(T *element){
	Nodo<T>* newest;
			if(isEmpty()){
				*head = *newest;
			}
			else{
				Tail->setSiguiente(newest);
			*Tail = *newest;
			}

	size++;
}
template <class T>
T List<T>::removeFirst(){
	if (isEmpty()){ return NULL;}
			T response = *head->getV();
			*head = *head->getSiguiente();
			size--;
			if(size == 0){ Tail = NULL;}
	return response;
}



