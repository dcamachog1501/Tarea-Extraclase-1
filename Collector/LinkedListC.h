//
// Created by dcamachog1501 on 11/03/19.
//

#ifndef LINKEDCLASS_LINKEDLISTC_H
#define LINKEDCLASS_LINKEDLISTC_H


#include "CNode.h"

class CNode;
class Node;
class Collector;

using namespace std;
class LinkedListC {
    private:
        CNode* head;
        int length;
    public:
        /**
         * Constructor de la lista de tipo LinkedListCñ
         */
        LinkedListC();
        /**
         * Metodo par obtener la longitud de un objeto de tipo LinkedListC.
         * @return Longitud de tipo entero.
         */
        int getLength();
        /**
         * Metodo para imprimir los valores de la lista de manera ordenada.
         * @param s Tipo de lista LinkedListC que se va a imprimir.
         */
        void print(string s);
        /**
         * Metodo para añadir un valor al final de la lista.
         * @param n Puntero a un nodo de tipo Node*
         */
        void addLast(Node* n);
        /**
         * Metodo para retirar el último elementtto de la lista.
         */
        void removeLast();
        /**
         * Metodo para obtener el ultimo valor de la lista.
         * @return Punteroa  un nodo de tipo CNode*.
         */
        CNode* getLast();
        /**
         * Metodo para eliminar un valor de la lista.
         * @param n Puntero a un nodo de tipo Node*.
         */
        void del(Node* n);
};


#endif //LINKEDCLASS_LINKEDLISTC_H
