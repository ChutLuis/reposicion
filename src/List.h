/*
 * List.h
 *
 *  Created on: Oct 22, 2017
 *      Author: Luis
 */

#ifndef LIST_H_
#define LIST_H_
#include "Nodo.cpp"

/*
 *
 */
template <class T>
class List{
private:
	Nodo<T>* head;
	Nodo<T>* Tail;
	int size;
public:
	List();
	int getSize();
	bool isEmpty();
	T first();
	T last();
	void addFirst(T*);
	void addLast(T*);
	T removeFirst();

};

#endif /* LIST_H_ */
