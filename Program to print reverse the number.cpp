/*Program to print reverse the number*/
#include <iostream>
using namespace std;

int main(){

      int n,remainder,rev=0;
      cout<<"Enter your number:"<<endl;
      cin>>n;

      while(n!=0){
        remainder=n%10;
        rev=rev*10 + remainder;
        n=n/10;
     
      }
        cout<<"You reversed number is: "<< rev <<endl;
}
