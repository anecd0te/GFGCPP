#include<bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(arr[i][j]==0)
            {
                int ind = i-1;//we don't want to change that 0. We want to change elements in same row to -1
                while(ind>=0)
                {
                    if(arr[ind][j]!=0)
                        arr[ind][j] = -1;
                    ind--;
                }

                ind = i+1;
                while(ind < row)
                {
                    if(arr[ind][j]!=0)
                        arr[ind][j] = -1;
                    ind++;
                }
                ind = j-1;
                while(ind>=0)
                {
                    if(arr[i][ind]!=0)
                        arr[i][ind] = -1;
                    ind--;
                }

                ind = j+1;
                while(ind<col)
                {
                    if(arr[i][ind]!=0)
                        arr[i][ind] = -1;
                    ind++;
                }
            }
        }
    }
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(arr[i][j]<0)
            {
                arr[i][j] = 0;
            }
        }
    }
}

void betterApproach(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    vector<int> rowarr(row, -1);
    vector<int> colarr(col, -1);
    
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(arr[i][j]==0)
            {
                rowarr[i] = 0;
                colarr[j] = 0;
            }
        }
    }

    for(int i = 0;i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(rowarr[i]==0 || colarr[j]==0)
            {
                arr[i][j] = 0;
            }
        }
    }

}

void bestApproach(vector<vector<int>> &arr)
{
    int row = arr.size(), col = arr[0].size(), col0 = 1;
    for(int i = 0; i<row; i++)
    {
        if(arr[i][0]==0)
        {
            col0 = 0;
        }
        for(int j = 1; j<col; j++)
        {
            if(arr[i][j]==0)
            {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    for(int  i = row-1; i>=0; i--)
    {
        for(int j = col-1; j>=1; j--)
        {
            if(arr[i][0] == 0 || arr[0][j] == 0)
            {
                arr[i][j] = 0;
            }
        }
        if(col0 == 0)
        {
            arr[i][0] = 0;
        }
    } 
}
int main()
{
    vector<vector<int>> arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    // setZeros(arr);
    // betterApproach(arr);
    bestApproach(arr);
    cout<<"The final matrix is "<<endl;
    for(int i = 0; i<arr.size(); i++)
    {
        for(int j = 0; j<arr[0].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}