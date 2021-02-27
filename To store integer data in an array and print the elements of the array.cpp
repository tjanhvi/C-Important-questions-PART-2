/*To store integer data in an array and print the elements of the array*/
#include<iostream>
 using namespace std;
 int main()
 {
   int n;
   int a[n];
   cout<<"Enter the size of the array: ";
   cin>>n;

   for(int i=0;i<n;i++){
         cout<<"Element "<<i+1<<"=";
         cin>>a[i];
   }

    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
 }
