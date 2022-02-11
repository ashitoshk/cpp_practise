#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //******************************Constants****************************

    int a = 30;
    cout<<"The value of a was: "<<a<<endl;

    a = 40;
    cout << "The value of a is: "<<a<<endl; 

    //Constants in c++
    const int b =3;
    cout << "The constant value of b was: "<<b<< endl; 

   /* b = 4;
    cout << "The constant value of b is: "<<b<<endl;// error: assignment of read-only variable 'b' 
    */

   //*****************************Manipulators*****************************

   int x =10, y= 101;
    float z = 78.23;

   cout<< "The value of x without setw is: "<<x<<endl;
   cout<< "The value of y without setw is: "<<y<<endl;
   cout<< "The value of z without setw is: "<<z<<endl;



   cout<< "The value of x without setw is: "<<setw(5)<<x<<endl;
   cout<< "The value of y without setw is: "<<setw(5)<<y<<endl;
   cout<< "The value of z without setw is: "<<setw(5)<<z<<endl;

   //***********************Operator precedance*************************

   int p = 10, q= 20;

   int r = p*4+8-q+32;
   cout<<"The sum according to precedance: "<<r<<endl;
    r = ((((p*4)+8)-q)+32);
    cout<<"The sum according to brackets: "<<r<<endl;
    

    return 0;
}