/* ....................ASHITOSH SHRIRAM KADAM ...............................
    ................ Array & Array pointer relation using arithmetic in c++ ........................
    ................Refrenced from Code with Harry yt channel...................
    */
#include<iostream>
using namespace std;

int main()
{
    //***************************************Arrays***********************************
    int marks[4]= {20,40,60,80};   //Create array

    int mathmarks[4];
    mathmarks[0]= {85};
    mathmarks[1]={90};
    mathmarks[2]={95};
    mathmarks[3]={65};

    cout<< "The marks are: "<<marks[0]<<endl;

    cout<< "the mathmarks are as follows: "<<endl;
    cout<< mathmarks[0]<<endl;
    cout<< mathmarks[1]<<endl;
    cout<< mathmarks[2]<<endl;
    cout<< mathmarks[3]<<endl;

    //You can change value of array
    marks[0]={50};
    cout<<"The updated marks are: "<< marks[0]<<endl;

    //Printing array using for loop
    for(int i=0; i<4; i++)
    {
    cout<< "The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //printing array usinh while loop
   int i=0;
   cout<< "Printing using while loop"<<endl;
   while(i<4)
   {
     cout<< "The value of marks "<<i<<" is "<<marks[i]<<endl;
     i++;  
   }

   //Printing using do while loop
   i=0;
   cout<< "Printing using do while loop "<<endl;
   do{
       cout<< "The value of marks "<<i<<" is "<<marks[i]<<endl;
       i++;
   }
    while(i<4);
    
    return 0;
}
