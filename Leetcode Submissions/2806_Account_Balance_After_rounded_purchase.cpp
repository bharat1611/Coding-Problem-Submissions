class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int newAmt = 0;
        if((purchaseAmount % 10) >= 5)
        {   
            purchaseAmount = purchaseAmount/10;
            newAmt = (purchaseAmount + 1)*10;
        }
        else
        {
            newAmt = (purchaseAmount/10)*10;
        }
        return 100 - newAmt;
    }
};