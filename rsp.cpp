//Joel Asante 
//Rock Paper Scissor Game  


#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>


using namespace std;

int UserChoice();
int ComputerChoice();
void Result(int, int);

int main()
{
	
	int userchoice;
	int computerchoice;

	cout << "This is a Rock, Scissor, Paper Game. You wll be player against the computer " << endl;
	cout << " Rules for a WIN: " << endl;
	cout << "\t1- Rock always beats Scissors\t" << endl;
	cout << "\t2- Scissors beats Paper\t" << endl;
	cout << "\t3- Paper beats Rock\t" << endl;
	cout << endl;

	userchoice = UserChoice();
	computerchoice = ComputerChoice();
	Result(userchoice, computerchoice);
	


return 0;
}

//Function for the user's Choices.
int UserChoice()
{
	char userinput;
	int userweapon;

	cout << "Choice a weapon your want to use (Rock(R) Scissors(S) Paper(P))-- (not case-sensitive)" << endl;
	cin >> userinput;
	cin.clear(); 	// To clear the user input in every loop
	cin.ignore(100,'\n');

	//using the fuction to switch from upper case letter to lower case if user inputs upper case 
	if (isupper (userinput))
	{
		userinput = tolower(userinput);
	}

	
	//Switching between cases of the rock scissors paper
		switch(userinput)
		{
			case 'r':
				userweapon = 10;
				break;

			case 's':
				userweapon = 20;
				break;

			case 'p':
				userweapon = 30;
				break;
		}
		return userweapon;

}

//Function for the computer Choices.
int ComputerChoice()
{
	int  computerweapon;
	

	srand (time(0));
	computerweapon = rand()  % 3 + 1;
	
	return computerweapon;
}

//Function for the results of the battle.
void  Result(int user, int computer)
{
	int sum;
       sum = user + computer;

	switch(sum)
	{
//Winning Switches 
	case 12:
		cout << "(10+2)-- You Picked Rock, Computer Picked Scissors"<< endl;
		cout << "Rock CRUSHES Scissors" << endl;
		cout <<'\n'<< " YAYY YOU WON" << endl;
		break;

	case 23:
		cout << "(20+3)-- You Picked Scissors, Computer Picked Paper"<< endl;
		cout << "Scissors CUTS Paper" << endl;
		cout <<'\n'<< " YAYY YOU WON!!" << endl;
		break;

	case 31:
		cout << "(30+1)-- You Picked Paper, Computer Picked Rock"<< endl;
		cout << "Paper WRAPS AROUND Rock" << endl;
		cout <<'\n'<< " YAYY YOU WON!!" << endl;
		break;

//Losing Switches
	case 13:
		cout << "(10+3)-- You Picked Rock, Computer Picked Paper"<< endl;
		cout << "Paper WRAPS AROUND Rock" <<endl;
		cout <<'\n'<< "SORRY YOU LOST-- COMPUTER WON!!" << endl;
		break;

	case 21:
		cout << "(20+1)-- You Picked Scissor, Computer Picked Rock"<< endl;
		cout << "Rock CRUSHES Scissors" <<endl;
		cout <<'\n'<< "SORRY YOU LOST-- COMPUTER WON!!" <<endl;
		break;

	case 32:
		cout << "(30+2)-- You Picked Paper, Computer Picked Scissor"<<endl;
		cout << "Scissors CUTS Paper" <<endl;
		cout <<'\n'<< "SORRY YOU LOST-- COMPUTER WON!!" << endl;
		break;

//Tie Switches
	case 11:
		cout << "(10+1)-- You Picked Rock, Computer Picked Rock" <<endl;
		cout << "TWO Rocks" <<endl;
		cout <<'\n' << "THAT'S A TIE!!" << endl;
		break;

	case 22:
		cout << "(20+2)-- You Picked Scissors, Computer Picked Scissors" <<endl;
		cout << "TWO SCISSORS" <<endl;
		cout <<'\n' << "THAT'S A TIE!!" <<endl;
		break;

	case 33:
		cout << "(30+3)-- You Picked Paper, Computer Picked Paper" <<endl;
		cout << "TWO PAPERS" <<endl;
		cout <<'\n' << "THAT'S A TIE!!" <<endl;
		break;

	}
}

