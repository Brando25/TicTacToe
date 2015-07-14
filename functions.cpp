#include <iostream>
#include <time.h>
using namespace std;
//void  computerApplyMove(char gameBoard[], char turn)
//{
//	int move;
//	do
//	{
//		move = rand() % 9;
//	} while (move < 0 || move>8 || gameBoard[move] == 'o' || gameBoard[move] == 'x');
//	
//}
void displayGameBoard(char gameBoard[])
{
	cout << gameBoard[0] << '|';
	cout << gameBoard[1] << '|';
	cout << gameBoard[2] << endl;
	cout << "-----" << endl;
	cout << gameBoard[3] << '|';
	cout << gameBoard[4] << '|';
	cout << gameBoard[5] << endl;
	cout << "-----" << endl;
	cout << gameBoard[6] << '|';
	cout << gameBoard[7] << '|';
	cout << gameBoard[8] << endl << endl;

}

bool boardHasWinner(char gameBoard[], char player)
{
	bool result = false;

	if (gameBoard[0] == player&&gameBoard[1] == player&&gameBoard[2] == player)
	{
		result = true;
	}

	if (gameBoard[3] == player&&gameBoard[4] == player&&gameBoard[5] == player)
	{
		result = true;
	}
	if (gameBoard[8] == player&&gameBoard[7] == player&&gameBoard[8] == player)
	{
		result = true;
	}
	if (gameBoard[0] == player&&gameBoard[3] == player&&gameBoard[6] == player)
	{
		result = true;
	}
	if (gameBoard[1] == player&&gameBoard[4] == player&&gameBoard[7] == player)
	{
		result = true;
	}
	if (gameBoard[2] == player&&gameBoard[5] == player&&gameBoard[8] == player)
	{
		result = true;
	}
	if (gameBoard[0] == player&&gameBoard[4] == player&&gameBoard[8] == player)
	{
		result = true;
	}
	if (gameBoard[2] == player&&gameBoard[4] == player&&gameBoard[6] == player)
	{
		result = true;
	}
	return result;
}
void applyMoveToGameBoard(char gameBoard[], char turn)
{
	srand(time(NULL));
	int move;
	do
	{
		cout << turn << "'s Move.";
		if (turn == 'o')
		{
			move = (rand() % 10)+1;
		}
		else
		{
			cin >> move;
		}
		move--;
	} while (move<0 || move>8 || gameBoard[move] == 'o' || gameBoard[move] == 'x');


	gameBoard[move] = turn;
}
