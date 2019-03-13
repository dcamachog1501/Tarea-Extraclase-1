//
// Created by dcamachog1501 on 11/03/19.
//

#include "Collector.h"
Collector::Collector()
{
    this->freeAddresses=new LinkedListC();
    this->takenAddresses=new LinkedListC();
}
Node* Collector::getFreeP(size_t s)
{
    if(freeAddresses->getLength()==0)
    {
        void* n= malloc(s);

        return (Node*)n;
    }
    else
    {
        Node* n=freeAddresses->getLast()->getPvalue();
        freeAddresses->removeLast();
        return n;
    }
}
LinkedListC* Collector::getFree()
{
    return this->freeAddresses;
}
LinkedListC* Collector::getTaken()
{
    return this->takenAddresses;
}

void Collector::Dispose(Node *n)
{
    freeAddresses->addLast(n->getSelf());
    takenAddresses->del(n);
    n->reset();
}
void Collector::addLasttaken(Node *n)
{
    takenAddresses->addLast(n);
}

