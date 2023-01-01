#include<iostream>
using namespace std;
void chang(string input, float ticket_price,float discount);

main()
{
string input;
float ticket_price,discount = 0;
while(1)
 {
cout<<"Enter Country: ";
cin>> input;
cout<<"Enter Ticket Price: ";
cin>> ticket_price; 
	chang(input, ticket_price, discount);
}
}

void chang(string input,float ticket_price,float discount)
{
	
	if(input == "pakistan")
	{
		discount = ticket_price - (ticket_price * 0.05);
		cout<<"Ticket Price After Discount: "<<discount <<endl;

	}	

	if(input == "Ireland")
	{
		discount = ticket_price - (ticket_price * 0.1) ;
		cout<<"Ticket Price After Discount: "<<discount <<endl;

	}	
	
	if(input == "inia")
	{
		discount = ticket_price - (ticket_price * 0.2) ;
		cout<<"Ticket Price After Discount: "<<discount <<endl;

	}	
	
	if(input == "england")
	{
		discount = ticket_price - (ticket_price * 0.3) ;
		cout<<"Ticket Price After Discount: "<<discount <<endl;

	}	
	
	if(input == "canada")
	{
		discount = ticket_price - (ticket_price * 0.45) ;
		cout<<"Ticket Price After Discount: "<<discount <<endl;

	}	
	
	
	
}