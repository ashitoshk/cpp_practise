#include <iostream>
using namespace std;
    
int sum( float a, int b)
{
    cout<<"Using fuction with 2 arguments ";
    return (a + b);  
}
int sum( int a, int b, int c)
{
    cout<<"Using function with 3 arguments ";
    return (a + b+ c);
}

// Calculate the volume of cylinder
int volume(double r, int h )
{
    return(3.14 * r * r * h);
}

// Calculate the volume of cube
int volume( int a)
{
    return(a *a *a );
}

// Calculate the volume of Rectangular box
int volume (int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout<<"The sum of 2 numbers is: "<< sum(4, 4)<<endl;
    cout<<"The sum of 3 numbers is: "<< sum(3, 4, 8)<<endl;
    cout<<"The volume of cylinder is: "<<volume(4, 8)<<endl;
    cout<<"The volume of cube is: "<<volume(8)<<endl;
    cout<<"The volume of rectangular box is: "<< volume(8, 5, 9)<<endl;
    
return 0;
}
