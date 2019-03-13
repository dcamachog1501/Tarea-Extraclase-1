//
// Created by dcamachog1501 on 11/03/19.
//

#ifndef LINKEDCLASS_CNODE_H
#define LINKEDCLASS_CNODE_H


#include "../Estructure/Node.h"
class Node;
class CNode {
    private:
        Node* Pvalue;
        CNode* next;

    public:
    /**
     * Constructor de CNode
     */
        CNode();
        /**
         * Metodo para retornar el valor del puntero almacenado en el CNode.
         * @return Puntero tipo Node*
         */
        Node* getPvalue();
        /**
         * Metodo para obtener el puntero hacia el siguiente CNode de la lista.
         * @return Puntero tipo CNode*
         */
        CNode* getNext();
        /**
         * Metodo para establecer el puntero hacia el siguiente CNode despues del nodo actual.
         * @param n Puntero al nodo siguiente.
         */
        void setNext(CNode* n);
        /**
         * Metodo para establecer el valor del puntero almacenado en el CNode.
         * @param n Puntero de tipo Node.
         */
        void setPvalue(Node* n);


};


#endif //LINKEDCLASS_CNODE_H
