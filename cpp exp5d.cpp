//Aryaman Pathak EntcA2 o31 exp5d swtich-case days of the week
#include<iostream>

using namespace std;

int main()
{
	int choice,a;
	
	cout<<"Days of the week"<<endl;
	cout<<"Enter number between 1-7"<<endl;
    cin>>choice;
	
	switch(choice)
	{
		case 1:{
			cout<<"Monday"<<endl;		
		} 
		break;
		 
		case 2:{
			cout<<"Tuesday"<<endl;
		}
		break;
		 
		case 3:{
			cout<<"Wednesday"<<endl;
		}
		break;
		 
		case 4:{
			cout<<"Thursday"<<endl;
		    }
		}
		break;
		 
		case 5:{
			cout<<"Friday"<<endl;
		    }
		}
		break;
		 
		case 6:{
			cout<<"Saturday"<<endl;
		    }
		}
		break;
		 
		case 7:{
			cout<<"Sunday"<<endl;
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
Days of the week
Enter number between 1-7
4
Thursday */