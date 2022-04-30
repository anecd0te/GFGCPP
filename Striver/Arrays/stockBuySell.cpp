#include<bits/stdc++.h>
using namespace std;
int simple(vector<int> stock)
{
    int stockPrice = 0;
    for(int i = 0; i<stock.size(); i++)
    {
        for(int j = i+1; j<stock.size(); j++)
        {
            if(stock[j]>stock[i])
            {
                stockPrice = max(stockPrice, stock[j]-stock[i]);
            }
        }
    }
    return stockPrice;
}

int best(vector<int> stock)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for(int i = 0; i<stock.size(); i++)
    {
        minPrice = min(minPrice, stock[i]);
        maxProfit = max(maxProfit, stock[i]-minPrice);
    }

    return maxProfit;
}
int main()
{
    vector<int> stock{7,1,5,3,6,4};
    // cout<<simple(stock);
    cout<<best(stock);
}