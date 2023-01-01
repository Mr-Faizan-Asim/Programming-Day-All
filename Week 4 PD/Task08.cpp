#include <iostream>
#include <windows.h>
using namespace std;
void true_False(int x,int y);
main()

int main()
{
int x,y;
system("cls");
cout<<"Enter 1st Number: ";
cin>> x;	 
cout<<"Enter 2nd Number: ";
cin>> y;
true_False(x,y);

}

void true_False(int x,int y)
{
	
if(x == y )
{
	cout<<"True";

}

if(x > y)
{
	cout<<"False";

}

if(x < y)
{
	cout<<"False";

}


}