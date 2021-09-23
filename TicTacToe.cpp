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
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++) {
            std::string marker = "_";
            if (board[i][j] == 1) {
                marker = "X";
            }
            else if (board[i][j] == 2) {
                marker = "O";
            }
			std::cout << marker << " ";
        }
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
    std::cout << "first pick the row you want (0 - 2): ";
    int row = 0;
    std::cin >> row;
    std::cout << "now pick the column you want (0 - 2): ";
    int col = 0;
    std::cin >> col;
    std::string marker = "";
    int marker_int = 0;
    std::cout << "now pick \"X\" or \"O\": ";
    std::cin >> marker;
    if (marker.compare("X") == 0 || marker.compare("x") == 0) {
        marker_int = 1;
    }
    else if (marker.compare("O") == 0 || marker.compare("o") == 0) {
        marker_int = 2;
    }
    else {
        // recursively run if player does not enter valid "X" or "O"
        return GetPlayerChoice();
    }

    choice.push_back(row);
    choice.push_back(col);
    choice.push_back(marker_int);

    if (row > 2 || col > 2) { // checks to make sure valid choices
        std::cout << "\nplease enver valid numbers" << std::endl;
        return GetPlayerChoice(); // recusively runs till valid input
    }
    return choice;
}

int main() {
     std::vector<std::vector<int>> board = CreateBoard();

     int turns_left = 9;
     while (turns_left > 0) {
         std::cout << "Player " << turns_left % 2 << " take your turn: \n";
         std::vector<int> choices = GetPlayerChoice();

         board[choices[0]][choices[1]] = choices[2];
         DisplayBoard(board);
         turns_left--;
     }
}
