//Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    int ans;
    int *p3=&ans;
    int *p1=&a;
    int *p2=&b;
    *p3= (*p1) * (*p2);
    cout<<"Product : "<<*p3;

    return 0;
}