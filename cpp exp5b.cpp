//Aryaman Pathak EntcA2 o31 exp5b vowel/consonent
#include<iostream>

using namespace std;

int main()
{
	char a;
	
	cout<<"Enter a character: "<<endl;
	cin>>a;
	
	if(a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' ||  a == 'u')
	{
		cout<<a<<" is a vowel."<<endl;
	}
	else
	{
		cout<<a<<" is a consonant."<<endl;
	}
}
/*output
Enter a character:
a
a is a vowel.
Enter a character:
b
b is a consonent. */