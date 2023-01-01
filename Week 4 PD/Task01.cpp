#include <iostream>
#include <windows.h>
using namespace std;
main()

void gotoxy(int x,int y)
{
 COORD coordinates;
 cordinates.X = x;
 cordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OOTPUT_HANDLE), coordinates);

}

int main()
{
system("cls");
cout<< "TEST"
gotoxy(15,15);
cout<< "My Name is Muhammad Faizan";


}