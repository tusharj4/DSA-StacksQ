/*
Question Link ---> "https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/description/"
Topic --> Stacks 
Method number 2 with T.C.:O(n)
LEETCODE 1003
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch:s)
        {
            if(ch=='a')
                st.push(ch);
            else if(ch=='b')
            {
                if(!st.empty() && st.top()=='a')
                {
                    st.push(ch);
                }
                else
                {
                    return false;
                }
            }
            else
            {
                //ch=='c'
                if(!st.empty() && st.top()=='b')
                {
                    st.pop();
                    if(!s.empty() && st.top()=='a')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};