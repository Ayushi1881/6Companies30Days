
class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<long> st;
        for(int i=0;i<token.size();i++){
            
            if(token[i]=="+"){
                long a=st.top();
                st.pop();
                long b=st.top();
                st.pop();
                st.push(a+b);
            }
            else if(token[i]=="-"){
                long a=st.top();
                st.pop();
                long b=st.top();
                st.pop();
                st.push(b-a);
            }
            else if(token[i]=="*"){
                long a=st.top();
                st.pop();
                long b=st.top();
                st.pop();
                st.push(b*a);
            }
            else if(token[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b/a);
            }
            else{
                long x= stol(token[i]);
                st.push(x);
            }
        }
        return st.top();;
    }
};
