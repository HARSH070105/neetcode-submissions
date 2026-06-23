class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('#');
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }
            else{
                if((ch==')'&&st.top()=='(')||(ch=='}'&&st.top()=='{')||(ch==']'&&st.top()=='[')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return (st.top()=='#');
    }
};
