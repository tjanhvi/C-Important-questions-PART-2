/*Replace the element in an array*/
#include <iostream>
using namespace std;

int main(){

    int n,p,i,A[5]={34,35,37,38,39};
    
   cout<<"Enter the number which you want to insert:"<<endl;
   cin>>n;
   
   cout<<"Enter the position where you want to insert the element:"<<endl;
   cin>>p;
   
   for(i=0;i<p;i++){
     A[p]=n;
     }
   for(i=0;i<5;i++){
       cout<<A[i]<<" ";
   }
}

