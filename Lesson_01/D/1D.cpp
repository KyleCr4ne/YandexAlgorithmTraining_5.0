#include <iostream>
#include <string>
#include <vector>


int main() {
    std::vector<std::vector<int>> desk(8, std::vector<int>(8, 0));

    for (int i = 0; i < 8; ++i) {
        std::string cur;
        std::cin >> cur;
        for (int j = 0; j < 8; ++j) {
            if (cur[j] == '*') desk[i][j] = 0;
            if (cur[j] == 'B') desk[i][j] = 1;
            if (cur[j] == 'R') desk[i][j] = 2;
            // 0 - empty, 1 - Bishop (Diag), 2 - rook (horiz and vert)
        }
    } 

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (desk[i][j] == 2) {
                for (int k = i + 1; k < 8; ++k) {
                    if (desk[k][j] == 0) desk[k][j] = -1;
                    else if (desk[k][j] == 1 || desk[k][j] == 2) break;
                }
                for (int k = i - 1; k >= 0; --k) {
                    if (desk[k][j] == 0) desk[k][j] = -1;
                    else if (desk[k][j] == 1 || desk[k][j] == 2) break;
                }
                for (int k = j + 1; k < 8; ++k) {
                    if (desk[i][k] == 0) desk[i][k] = -1;
                    else if (desk[i][k] == 1 || desk[i][k] == 2) break;
                }
                for (int k = j - 1; k >= 0; --k) {
                    if (desk[i][k] == 0) desk[i][k] = -1;
                    else if (desk[i][k] == 1 || desk[i][k] == 2) break;
                }
            }
            if (desk[i][j] == 1) {
                for (int k = i + 1, p = j + 1; k < 8 && p < 8; ++k, ++p) {
                    if (desk[k][p] == 0) desk[k][p] = -1;
                    else if (desk[k][p] == 1 || desk[k][p] == 2) break;
                }
                for (int k = i + 1, p = j - 1; k < 8 && p >= 0; ++k, --p) {
                    if (desk[k][p] == 0) desk[k][p] = -1;
                    else if (desk[k][p] == 1 || desk[k][p] == 2) break;
                }
                for (int k = i - 1, p = j + 1; k >= 0 && p < 8; --k, ++p) {
                    if (desk[k][p] == 0) desk[k][p] = -1;
                    else if (desk[k][p] == 1 || desk[k][p] == 2) break;
                }
                for (int k = i - 1, p = j - 1; k >= 0 && p >= 0; --k, --p) {
                    if (desk[k][p] == 0) desk[k][p] = -1;
                    else if (desk[k][p] == 1 || desk[k][p] == 2) break;
                }
            }
        } 
    }
    int counter = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (desk[i][j] == 0) counter++;
        }
    }
    std::cout << counter << std::endl;
}