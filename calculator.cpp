/*Create a calculator that takes a number , a basic math operator
 (+,-,*,/), and a second number all from user input , and have it 
 print the result of the mathematical opteration. The mathematical 
 operations should be wrapped inside of functions.*/
   #include<iostream>
using namespace std;

int sum(int, int);
int sub(int , int);
int mul(int , int);
int division(int , int);

int sum(int num1 , int num2){
    return(num1 + num2);
}
int sub(int num1 , int num2){
     return(num1 - num2);
}
int mul(int num1 , int num2){
     return(num1 * num2);
}
int division(int num1 , int num2){
      return(num1 / num2);
}

int main()
{
  int x,y,operation1,operation2,operation3,operation4;

  cout<<"Enter the numbers:"<<endl;
  cin>>x>>y;
   operation1 =sum(x,y);
   operation2 =sub(x,y);
   operation3 =mul(x,y);
   operation4 =division(x,y);
     
cout<<"The addition of the numbers are: "<< operation1<<endl;

cout<<"The substraction of the numbers are: "<< operation2<<endl;

cout<<"The multiplication of the numbers are: "<< operation3<<endl;

cout<<"The division of the numbers are: "<< operation4<<endl;

}
