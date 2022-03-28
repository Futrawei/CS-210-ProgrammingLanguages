#include <iostream>

#include "ContactNode.h"

using namespace std;

ContactNode::ContactNode() {

    nextNodePtr = NULL;

}

ContactNode::ContactNode(string n, string phn) {

    contactName = n;

    contactPhoneNum = phn;

    nextNodePtr = NULL;

}

void ContactNode::InsertAfter(ContactNode *newNode) {

    ContactNode * temp;

    if (nextNodePtr == NULL)

        nextNodePtr = newNode;

    else {

        temp = nextNodePtr;

        while (temp -> nextNodePtr != NULL) {

            temp = temp -> GetNext();

        }

        temp -> nextNodePtr = newNode;

    }

}

string ContactNode::GetName() {

    return contactName;

}

string ContactNode::GetPhoneNumber() {

    return contactPhoneNum;

}

ContactNode *ContactNode::GetNext() {

   return nextNodePtr;

}

void ContactNode::PrintContactNode() {

    ContactNode * temp;

    if (nextNodePtr != NULL) {

        cout << "Name: " << nextNodePtr -> GetName() << endl;

        cout << "Phone number: " << nextNodePtr -> GetPhoneNumber() << endl;

        cout << endl;

        GetNext() -> PrintContactNode();

    }

}
