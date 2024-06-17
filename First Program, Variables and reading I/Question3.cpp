//- Write a C++ program to take length and breadth of a rectangle and print its area.
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter length and breadth of a rectangle"<<endl;
    cin>>x>>y;
    int product=x*y;
    cout<<"Area of the rectangle is "<<product;
    return 0;
}