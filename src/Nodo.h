/*
 * Nodo.h
 *
 *  Created on: Oct 22, 2017
 *      Author: Luis
 */

#ifndef NODO_H_
#define NODO_H_
/*
 *
 */
template <class T>
class Nodo{
private:
	T element;
	Nodo<T>* siguiente;
public:
	Nodo<T>(T newV, Nodo<T> *element);
	T getV();
	void setV(T);
	Nodo<T>* getSiguiente();
	void setSiguiente(Nodo<T>*);
    void toString();
};

#endif /* NODO_H_ */
