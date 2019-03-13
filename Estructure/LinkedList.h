//
// Created by dcamachog1501 on 11/03/19.
//

#ifndef LINKEDCLASS_LINKEDLIST_H
#define LINKEDCLASS_LINKEDLIST_H

#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList{

private:
    int length;
    Node* head;
public:
    /**
     * Consructor de LinkedList.
     */
    LinkedList();
    /**
     * Metodo para la longitud de la lista.
     * @return Longitud de tipo entero.
     */
    int getLength();
    /**
     * Metodo para imprimir de manera ordenada en consola la lista.
     * @return
     */
    string print();
    /**
     * Metodo para añadir un elemento al inicio de la lista.
     * @param v Valor de tipo entero
     */
    void addFirst(int v);
    /**
     * Metodo para añadir un valor al final de la lista.
     * @param v Valor de tipo entero.
     */
    void addLast(int v);
    /**
     * Metodo para eliminar un elemento de la lista.
     * @param i Valor de tipo entero.
     */
    void del(int i);
    static Collector* collector;

};


#endif //LINKEDCLASS_LINKEDLIST_H
