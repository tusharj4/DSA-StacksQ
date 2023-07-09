/*
Question Link --> "https://leetcode.com/problems/evaluate-reverse-polish-notation/"
Question --> "Reverse Polish Notation"
LEETCODE No. -> 150
*/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string i:tokens)
        {
            if(i=="+"||i=="-"||i=="/"||i=="*")
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                if(i=="+")
                    s.push(a+b);
                else if(i=="-")
                    s.push(b-a);
                else if(i=="*")
                    s.push(a*b);
                else if(i=="/")
                    s.push(b/a);
            }
            else 
            {
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};