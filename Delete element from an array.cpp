/*Delete element from an array*/
#include <iostream>
using namespace std;

int main(){
      int n,position,i,Arr[100];
    
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    
     cout<<"Enter the elements:"<<endl;
   for(i=0;i<n;i++){
       cin>>Arr[i];
   }
  
   cout<<"Your entered elements are:"<<endl;
   for(i=0;i<n;i++){
       cout<<Arr[i]<<endl;
   }
    

   cout<<"Enter the position from where you want to delete the element:"<<endl;
   cin>>position;
   
   if(position>=n+1){
       cout<<"Deletion is not possible"<<endl;
   }
     
    for(i=position-1;i<n-1;i++){
        Arr[i]=Arr[i+1];
        } 
     
   for(i=0;i<n-1;i++){
       cout<<Arr[i]<<" ";
   }
}
