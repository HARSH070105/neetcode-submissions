class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int answer=0;
        stack<int> ans;
        for (string ch : tokens){
            if(ch!="+"&&ch!="-"&&ch!="*"&&ch!="/"){
                ans.push(stoi(ch));
            }
            else if(ch=="+"){
                int i = ans.top();
                ans.pop();
                int j = ans.top();
                ans.pop();
                ans.push(i+j);
            }
            else if(ch=="-"){
                int i = ans.top();
                ans.pop();
                int j = ans.top();
                ans.pop();
                ans.push(j-i);
            }
            else if(ch=="*"){
                int i = ans.top();
                ans.pop();
                int j = ans.top();
                ans.pop();
                ans.push(i*j);
            }
            else if(ch=="/"){
                int i = ans.top();
                ans.pop();
                int j = ans.top();
                ans.pop();
                ans.push(j/i);
            }
        }
        return ans.top();
    }
};
