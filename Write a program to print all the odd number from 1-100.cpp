/*Write a program to print all the odd number from 1-100*/
#include<iostream>
 using namespace std;
 int main()
 {
  
   for(int i=1;i<=100;i++)
   {
      if(i%2!=0){
            cout<<i<<endl;
            i++;
      }   
   }
 }
