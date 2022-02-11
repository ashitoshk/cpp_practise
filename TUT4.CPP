/* ....................ASHITOSH SHRIRAM KADAM ...............................
    ................ Variable Scope and Datatypes ........................
    ................Refrenced from Code with Harry yt channel...................
    */#include<iostream>

using namespace std;
int glo = 8;
void sum(){
    int c;
    cout << glo;
};
int main()
{
    //int a = 4;
    //int b = 5;
    int a = 14, b = 15;
    float pi = 3.14;
    cout<<"Here values of a is "<<a<<" \nAnd value of b is "<<b;
    
    cout<<"\nThe value of pi is: "<<pi;
    sum();
    cout<< glo;

    return 0;
}
