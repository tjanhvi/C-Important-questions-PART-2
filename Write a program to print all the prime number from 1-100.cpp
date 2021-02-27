/*Write a program to print all the prime number from 1-100*/
#include<iostream>
 using namespace std;
 int main(){
 	int num1 =1 , num2 =100;
 	cout<<"Prime number between " << num1 <<" and "<< num2 <<" is:";
 	while(num1<num2){
 		int p=0;
 		for(int i=2;i<=num1/2;i++){
 			if(num1 % i == 0){
 				p = 1;
 				break;
			 }
		 }
		 if(p==0)
		 	cout<<num1<<" ";
		 	num1++;
		 
	 }
 }
  
