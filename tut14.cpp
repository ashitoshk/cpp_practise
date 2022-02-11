#include <iostream>
using namespace std;

//Normal structure creation
 /*
 struct employee
{
    int id;
    float salary;
};

int main()
{
    struct employee ashitosh;
    ashitosh.id = 11;
    ashitosh.salary = 3.65;

    cout<<ashitosh.id<<endl <<ashitosh.salary<<endl;

    return 0;

} 
*/

//Using typedef

/*
typedef struct employee
{
    int roll;
    char name;
    float fees;

}ep;

int main()
{
    ep sarvesh; 
    sarvesh.roll = 01;
    sarvesh.name = 'S';
    sarvesh.fees = 1.38;

    cout<<sarvesh.roll<<endl<<sarvesh.name<<endl;

    return 0;
}

*/

// UNion creation

union currency
{
    int rupee;
    char country[4];
    float dollars;
};

int main()
{
    union currency m1;
    m1.rupee = 34;
    cout<<m1.rupee<<endl;

    m1.dollars = 2.5;
    cout<<m1.dollars<<endl;


// Enum Creation ==> Used to store and execute characters

enum meal {breakfast, luch, dinner};

cout << breakfast<<endl;
cout<< luch;

return 0;
}



