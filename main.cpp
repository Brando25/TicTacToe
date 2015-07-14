/* 
 * File:   main.cpp
 * Author: the pc
 *
 * Created on July 13, 2015, 7:49 PM
 */

#include <cstdlib>
#include <iostream>
#include <time.h>
#include "functions.h"

using namespace std;
void displayGameBoard(char gameBoard[]);
void applyMoveToGameBoard(char gameBoard[], char turn);
bool boardHasWinner(char gameBoard[], char player);
void main()
{

	char turn = 'x';
	char gameBoard[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	displayGameBoard(gameBoard);
	bool gameOver = false;
	int movesMade = 0;

	while (!gameOver&&movesMade<9)
	{
		movesMade++;
		applyMoveToGameBoard(gameBoard, turn);
		system("cls");
		displayGameBoard(gameBoard);
		if (turn == 'x')
		{
			turn = 'o';
		}
		else
		{
			turn = 'x';
		}
		if (boardHasWinner(gameBoard, 'x'))
		{
			cout << "x wins" << endl;
			gameOver = true;
		}
		if (boardHasWinner(gameBoard, 'o'))
		{
			cout << "Computer wins" << endl;
			gameOver = true;
		}

	}
	if (gameOver == false)
	{
		cout << "Cat wins" << endl;
	}
	system("pause");
}

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

