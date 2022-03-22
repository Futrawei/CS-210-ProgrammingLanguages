#include <iostream>
#include <string>
using namespace std;

class MyString {
   public:
      MyString();
      MyString(string s);
      string GetString() const   { return str; };
      void   SetString(string s) { str = s; };
   private:
      string str;
};

MyString::MyString() {
   cout << "MyString default constructor called" << endl;
   str = "";
}

MyString::MyString(string s): str(s) {
}


class PoundDog {
   public:
      PoundDog();
      void Print() const;

   private:
      int age;
      int id;
      MyString name;
};
PoundDog::PoundDog(): id(-1),age(1),name("NoName"){
}



void PoundDog::Print() const {
   cout << "age:  " << age << endl;
   cout << "id:   " << id << endl;
   cout << "name: " << name.GetString() << endl;
}

int main() {
   PoundDog currDog;
   currDog.Print();
   return 0;
}
