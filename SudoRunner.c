#include <stdio.h>
#include <stdbool.h>

#define num 9

bool checkRow(int grid[num][num]);
bool checkColumn(int grid[num][num]);
bool checkSubGrid(int grid[num][num]);

int main() {
    freopen("Data.txt", "r", stdin);
    int grid[num][num];

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    if (checkRow(grid) && checkColumn(grid) && checkSubGrid(grid)) {
        printf("You won the Sudoku game!\n");
    } else {
        printf("You lost the Sudoku game!\n");
    }

    return 0;
}

bool checkRow(int grid[num][num]) {
    for (int i = 0; i < num; i++) {
        bool seen[num + 1] = { false }; 
        for (int j = 0; j < num; j++) {
            int Num = grid[i][j];
            if (num >= 1 && num <= 9) {
                if (seen[num]) {
                    return false; 
                }
                seen[num] = true;
            }
        }
    }
    return true;
}

bool checkColumn(int grid[num][num]) {
    for (int j = 0; j < num; j++) {
        bool seen[num + 1] = { false };
        for (int i = 0; i < num; i++) {
            int Num = grid[i][j];
            if (num >= 1 && num <= 9) {
                if (seen[num]) {
                }
                seen[num] = true;
            }
        }
    }
    return true;
}

bool checkSubGrid(int grid[num][num]) {
    for (int row = 0; row < num; row += 3) {
        for (int col = 0; col < num; col += 3) {
            bool seen[num + 1] = { false };  
            for (int i = row; i < row + 3; i++) {
                for (int j = col; j < col + 3; j++) {
                    int Num = grid[i][j];
                    if (num >= 1 && num <= 9) {
                        if (seen[num]) {
                            return false;
                        }
                        seen[num] = true;
                    }
                }
            }
        }
    }
    return true;
}
