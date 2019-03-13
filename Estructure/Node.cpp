//
// Created by dcamachog1501 on 08/03/19.
//

#include "Node.h"
#include "LinkedList.h"

Node::Node(int v)
{
    this->value=v;
}
int Node::getValue() {

    return this->value;

}
Node* Node::getNext() {

    return this->next;
}
void Node::setNext(Node* n) {
    this->next=n;
}

void Node::setSelf(Node *s)
{
    this->self=s;
}

Node *Node::getSelf() {
    return this->self;
}

void Node::operator delete(void* n) {

    Node* p=(Node*)n;
    LinkedList::collector->Dispose(p);


}
void *Node::operator new(size_t size,int v) {
    Node* n=LinkedList::collector->getFreeP(v);
    n->setSelf(n);
    return n;
}

void Node::setValue(int v) {
    this->value=v;
}
void Node::reset()
{
    this->setValue(0);
    this->setNext(nullptr);
}



