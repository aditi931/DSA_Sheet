#include<bits/stdc++.h>
using namespace std;

//naive sol

int maxProfit(int price[], int start, int end){
    if(end<= start)
     return 0;
    int profit=0;
    for(int i=start; i<end;i++){
        for(int j=i+1;j<=end; j++){
            if(price[j]> price[i]){
                int currProfit = price[j]- price[i] + maxProfit( price, start, i-1) + maxProfit(price, i+1, end);
                profit = max(profit, currProfit);
            }
        }
    } 
    return profit;
}

// efficient solution

int maxProfit(int price[], int n){
    int profit =0;
    for(int i=1;i<n;i++){
        if(price[i]> price[i-1])
         profit += (price[i]- price[i-1]);
    }
    return profit;
}

/*
int maxProfit(vector<int>& prices) {
        int currentPrice = prices[0];
        int profit = 0;
        
        for(int i=1; i<prices.size(); i++){
            if(prices[i] < currentPrice)       //if stock price gets down, we will start purchasing that day so that we can book profit when price will be high
                currentPrice = prices[i];
            else{    //if stock price gets down, its time to calculate profit, if we are getting max profit then sell it o/w not
                if(prices[i]-currentPrice > profit)
                    profit = prices[i] - currentPrice;
            }
        }
        
        return profit;
    }


*/