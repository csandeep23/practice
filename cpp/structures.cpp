#include<iostream>
#include<string>

using namespace std;

struct idcard {
    char *name;
    int ssn;
    int age;
};

int main () {
    struct idcard *sandeep;
    string fname;
    cout << "Enter the name: " ;
    sandeep->name = "Sandeep";
    cout << "Enter the ssn: " ;
    cin >> sandeep->ssn;
    cout << "Enter the age: " ;
    cin >> sandeep->age;


    cout << "Name is " << sandeep->name << endl;
    cout << "SSN is " << sandeep->ssn << endl;
    cout << "Age is " << sandeep->age << endl;








    return 0;
}
