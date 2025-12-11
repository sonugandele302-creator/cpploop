#include<iostream>
using namespace std;
int main(){
    // int x;
    // cout<<"enter your integer digit :";
    // cin>>x;
    // cout<<endl;
    // int i = 1;
    // while(x/10 != 0){
    //     x = x/10;
    //     i++;
    // }
    // cout<<"number of digits is : "<<i<<endl;  
    int x;
    cout<<"enter your number of rows :  ";
    cin>>x;
    cout<<endl;
    // int i = 1;
    // while(i == x){
    //     if(x ==0,1){
    //         cout<<"factorial of"<<x<<" is 1"<<endl;
    //     }
        
    //     if(x != 0,1){
    //         cout<<"factorial of "<<x<<" is : ";
    //         cout<<i*(i-1);
    //         i= i +1; }
    // }
    int y = 1;
    cout<<"enter your number of columns : ";
    cin>>y;
    for(int i = 1; i <= x; i++){
        for(int j = 1; j<= y; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

