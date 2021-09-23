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

void PlaceMarker(int row, int col, std::vector<std::vector<int>> &board) {
    // assuming row and col are in bounds of the CreateBoard
    board[row][col] = 1;
}

int main() {
     std::vector<std::vector<int>> board = CreateBoard();
     DisplayBoard(board);
}
