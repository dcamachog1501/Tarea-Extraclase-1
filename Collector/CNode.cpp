//
// Created by dcamachog1501 on 11/03/19.
//

#include "CNode.h"
CNode::CNode() {
    this->Pvalue= nullptr;
    this->next= nullptr;
}

Node* CNode::getPvalue()
{
    return this->Pvalue;
}
CNode* CNode::getNext()
{
    return this->next;

}
void CNode::setNext(CNode* n)
{
    this->next=n;
}

void CNode::setPvalue(Node *n)
{
    this->Pvalue=n;
}

