class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int,int>> vehicle;
        for(int i = 0; i < n; i++) {
            vehicle.push_back({position[i], speed[i]});
        }

        sort(vehicle.begin(), vehicle.end());

        stack<pair<int,int>> stk;
        for(auto &v : vehicle){
            stk.push(v);
        }

        double mint = (double)(target - stk.top().first) / stk.top().second;
        int answer = 1;
        stk.pop();

        while(!stk.empty()){
            double curt = (double)(target - stk.top().first) / stk.top().second;

            if(curt <= mint){
                stk.pop();
            }

            else{
                mint = curt;
                answer++;
                stk.pop();
            }
        }

        return answer;
    }
};