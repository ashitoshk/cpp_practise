/* ....................ASHITOSH SHRIRAM KADAM ...............................
    ................ Refrence variables and Type Casting........................
    ................Refrenced from Code with Harry yt channel...................
    */# include<iostream>
using namespace std;

int c = 40;

int main()
{
    // *************************Built in Datatype ***********************
    int a, b, c;

    cout<< "Enter the first number: ";
    cin>> a;

    cout<< "Enter the second number: ";
    cin>> b;

    c = a+b;
    cout<< "The sum is: "<< c << endl;

    cout << "The global value of c is: "<< ::c <<endl;

//   ****************************Float, double, Longdouble**********************

    float d = 34.4f;
    long double e = 34.4l;

    cout << "Size of 34.4 is: "<< sizeof(34.4)<<endl;
    cout << "Size of 34.4f is: "<< sizeof(34.4f)<<endl;
    cout << "Size of 34.4F is: "<< sizeof(34.4F)<<endl;
    cout << "Size of 34.4l is: "<< sizeof(34.4l)<<endl;
    cout << "Size of 34.4L is: "<< sizeof(34.4L)<<endl;

    //*************************Type Casting******************************************

    int x = 45;
    float y = 45.23;

    cout<< "The value of x is: "<< x<<endl;
    cout<< "The value of x is: "<< float(x)<<endl;
    cout<< "The value of x is: "<< (float)x<<endl;

    cout<< "The value of y is: "<< y<<endl;
    cout<< "The value of y is: "<< int(y)<<endl;
    cout<< "The value of y is: "<< (int)y<<endl;

    int z = int(y);
    
    cout<<"The sum is: "<< x+y<<endl;
    cout<<"The sum is: "<< x+int(y)<<endl;
    cout<<"The sum is: "<< x+(int)y<<endl;


    return 0;

}
