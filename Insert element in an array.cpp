/*Insert element in an array*/
#include <iostream>
using namespace std;

int main(){

    int n,value,position,i,array[100];
    
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    
     cout<<"Enter the elements:"<<endl;
   for(i=0;i<n;i++){
       cin>>array[i];
   }
  
   cout<<"Your entered elements are:"<<endl;
   for(i=0;i<n;i++){
       cout<<array[i]<<endl;
   }
    
   cout<<"Enter the number which you want to insert:"<<endl;
   cin>>value;
   
   cout<<"Enter the position where you want to insert the element:"<<endl;
   cin>>position;
   
   for (i = n - 1; i >= position - 1; i--)
      array[i+1] = array[i];
 
   array[position-1] = value;
 
   cout<<"Resultant array is: "<<endl;
 
   for (i = 0; i <= n; i++)
      cout<<array[i];
      
}

