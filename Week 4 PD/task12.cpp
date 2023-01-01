#include<iostream>
using namespace std;
void check_speed(int speed);

main()
{
int speed;
while(1)
 {
cout<<"Enter Speed of Vechile: ";
cin>> speed;
 
	check_speed(speed);
 }
}

void check_speed(int speed)
{
	if(speed > 100)
	{
		cout<<"Halt...	YOU WILL BE CHALLENGED"<<endl;

	}	

	if(speed <= 100)
		{
			cout<<"PERFECT! YOU ARE GOING GOOD "<<endl;
		}	
	
	
	
}