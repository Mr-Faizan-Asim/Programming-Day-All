#include<iostream>
using namespace std;
void owner_plays(string work_holiday,float working_days,float holidays,float play_time);


main()
{	
string work_holiday;
float working_days;
float holidays;
float play_time;
while(1)
{
	cout<<"Enter Working or Holiday: ";
	cin>> work_holiday;
	owner_plays(work_holiday,working_days,holidays,play_time);	
}
}

void owner_plays(string work_holiday,float working_days,float holidays,float play_time)
{
if (work_holiday == "working")
	{
	cout<<"Enter Working Days in Year: ";
	cin>> working_days;

	play_time = 30000/(working_days);
	cout<< play_time;
	cout<<" Minutes per day"<<endl;
	
	}

if (work_holiday == "holiday")
	{
	cout<<"Enter Holidays in Year: ";
	cin>> holidays;
	play_time = 30000/(holidays*12);
	cout<< play_time;
	cout<<" Minutes per day"<<endl;
	}
}

