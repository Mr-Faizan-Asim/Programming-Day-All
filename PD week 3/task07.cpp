#include<iostream>
using namespace std;
main()
{
string movie_name;
float adult_ticket_price,child_ticket_price,adult_tickets_sold,child_tickets_sold,percentage_denoted,total_earn,amount_after_charity;
cout<<"Enter Movie Name: ";
cin>> movie_name;
cout<<"Enter Adult ticket price: ";
cin>> adult_ticket_price;
cout<<"Enter Child ticket price: ";
cin>> child_ticket_price;
cout<<"Enter number of adult tickets sold: ";
cin>> adult_tickets_sold;
cout<<"Enter  number of child tickets sold: ";
cin>> child_tickets_sold;
cout<<"Enter Percentage of the amount to be donated to the charity: ";
cin>> percentage_denoted;
total_earn = (adult_ticket_price*adult_tickets_sold)+(child_ticket_price*child_tickets_sold);
cout<<"Total Amount Generated: "<<total_earn<<endl;
amount_after_charity = total_earn - ( total_earn*percentage_denoted)/100;
cout<<"Amount after Donation: "<<amount_after_charity;





















}