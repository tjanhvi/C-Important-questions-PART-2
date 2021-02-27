/*Write a program to find that given year is leap year or not*/
#include <iostream>
using namespace std;

int main(){
      
      int year;
      cout<<"Enter the year"<<endl;
      cin>>year;
      
      if(year%4==0){
        if(year%400==0){
          if(year%100==0){
            cout<<"Entered year is a leap year("<<year<<")";
            }
            else
            cout<<"Entered year is not a leap year("<<year<<")";
            }
            else
            cout<<"Entered year is a not leap year("<<year<<")";
            }
            else
            cout<<"Entered year is not a leap year("<<year<<")";
    
}
