/*Program to print reverse of an array*/
#include <iostream>
using namespace std;

int main(){
        int n,i,remainder,rev=0;

        cout<<"Enter the size of the array:"<<endl;
   cin>>n;
   
   int Arr[n];
   
   cout<<"Enter the elements:"<<endl;
   for(i=0;i<n;i++){
       cin>>Arr[i];
   }

   while(n!=0){
           for(i=0;i<n;i++){
        remainder=n%10;
        rev=rev*10 + remainder;
        n=n/10;
     
      }
}
}
