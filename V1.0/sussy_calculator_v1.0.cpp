#include<iostream>
using namespace std;
int main()
{
	int i,n;
	long double num1,num2,result;
	cout<<"Enter the number of calculation you want to do: ";
	cin>>n;
	for(i=0;i<n;++i)
	{
		int choice;
		long double a,b,c;
		cout<<"Calculator:";
		cout<<"\n1.Sum";
		cout<<"\n2.Subtract";
		cout<<"\n3.Multiply";
		cout<<"\n4.Divide";
		cout<<"\nWhat do you want to do?: ";
		cin>>choice;
		cout<<"Enter value of number 1: ";
		cin>>a;
		cout<<"Enter value of number 2: ";
		cin>>b;
		switch(choice)
		{
			case 1:
				c=a+b;
				cout<<"The sum of the above two numbers is: "<<c<<endl;
				break;
			case 2:
				c=a-b;
				cout<<"The difference of the above two numbers is: "<<c<<endl;
				break;
			case 3:
				c=a*b;
				cout<<"The product of the above two numbers is: "<<c<<endl;
				break;
			case 4:
				c=a/b;
				cout<<"The quotient of the above two numbers is: "<<c<<endl;
				break;
			default:
				cout<<"/nPlease enter a option from (1-4)"<<endl;
		}
	}
	cout<<"\n\nThank you for using sussy calculator v1.0"<<endl;
}
