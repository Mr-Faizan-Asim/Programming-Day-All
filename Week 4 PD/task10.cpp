#include<iostream>
using namespace std;
void change(string input);

main()
{
string input;
while(1)
 {
cout<<"Enter true or false: ";
cin>> input;
 
	change(input);
 }
}

void change(string input)
{
	if(input == "true")
	{
		cout<<"Output: False"<<endl;

	}	

	if(input == "false")
		{
			cout<<"Output: True"<<endl;
		}	
	
	
	
}