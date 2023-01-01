#include<iostream>
using namespace std;
void flower(float Total_amount,float discount,int number_of_red_rose,int number_of_white_rose,int number_of_tulips);

main()
{
float red_rose=2.0;
float white_rose=4.10;
float tulips=2.50;	
float Total_amount;
float discount;
int number_of_red_rose;
int number_of_white_rose;
int number_of_tulips;
while(1)
{
flower(Total_amount,discount,number_of_red_rose,number_of_white_rose,number_of_tulips);
}
}
void flower(float Total_amount,float discount,int number_of_red_rose,int number_of_white_rose,int number_of_tulips)
{
float red_rose=2.0;
float white_rose=4.10;
float tulips=2.50;	

cout<<"Enter Number of Red Rose: ";
cin>> number_of_red_rose;
cout<<"Enter Number of White Rose: ";
cin>> number_of_white_rose;
cout<<"Enter Number of Tulips: ";
cin>> number_of_tulips;
Total_amount = (number_of_red_rose*2.0)+(number_of_white_rose*4.10)+(number_of_tulips*2.50);
cout<<"Total Amount without Discount: "<< Total_amount<<endl;
if(Total_amount > 200)
{
	discount = Total_amount - (Total_amount*0.2);
	cout<<"Total Amount with Discount: "<< discount;


}	
	
	
	
	
}