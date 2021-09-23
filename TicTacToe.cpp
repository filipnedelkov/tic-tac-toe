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

void DisplayBoard(std::vector<std::vector<int>> v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;

    }
}

int main() {
     std::vector<std::vector<int>> board = CreateBoard();
     DisplayBoard(board);
}
