// TicTacToe.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <ctime>

bool game_status = true, draw = false;
char board[9] = {'1','2','3','4','5','6','7','8','9'};
int end_game, player = 1, current_turn, turns = 0, game_mode;
char again;

void drawBoard();
int winner();
void placeOnBoard(int pos, int play);
void clearBoard();
int AI_turn();

int main()
{
	while (game_status)
	{
		std::cout << "Game mode:" << std::endl;
		std::cout << "0: P1 vs P2" << std::endl;
		std::cout << "1: P1 vs AI" << std::endl;
		std::cin >> game_mode;

		do {
			drawBoard();

			std::cout << "Player " << player << ": ";
			turns++;

			if (game_mode == 1) {
				if ((turns % 2) == 1)
				{
					std::cin >> current_turn;
				}
				else
				{
					current_turn = AI_turn();
					std::cout << current_turn << std::endl;
				}
			}
			else
			{
				std::cin >> current_turn;
			}
			
			placeOnBoard(current_turn, player);
			end_game = winner();

			

		} while (end_game == -1 && !draw);

		drawBoard();
		if (end_game == 0) 
		{
			std::cout << "  Winner is Player " << (player % 2) + 1 << "!!" << std::endl;
		}
		else 
		{
			std::cout << "  Game draw!" << std::endl;
		}

		std::cout << "Play again? y/n" << std::endl;
		std::cin >> again;

		/*Exit Game*/
		if (again == 'n') 
		{
			game_status = false;
		}
		else
		{
			clearBoard();
		}
	}

    return 0;
}

void drawBoard()
{
	std::cout << "\n\tTic Tac Toe\t" << std::endl;
	std::cout << "  PLAYER 1(X)  PLAYER 2(O)\n" << std::endl;
	std::cout << "\t " << board[0] << " | " << board[1] << " | " << board[2] << " " << std::endl;
	std::cout << "\t---+---+---" << std::endl;
	std::cout << "\t " << board[3] << " | " << board[4] << " | " << board[5] << " " << std::endl;
	std::cout << "\t---+---+---" << std::endl;
	std::cout << "\t " << board[6] << " | " << board[7] << " | " << board[8] << " " << std::endl;
}

/*Determine game winner*/
int winner()
{
	if ((board[0] == board[1] && board[1] == board[2]) ||
		(board[3] == board[4] && board[4] == board[5]) ||
		(board[6] == board[7] && board[7] == board[8]) || 
		(board[0] == board[3] && board[3] == board[6]) || 
		(board[1] == board[4] && board[4] == board[7]) || 
		(board[2] == board[5] && board[5] == board[8]) ||
		(board[0] == board[4] && board[4] == board[8]) || 
		(board[2] == board[4] && board[4] == board[6]) )
	{
		return 0;
	}

	if (turns == 9)
	{
		draw = true;
	}

	return -1;
}

void placeOnBoard(int pos, int play)
{
	pos = pos - 1;
	if (board[pos] != 'X' && board[pos] != 'O') 
	{
		if (play == 1)
		{
			board[pos] = 'X';
			player = 2; //Switch player
		}
		else if (play == 2)
		{
			board[pos] = 'O';
			player = 1; //Switch player
		}
	}
	else
	{
		std::cout << "Invalid move. Please select another position." << std::endl;
		turns--;
	}
}

void clearBoard()
{
	board[0] = '1';
	board[1] = '2';
	board[2] = '3';
	board[3] = '4';
	board[4] = '5';
	board[5] = '6';
	board[6] = '7';
	board[7] = '8';
	board[8] = '9';

	turns = 0;
	player = 1;
	draw = false;
}

int AI_turn()
{
	int move;

	do {
		srand((unsigned int)time(NULL));
		move = rand() % 9 + 1;
	} while (board[move - 1] == 'X' || board[move - 1] == 'O');

	return move;
}