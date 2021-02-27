/*Write a program to find out the greatest and the smallest among three
 numbers using pointers.*/
 #include <iostream>
 using namespace std;
 
int main()
{
    int n1, n2, n3;
    int *p1, *p2, *p3;

    //input from user
    cout<<"Enter First Number: "<<endl;
    cin>>n1;
    cout<<"Enter Second Number: "<<endl;
    cin>>n2;
    cout<<"Enter Third Number: "<<endl;
    cin>>n3;

    // the address of input numbers to pointers
    p1 = &n1;
    p2 = &n2;
    p3 = &n3;
    if(*p1 > *p2)
    {
	if(*p1 > *p3)
	{
		cout<< *p1<<"is the largest number"<<endl;
	}
	else
	{
		cout<< *p3<<"is the largest number"<<endl;
	}
    }
    else
    {
	if(*p2 > *p3)
	{
		cout<< *p2<<"is the largest number"<<endl;
	}
	else
	{
			cout<< *p3<<"is the largest number"<<endl;
	}
    }
    return 0;
}
