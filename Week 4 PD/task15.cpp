#include<iostream>
using namespace std;
void less_sleep(int holidays_in_year,int working_days,int time_for_games,int hour_in_year,float difference);
main()
{
int holidays_in_year;
int working_days;
int time_for_games;
int hour_in_year;
float difference;
cout<<"Number of Holidays in Year: ";
cin>>holidays_in_year;
working_days = 365-holidays_in_year;
cout<<"Number of Hours Play in Year: ";
cin>>hour_in_year;
time_for_games = (working_days*hour_in_year)+(127*holidays_in_year);
difference = 30000 - time_for_games;
less_sleep(holidays_in_year,working_days,time_for_games,hour_in_year,difference);		
}

void less_sleep(int holidays_in_year,int working_days,int time_for_games,int hour_in_year,float difference)
{
if(difference <= 200)
{
cout <<"Tom Will Run Away"<<endl;	
difference = (difference/60);
cout <<difference;
cout<<" Hours for Play";	
}
if(difference > 200)
{
cout <<"Tom Sleeps Well"<<endl;	
difference = (difference/60);
cout <<difference;
cout<<" Hours for Play";	
}	


}
