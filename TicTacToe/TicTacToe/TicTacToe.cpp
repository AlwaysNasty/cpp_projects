#include "TicTacToe.h"

const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

char board[3][3] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
};

void resetBoard() {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			board[i][j] = ' ';
}

void drawBoard() {
	std::cout << "-------------\n";

	for (int i = 0; i < 3; i++){
		std::cout << "| ";
		for (int j = 0; j < 3; j++)
			std::cout << board[i][j] << " | ";

		std::cout << "\n-------------\n";
	}
}

void movePlayer1() {
	int x, y;
	do{
		std::cout << "Enter row (1-3), then enter column: \n";
		std::cin >> x >> y;
		x--; y--;

		if (board[x][y] != ' '){
			std::cout << "Invalid move!\n";
		}else{
			board[x][y] == PLAYER1;
			break;
		}
	} while (board[x][y] != ' ');
}

void movePlayer2() {
	int x, y;
	do {
		std::cout << "Enter row (1-3), then enter column: \n";
		std::cin >> x >> y;
		x--; y--;

		if (board[x][y] != ' '){
			std::cout << "Invalid move!\n";
		}else{
			board[x][y] == PLAYER2;
			break;
		}			
	} while (board[x][y] != ' ');
}

int checkFreeSpaces(){
	int freeSpaces = 9;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (board[i][j] != ' ')
				--freeSpaces;
	return freeSpaces;
}

char checkWinner() {
	return ' ';
}

void printWinner() {

}

int main()
{	
	char winner = ' ';
	resetBoard();
	while (winner == ' ' && checkFreeSpaces() != 0)
	{
		drawBoard();
		movePlayer1();
		winner = checkWinner();
		movePlayer2();
		winner = checkWinner();
	}
	return 0;
}
