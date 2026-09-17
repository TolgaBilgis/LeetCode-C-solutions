int maxProfit(int* prices, int pricesSize) {
    int lowest = prices[0];
    int best = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < lowest) {
            lowest = prices[i];
        } else if (prices[i] - lowest > best) {
            best = prices[i] - lowest;
        }
    }

    return best;
}
