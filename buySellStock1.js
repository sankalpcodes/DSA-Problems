/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let left = 0;
    let right = 1;
    let max_profit = 0;

    while(right< prices.length){
        if(prices[left] < prices[right]){
            let profit = prices[right] - prices[left];
            max_profit = Math.max(max_profit, profit) // function to compare the max value among two values
        }else{
            left = right;
        }
        right++;
        
    }
    return max_profit;
    
};