//Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"Input\n";
    cin>>x>>y;
     z=x;
     x=y;
    y=z;
    cout<<x<<" "<<y;
    return 0;

     
}