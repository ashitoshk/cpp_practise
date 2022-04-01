#include <iostream>
using namespace std;
    
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// Here values are copied into formal parameters so, output will not get swapped values
void swap(int x, int y) // temp x  y
{
    int temp = x;       //  4   4  5
    x = y;              //  4   5  5
    y = temp;           //  4   5  4

}
// Call by refrence using pointers
void swapPointer(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}

// Call by reference using C++ reference Variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    // return a;
}

int main()
{
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;

}
