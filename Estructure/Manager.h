//
// Created by dcamachog1501 on 08/03/19.
//

#ifndef LINKEDCLASS_MANAGER_H
#define LINKEDCLASS_MANAGER_H


#include "LinkedList.h"

class Manager
{
private:
    LinkedList list;
public:
    /**
     * Constructor del objeto Manager.
     */
    Manager();
    /**
     * Metodo para imprimir la interfaz del programa en consola.
     */
    void printMain();
    /**
     * Metodo para imprimir el menu de opciones de la interfaz.
     */
    void selectionMngr();
};


#endif //LINKEDCLASS_MANAGER_H
