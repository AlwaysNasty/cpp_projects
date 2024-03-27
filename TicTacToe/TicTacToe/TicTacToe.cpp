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
		std::cout << "Player 1, Enter row (1-3), then enter column (1-3): \n";
		std::cin >> x >> y;
		x--; y--;

		if (board[x][y] != ' '){
			std::cout << "Invalid move!\n";
		}else{
			board[x][y] = PLAYER1;
			break;
		}
	} while (board[x][y] != ' ');
}

void movePlayer2() {
	int x, y;
	do {
		std::cout << "Player 2, Enter row (1-3), then enter column (1-3): \n";
		std::cin >> x >> y;
		x--; y--;

		if (board[x][y] != ' '){
			std::cout << "Invalid move!\n";
		} else {
			board[x][y] = PLAYER2;
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
	for (int i = 0; i < 3; i++)
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
			return board[i][0];

	for (int i = 0; i < 3; i++)
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
			return board[0][i];

	for (int i = 0; i < 3; i++)
		if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
			return board[0][0];

	for (int i = 0; i < 3; i++)
		if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
			return board[0][2];

	return ' ';
}

void printWinner(char winner) {
	if (winner == PLAYER1)
		std::cout << "FIRST PLAYER WON!\n";
	else if (winner == PLAYER2)
		std::cout << "SECOND PLAYER WON!\n";
	else
		std::cout << "TIE!";
}

int main()
{	
	char winner = ' ';
	resetBoard();
	while (winner == ' ' && checkFreeSpaces() != 0)
	{
		drawBoard();
		movePlayer1();
		drawBoard();
		winner = checkWinner();
		if (winner != ' ' || checkFreeSpaces() == 0)
			break;

		movePlayer2();
		winner = checkWinner();
		if (winner != ' ' || checkFreeSpaces() == 0)
			break;
		
	}
	drawBoard();
	printWinner(winner);
	
	return 0;
}
