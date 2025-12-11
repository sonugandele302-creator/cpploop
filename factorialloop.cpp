#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no. ";
    cin>>n;
    int f= 1;
    int i = 1;
    while(i <= n){
        f *= i;
        i++;
    }
    cout<<"factorial of "<<n<<" is "<<f;
}