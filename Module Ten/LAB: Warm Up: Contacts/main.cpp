#include <iostream>
using namespace std;
#include "ContactNode.h"

int main() {

       ContactNode *contactList;

    string Name;
    string PhoneNum;
    
    contactList = new ContactNode;

    for (int i = 0; i < 3; i++) {

        cout << "Person " << i + 1 << endl;
        cout << "Enter name:" << endl;
        getline(cin, Name);
        cout << "Enter phone number:" << endl;
        getline(cin, PhoneNum);
        cout << "You entered: " << Name << ", " << PhoneNum << endl << endl;
        contactList -> InsertAfter(new ContactNode(Name, PhoneNum));
    }

    cout <<  "CONTACT LIST" << endl;
    contactList -> PrintContactNode();

   return 0;
}
