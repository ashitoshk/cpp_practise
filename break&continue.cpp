/* ....................ASHITOSH SHRIRAM KADAM ...............................
    ................ Break And Continue Statements ........................
    ................Refrenced from Code with Harry yt channel...................
    */
#include<iostream>
using namespace std;

int main(){
     for (int i = 0; i < 40; i++)
     {
         /* code */
         if(i==2){
             break;
         }
         cout<<i<<endl;
     }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    
    return 0;
}
