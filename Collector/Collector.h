//
// Created by dcamachog1501 on 11/03/19.
//

#ifndef LINKEDCLASS_COLLECTOR_H
#define LINKEDCLASS_COLLECTOR_H


#include "LinkedListC.h"
class Node;
class LinkedListC;

class Collector {
    private:
        LinkedListC* freeAddresses;
        LinkedListC* takenAddresses;


    public:
        /**
         * Constructor de la clase collector.
         */
        Collector();
        /**
         * Metodo para obtener un nuevo puntero de tipo Node
         * @param s Tamaño a almacenar de tipo size_t
         * @return Puntero a una direccion que va a almacenar un objeto de tipo node.
         */
        Node* getFreeP(size_t s);
        /**
         * Metodo para agregar un puntero de tipo Node* a la lista de punteros disponibles.
         * @param n Puntero de tipo Node.
         */
        void Dispose(Node* n);
        /**
         *Metodo para obtener un puntero a la lista de punteros disponibles.
         * @return LinkedListC de punteros disponibles.
         */
        LinkedListC* getFree();
        /**
         *Metodo para obtener un puntero a la lista de punteros ocupados.
         * @return LinkedListC de punteros ocupados.
         */
        LinkedListC* getTaken();
        /**
         * Metodo para agregar un puntero de tipo Node* a la lista de punteros ocupados del collector.
         * @param n Nodo de tipo Node*
         */
        void addLasttaken(Node* n);



};


#endif //LINKEDCLASS_COLLECTOR_H
