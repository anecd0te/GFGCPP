#include<bits/stdc++.h>
#define N 9
using namespace std;

/* A utility function to print grid */
void print(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

bool isSafe(int grid[N][N], int row, int col, int num)
{
    //checking if same value exists in the row
    for(int x = 0;x<N; x++)
    {
        if(grid[row][x] == num)
            return false;
    }

    //checking in the same column
    for(int x = 0; x<N; x++)
    {
        if(grid[x][col] == num)
            return false;
    }

    //checking in the same block
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(grid[i + startRow][j+startCol] == num)
                return false;
        }
    }

    return true;
}
bool solveSudoku(int grid[N][N], int row, int col)
{
    //if we have successfully parsed all the cells then return true;
    if(row==N-1 && col==N)
    {
        return true;
    }

    //if we have reached last col then increment row and start with col = 0
    if(col==N)
    {
        row ++;
        col = 0;
    }

    //If value is already filled then move on to next col
    if(grid[row][col]>0)
    {
        return solveSudoku(grid, row, col+1);
    }

    for(int num = 1; num<=N; num++)
    {
        if(isSafe(grid, row, col, num))
        {
            grid[row][col] = num;
            
            if(solveSudoku(grid, row, col+1))
                return true;
        }

        grid[row][col] = 0;
    }
    return false;
}
int main()
{
    //0 means unassigned cell
    int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                    { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                    { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                    { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                    { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                    { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                    { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                    { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                    { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
    int row = 0;
    int col = 0;
    if(solveSudoku(grid, row, col))
        print(grid);
    else
        cout<<"Not possible";

    return 0;    
}
