#include <iostream>
#include <vector>

 std::vector<std::vector<int>> CreateBoard() {
    std::vector<std::vector<int>> v = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    return v;
}

void DisplayBoard(std::vector<std::vector<int>> board){
	for (int i = 0; i < board.size(); i++){
		for (int j = 0; j < board[i].size(); j++)
			std::cout << board[i][j] << " ";
		std::cout << std::endl;
	}
}

bool PlaceMarker(int row, int col, int choice, std::vector<std::vector<int>> &board) {
    // row and col are in bounds of the board
    if (board[row][col] == 0) { // player can only play on empty spaces
        board[row][col] = choice;
        return true;
    }
    return false;
}

int main() {
     std::vector<std::vector<int>> board = CreateBoard();
     DisplayBoard(board);
}
