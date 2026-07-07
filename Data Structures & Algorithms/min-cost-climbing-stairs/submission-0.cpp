class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()<2){
            return cost[0];
        }
        if(cost.size()==2){
            return (min(cost[0],cost[1]));
        }
        int n = cost.size();
        cost.push_back(0);
        for (int i=2;i<=n;i++){
            cost[i] = cost[i]+min(cost[i-1],cost[i-2]);
        }
        return cost[n];
    }
};
