/*
Question LINK -> "https://leetcode.com/problems/generate-parentheses/"
QUESTION -> Generate Parenthesis
COMPANIES ASKED IN --> "Microsoft, Apple, Amazon, Nykaa, Meta, Cisco"
*/
class Solution {
public:
    void func(vector<string>& ans, int n, int open, int close, string str)
    {
        //Base case
        if(str.size()==n*2)
        {
            ans.push_back(str);
            return;
        }
        if(open<n)
            func(ans,n,open+1,close,str+"(");
        if(close<open)
            func(ans,n,open,close+1,str+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func(ans,n,0,0,"");
        return ans;
    }
};