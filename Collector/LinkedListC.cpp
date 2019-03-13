//
// Created by dcamachog1501 on 11/03/19.
//

#include "LinkedListC.h"
#include "../Estructure/LinkedList.h"

LinkedListC::LinkedListC()
{
    this->head= nullptr;
    this->length=0;
}
void LinkedListC::addLast(Node* n)
{
    CNode* m= new CNode();
    m->setPvalue(n);
    if(this->head== nullptr)
    {
        m->setPvalue(n);
        this->head=m;
    }
    else
    {
        CNode* temp=this->head;
        while(temp->getNext()!= nullptr)
        {
            temp=temp->getNext();
        }
        //m->setPvalue(n);
        temp->setNext(m);
    }
    length++;
}
int LinkedListC::getLength()
{
    return this->length;
}
void LinkedListC::print(string s)
{
    CNode* temp= this->head;
    int cont=1;
    if(s=="taken") {

        while (temp != nullptr) {
            cout << "Address storing number " << to_string(temp->getPvalue()->getValue()) << " : " << temp->getPvalue()
                 << endl;
            cont++;
            temp = temp->getNext();
        }
    }
    else if(s=="free")
    {
        while (temp != nullptr) {
            cout << temp->getPvalue()<< endl;
            cont++;
            temp = temp->getNext();
        }
    }
}
CNode* LinkedListC::getLast()
{
    CNode* temp=head;
    if(temp->getNext()!= nullptr) {
        while (temp->getNext()->getNext() != nullptr) {
            temp = temp->getNext();
        }

        return temp->getNext();;
    }
    else
    {
        return temp;
    }
}
void LinkedListC:: removeLast()
{
    CNode* temp=head;
    if(temp->getNext()!= nullptr) {
        while (temp->getNext()->getNext() != nullptr)
        {
            temp = temp->getNext();
        }
        temp->setNext(nullptr);
        temp= nullptr;
        delete temp;

    }
    else
    {
        head= nullptr;
        delete temp;
    }
    length--;
}
void LinkedListC::del(Node* n)
{
    if(length!=0) {
        if (head->getPvalue()== n->getSelf()) {
            CNode *temp = head;
            head = temp->getNext();
            delete temp;

        }
        else {

            CNode *temp = this->head;
            while (temp->getNext()->getPvalue()->getSelf()!= n->getSelf() && temp->getNext() != nullptr) {
                temp = temp->getNext();
            }
            if (temp->getNext() != nullptr) {
                CNode *temp2 = temp->getNext();
                temp->setNext(temp->getNext()->getNext());
                temp2->setNext(nullptr);
                delete temp2;
            }
        }
        length--;
    }
}