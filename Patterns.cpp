
#include <iostream>
using namespace std;

int main()
{
   for(int i=0;i<=5;i++){
       for(int j=0;j<=5;j++){
           cout<<"*";
       }
       cout<<endl;
   }

   cout<<"*********************************"<<endl;
   
   for(int i=65;i<=69;i++){
       for(int j=65;j<=69;j++){
           cout<<(char)j;
       }
       cout<<endl;
   }

    cout<<"*********************************"<<endl;
    
    for(int i=65;i<=69;i++){
       for(int j=69;j>=65;j--){
           cout<<(char)j;
       }
       cout<<endl;
   }

    cout<<"*********************************"<<endl;
    
    for(char i='A';i<='E';i++){
       for(char j='A';j<='E';j++){
           cout<<i;
       }
       cout<<endl;
   }

   cout<<"*********************************"<<endl;
   
   
    for(char i='E';i>='A';i--){
       for(char j='E';j>='A';j--){
           cout<<i;
       }
       cout<<endl;
   }

    cout<<"*********************************"<<endl;
    
    for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"$";
        }
        cout<<endl;
    }

     cout<<"*********************************"<<endl;
     
     for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"*********************************"<<endl;
     
     for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

    cout<<"*********************************"<<endl;
     
     for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"*********************************"<<endl;
     
     for(int i=5;i<=1;i--){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }


    for(int i=1;i<=5;i++){
       for(int j=5;j>=i;j--)
           cout<<" ";
      for(int k=1;k<=(2*i-1);k++)
      cout<<"$";
      cout<<endl;
    }

    cout<<"*********************************"<<endl;

    for(int i=1;i<=5;i++){
       for(int j=1;j<=5;j++){
           if(i==j || (i+j == 5+1))
           cout<<"$";
           else
           cout<<" ";
       }
       cout<<endl;
    }

return 0;
}
