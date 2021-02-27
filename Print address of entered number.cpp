/*Write a program to print the address of a variable whose value i
s input from user.*/
#include<iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number"<<endl;
    cin >> x;
    cout << "Address is: "<<&x;
    return 0;
}
