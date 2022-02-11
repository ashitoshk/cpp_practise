#include<iostream>

using namespace std;

int main()
{
    int Fir_num;
    int Sec_num;

    cout<<"Enter the first number\n"; //"<<" is a insertion operator
    cin>> Fir_num;

    cout<< "Enter the second number\n"; //">>" is a exertion operator
    cin>> Sec_num;

    cout<<"The sum of numbers is: "<<Fir_num + Sec_num;

    return 0;
}