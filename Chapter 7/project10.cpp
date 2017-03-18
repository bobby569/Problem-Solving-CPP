#include <iostream>
#include <iomanip>
using namespace std;
#define DIMENSION 3

void print_board(int board[][DIMENSION], int dimen){
	int i, j;
	for (i = 0; i < dimen; i++) {
		for (j = 0; j < dimen; j++) {
			if (board[i][j] <= dimen*dimen) {
				cout << setw(3) << board[i][j];
			}else{
				cout << setw(3) << static_cast<char>(board[i][j]);
			}
		}
		cout << endl;
	}
}

void play(int board[][DIMENSION], int dimen, char ch){
	int posi;
	do {
		cin >> posi;
		if (board[(posi-1)/dimen][(posi-1)%dimen] > dimen*dimen) {
			cout << "Invalid play.\n";
		}			
	} while (board[(posi-1)/dimen][(posi-1)%dimen] > dimen*dimen);

	board[(posi-1)/dimen][(posi-1)%dimen] = static_cast<int>(ch);
}

void check_win(int board[][DIMENSION], int dimen, bool& win){
	int i, j;
	for (i = 0; i < dimen; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
			win = true;
		}
	}
	for (j = 0; j < dimen; j++) {
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
			win = true;
		}
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1]) {
		win = true;
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
		win = true;
	}
}

int main(){
	int chessboard[DIMENSION][DIMENSION];
	int i, j;
	bool win = false;
	for (i = 0; i < DIMENSION; i++) {
		for (j = 0; j < DIMENSION; j++) {
			chessboard[i][j] = i * DIMENSION + j + 1;
		}
	}
	print_board(chessboard, DIMENSION);
	while (!win) {
		play(chessboard, DIMENSION, 'X');
		print_board(chessboard, DIMENSION);
		check_win(chessboard, DIMENSION, win);
		if (win) {
			break;
		}
		play(chessboard, DIMENSION, 'O');
		print_board(chessboard, DIMENSION);
		check_win(chessboard, DIMENSION, win);
	}
	cout << "The end.\n"; 

	return 0;
}

