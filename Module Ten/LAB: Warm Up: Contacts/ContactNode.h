

#include<string>

using namespace std;

class ContactNode {

    public:

        ContactNode();

    ContactNode(string name, string phone);

    void InsertAfter(ContactNode* );

    string GetName();

    string GetPhoneNumber();

    ContactNode *GetNext();

    void PrintContactNode();

    private:

        string contactName;

    string contactPhoneNum;

    ContactNode *nextNodePtr;

};
