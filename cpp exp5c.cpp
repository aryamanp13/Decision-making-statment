//Aryaman Pathak EntcA2 o31 exp5c switch-case calculator
#include<iostream>

using namespace std;

int main()
{
	int choice,a,b,x,y,z,q;
	
	cout<<"Simple Calculator"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4. Division"<<endl;
    cin>>choice;
	
	cout<<"Enter first number: "<<endl;
	cin>>a;
	cout<<"Enter the second number: "<<endl;
	cin>>b;
	
	
	switch(choice)
	{
		case 1:{
			x = a+b;
			cout<<"The sum is: "<<x<<endl;		
		} 
		break;
		case 2:{
			y = a-b;
			cout<<"The subtraction is: "<<y<<endl;
		}
		break;
		case 3:{
			z = a*b;
			cout<<"The multiplication is: "<<z<<endl;
		}
		break;
		case 4:{
			if(b==0)
			{
				cout<<"Divide by 0 error!"<<endl;
			}
			else
		    {
			q = a/b;
			cout<<"The division is: "<<q<<endl;
		    }
		}
		break;
		default:
		{
			cout<<"Enter valid input."<<endl;
		}
    }		
}
/*output
Simple Calculator
1. Addition
2. Subtraction
3.Multiplication
4. Division
3
Enter first number:
7
Enter the second number:
3
The multiplication is: 21 */