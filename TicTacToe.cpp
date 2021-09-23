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

int main() {
     std::vector<std::vector<int>> vboard = CreateBoard();
}
