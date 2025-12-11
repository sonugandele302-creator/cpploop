#include<iostream>
using namespace std;
int main(){

       // float x;
       // cout<<"enter your integer digit : ";
       // cin>>x;
       // int y = (int)x;
       // cout<<"your float digit is "<<x<<endl;
       // cout<<"your integer digit is "<<y<<endl;
       // return 0;

       // int x = 96;
       // cout<<"your character ascii value is "<<(char)x<<endl;
       // cout<<"your character is "<<x<<endl;

       // char y;
       // cout<<"enter your character : ";
       // cin>>y;
       // cout<<"your character ascii value is "<<(int)y<<endl;
       // cout<<"your character is ";
       // cout<<y;
       // cout<<endl;
          float x;
          cout<<"enter your 1st digit :";
               cin>>x;
               cout<<endl;
          float y;
          cout<<"enter your 2nd digit :";
          cin>>y;
          cout<<endl;
          float z;
          cout<<"enter your 3rd digit :";
          cin>>z;
          cout<<endl;
          if (x>y && y>z)
          cout<<"smallest no. is : "<<z<<endl;
          else if (y>x && z>x)
          cout<<"smallest no. is : "<<x<<endl;
          else if(z>x && x>y)
          cout<<"smallest no. is : "<<y<<endl;
          

          

}