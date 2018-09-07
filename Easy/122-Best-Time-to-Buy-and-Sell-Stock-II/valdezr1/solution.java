// Buy stock when at lowest point of a dip, 
// Then look at upcoming days.
// Find the nearest "max" before a dip,
// Then sell stock at nearest max.
// Add to total profit 
// Find a dip again, and repeat process
// return total profit

// Run-Time: O(n)
// Space Complexity: O(1);

int maxProfit(int[] prices){ 
	int profit = 0;
	int localMin = prices[0];
	int localMax = prices[0]; 
	for (int i = 1; i < prices.length(); i++) {
		// Find Minimum
		if (prices[i] < localMin) {
			localMin = prices[i];
		}
		else if (prices[i] > localMin + 2) {
			// Buy at localMin price, then Sell at prices[i]
			localMax = prices[i];
			for (int j = 0; j < prices.length(); j++) {
				if (localMax > prices[i]) {
					// localMax is found, sell
					profit += (prices[i] - localMin);
				} 
				else {
					// Update localMax to new localMax
					localMax = prices[i];
				}
				i++; 
			}
		}
	}
	
	return profit; 
} 
