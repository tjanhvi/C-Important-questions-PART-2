
#include<iostream>
using namespace std;
int main()
{
    float overtime_pay;
	int	hour;
	
	for(int i=1;i<=10;i++){
			cout<<"Enter no. of hours worked: "<<endl;
         	cin>>hour;
	
		if(hour>40){
			overtime_pay=(hour-40)*12;
			cout<<"overtime_pay= "<< overtime_pay <<endl<<"hours= "<< hour <<endl;
		}
		else{
			cout<<"opps working time is not more than 40 hours so,no bonus";
		}
	}
}  
