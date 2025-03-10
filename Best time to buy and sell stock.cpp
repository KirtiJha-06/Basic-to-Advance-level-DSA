TC: O(n)
SC :O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int mini = prices[0], res=0;
        for(int i =0 ; i< prices.size(); i++){
            mini = min(mini, prices[i]);
        
        res = max(res , prices[i]-mini);
        }
        return res;
    }
};
