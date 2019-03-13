//
// Created by dcamachog1501 on 11/03/19.
//
#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() {

    this->head= nullptr;
    this->length=0;
}
int LinkedList::getLength() {
    return this->length;
}

string LinkedList::print()
{


    Node* temp=this->head;
    if(this->head== nullptr)
    {
        return "[]";
    }
    else
    {

        string f = "[";
        while (temp != nullptr) {
            if (f != "[") {
                f += ",";

            }
            f += to_string(temp->getValue());
            temp = temp->getNext();
        }
        f += "]";
        return f;
    }
}
void LinkedList::addFirst(int v)
{
    Node* n=new(sizeof(Node))Node(v);
    n->setValue(v);
    LinkedList::collector->addLasttaken(n);
    n->setNext(this->head);
    this->head=n;

    length++;
}
void LinkedList::addLast(int v)
{
    Node* n= new(sizeof(Node))Node(v);
    if(this->head== nullptr)
    {
        this->head=n;
    }
    else
    {
        Node* temp=this->head;
        while(temp->getNext()!= nullptr)
        {
            temp=temp->getNext();
        }
        temp->setNext(n);
    }
    n->setValue(v);
    LinkedList::collector->addLasttaken(n);
    length++;
}
void LinkedList::del(int s)
{
    if(length!=0) {
        if (head->getValue() == s) {
            Node *temp = head;
            head = temp->getNext();
            delete(temp) ;

        }
        else {
            Node *temp = this->head;
            if(temp->getNext()!= nullptr) {
                while (temp->getNext()->getValue() != s && temp->getNext() != nullptr) {
                    temp = temp->getNext();
                    if(temp->getNext()== nullptr)
                    {
                        break;
                    }
                }
            }
            if (temp->getNext() != nullptr) {
                Node *temp2 = temp->getNext();
                temp->setNext(temp->getNext()->getNext());
                temp2->setNext(nullptr);
                delete(temp2);
            }
        }
        length--;
    }
}

