/*Program to find if a given number is palindrome or not*/
#include <iostream>
using namespace std;

int main(){

      int n,num,remainder,rev=0;
      cout<<"Enter your number:"<<endl;
      cin>>n;
      
      num=n;

      while(n!=0){
        remainder=n%10;
        rev=(rev*10) + remainder;
        n=n/10;
     
      }
        cout<<"You reversed number is: "<< rev <<endl;
        
        if(num == rev){
            cout<<"Entered number is a palindrome";
        }
        else{
             cout<<"Entered number is not a palindrome";
        }
}

