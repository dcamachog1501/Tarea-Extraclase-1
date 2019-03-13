//
// Created by dcamachog1501 on 08/03/19.
//

#ifndef LINKEDCLASS_NODE_H
#define LINKEDCLASS_NODE_H


#include "iostream"
#include <string>
#include "../Collector/Collector.h"
class Collector;

class Node{

private:
    int value;
    Node* next;
    Node* self;
    static Collector* collector;

public:
    /**
     * Constructor del objeto Node.
     * @param v Valor de tipo entero.
     */
    Node(int v);
    /**
     * Metodo para obtener el valor almacenado en el nodo.
     * @return Valor almacenado en el nodo de tipo entero.
     */
    int getValue();
    /**
     * Metodo para obtener el puntero hacia el valor siguiente nodo de tipo Node en una lista enlazada.
     * @return Puntero de tipo Node*.
     */
    Node* getNext();
    /**
     * Metodo para establecer el puntero hacia el siguiente objeto de tipo Node en una lista enlazada.
     * @param n Puntero de tipo Node*.
     */
    void setNext(Node* n);
    /**
     * Override del metodo para la creacion de nuevos nodos de tipo Node.
     * @param size Valor de tipo size_t, prreferiblemente de tamaño sizeof(Node).
     * @param v Valor de tipo entero, prreferiblemente de valor sizeof(Node).
     * @return Puntero de tipo Node.
     */
    void * operator new(size_t size,int v);
    /**
     * Override del metodo para la eliminacion de objetos de tipo Node.
     */
    void operator delete(void*);
    /**
     * Metodo que almacena un puntero hacia el mismo objeto.
     * @param s Puntero de tipo Node*.
     */
    void setSelf(Node* s);
    /**
     * Metodo para asignar un valor de tipo entero al nodo.
     * @param v Valor de tipo entero.
     */
    void setValue(int v);
    /**
     * Metodo para reestablecer los valores por default del nodo, excepto self.
     */
    void reset();
    /**
     * Metodo para obtener el puntero que apunta al nodo.
     * @return Puntero de tipo Node*.
     */
    Node* getSelf();

};


#endif //LINKEDCLASS_NODE_H
