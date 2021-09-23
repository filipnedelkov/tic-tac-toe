#include <iostream>
#include <vector>
// 1 = X, 2 = O, and 0 is blank/empty
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

std::vector<int> GetPlayerChoice(){
    //row then column
    std::vector<int> choice;
    std::cout << "first pick the row you want (0 - 2)" << std::endl;
    int row = 0;
    std::cin >> row;
    std::cout << "\nnow pick the column you want (0 - 2)" << std::endl;
    int col = 0;
    std::cin >> col;
    choice.push_back(row);
    choice.push_back(col);

    if (row > 2 || col > 2) { // checks to make sure valid choices
        std::cout << "\nplease enver valid numbers" << std::endl;
        return GetPlayerChoice(); // recusively runs till valid input
    }
    return choice;
}

int main() {
     std::vector<std::vector<int>> board = CreateBoard();
     DisplayBoard(board);
}
