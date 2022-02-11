#include<iostream>
using namespace std;

int main()
{
    //Pointers-----> Datatypes which holds address of another datatype

    int a =3;
    int* b= &a;

    //&-----> (Address of operator)
    cout<< "The address of a is: "<< b<<endl;
    cout<< "The address of a is: "<< &a<<endl;

    //*------> (Values of operator)
    cout<< "The value at address b is: "<<*b<<endl;

    //Pointers of pointers
    int** c=&b;

    cout<< "The address of b is: "<< c<<endl;
    cout<< "the address of b is: "<< &b<<endl;
    cout<< "The value at address c is: "<< *c<<endl;
    cout<< "The value at address value: "<< **c<<endl;
    
    return 0;
}