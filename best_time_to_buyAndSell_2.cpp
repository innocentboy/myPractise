/**

Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions
as you like (ie, buy one and sell one share of the stock multiple times).
However, you may not engage in multiple transactions at the same time
(ie, you must sell the stock before you buy again).

*/

#include<cstdio>
#include<vector>
using namespace  std;
class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int ans=0,n=prices.size(),i,j;
        for(i=1;i<n;i++)
        {
            j=prices[i]-prices[i-1];
            if(j>0)
            ans+=j;
        }
        return ans;

    }
};
