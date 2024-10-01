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

    if (checkRow(grid) && checkColumn(grid) && checkSubGrid(grid)) 
        printf("You won the Sudoku game!\n");

     else 
        printf("You lost the Sudoku game!\n");
    


    return 0;
}

bool checkRow(int grid[num][num]) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            int current = grid[i][j];
            if (current < 1 || current > 9) continue;
            for (int k = j + 1; k < num; k++) {
                if (grid[i][k] == current) {
                    return false;  
                }
            }
        }
    }
    return true;
}

bool checkColumn(int grid[num][num]) {
    for (int j = 0; j < num; j++) {
        for (int i = 0; i < num; i++) {
            int current = grid[i][j];
            if (current < 1 || current > 9) continue; 
            for (int k = i + 1; k < num; k++) {
                if (grid[k][j] == current) 
                    return false;  
                
            }
        }
    }
    return true;
}

bool checkSubGrid(int grid[num][num]) {
    for (int row = 0; row < num; row += 3) {    
        for (int col = 0; col < num; col += 3) {
                //row 0-3,3-6,6-9 same as col
                
                
                for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int current = grid[row + i][col + j];
                    if (current < 1 || current > 9) continue;  
                   
                   
                    for (int k = i; k < 3; k++) {
    if (k == i) {  //when same it remains in the subgrid 
        for (int l = j + 1; l < 3; l++) { //inner loop<avoid cuurent with same number>
            if (grid[row + k][col + l] == current) 
                return false;
            //k and l used for subgrid row colums check
        }
    } 
    
    
    else { //part k>i ..<shit to next row>
        for (int l = 0; l < 3; l++) {
            if (grid[row + k][col + l] == current) {
                return false;
            }
        }
    }
}

                }
            }
        }
    }
    return true;
}
