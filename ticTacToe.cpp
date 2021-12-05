// Tic Tac Toe
#include<iostream>
#include<string>
#include<time.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>


using namespace std;

char a[10] = {'o','1','2','3','4','5','6','7','8','9'};

void draw();
int  check();
void Color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

////////////////////////////////////////////////////////////
int main()
{
	int  p = 1;    // player
	int  i,choice;
	char mark;
	cout << "\tTic Tac Toe \n\n";
	cout << "\t p1 (X) VS p2 (O)\n\n" ;
t1 = clock();
	do
	{
		draw();
		p=(p %2 ) ? 1:2;
		if(p==1){
			Color(2);
			mark='X';
		}
		else{
		Color(4);
			mark='O';
		}
	
		cout << "\np " << p << ":  ";
		cin >> choice;
				
		if (choice == 1 && a[1] == '1')
			a[1] = mark;
		else if (choice == 2 && a[2] == '2')
			a[2] = mark;
		else if (choice == 3 && a[3] == '3')
			a[3] = mark;
		else if (choice == 4 && a[4] == '4')
			a[4] = mark;
		else if (choice == 5 && a[5] == '5')
			a[5] = mark;
		else if (choice == 6 && a[6] == '6')
			a[6] = mark;
		else if (choice == 7 && a[7] == '7')
			a[7] = mark;
		else if (choice == 8 && a[8] == '8')
			a[8] = mark;
		else if (choice == 9 && a[9] == '9')
			a[9] = mark;
		else {cout<<"Invalid move "; p--;getch();}
		i=check();
		p++;
	}while(i==-1);
	
	draw();
	
	if(i==1){
			t2 = clock();
			cout<<"==>\a p"<<--p<<" win \n\n";
			float diff((float)t2 - (float)t1);
	diff /= 1000;
	cout << "time : " << diff << endl;
	}
	
	else{
			t2 = clock();
		cout<<"==>\a Game draw\n\n";
				float diff((float)t2 - (float)t1);
	diff /= 1000;
	cout << "time : " << diff << endl;
		
	}
		
		
	getch();
	return 0;
}
//////////////////////////////////////

int check()
{
	if (a[1] == a[2] && a[2] == a[3])     	return 1;  //GAME IS OVER WITH RESULT
	else if (a[4] == a[5] && a[5] == a[6])	return 1;
	else if (a[7] == a[8] && a[8] == a[9])	return 1;
	
	else if (a[1] == a[4] && a[4] == a[7])	return 1;
	else if (a[2] == a[5] && a[5] == a[8])	return 1;
	else if (a[3] == a[6] && a[6] == a[9])	return 1;
	
	else if (a[1] == a[5] && a[5] == a[9])	return 1;
	else if (a[3] == a[5] && a[5] == a[7])	return 1;
	
	if ( a[1] != '1' && a[2] != '2' && a[3] != '3' && a[4] != '4' && 
	     a[5] != '5' && a[6] != '6' && a[7] != '7' && a[8] != '8' && a[9] != '9')
	                  return 0;              //GAME IS OVER AND NO RESULT
	else
	    return -1;   //GAME IS IN PROGRESS
}

/////////////////////////////////////////////////////////

void draw()
{
	cout << endl;
	cout << "  " << a[1] << "  |  " << a[2] << "  |  " << a[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "  " << a[4] << "  |  " << a[5] << "  |  " << a[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "  " << a[7] << "  |  " << a[8] << "  |  " << a[9] << endl;
}

