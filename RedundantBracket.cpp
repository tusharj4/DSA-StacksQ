//Question link->"https://www.codingninjas.com/studio/problems/redundant-brackets_975473?leftPanelTab=0"
//Question->Redundant brackets
//Platforms present on->Interview bit
//Companies asked in -> Uber, Adobe
#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        //if the character is a operator or a opening bracket->we push it onto the stack
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            st.push(ch);
        }
        //closing bracket->we check whether there is operator or not, and if so then we 
        //mark the operator flag as true and pop it and then pop the opening bracket
        //although if it is false we make the flag as false and return false
        else
        {
            if(ch==')')
            {
                bool op=false;
                //check if the top is a operator or not and stack is not empty
                while(!st.empty() && st.top()!='(')
                {
                    //check if one of the four operators or not
                    if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/')
                    {
                        op=true;
                        st.pop();
                    }
                    // else{
                    //     return false;
                    // }
                }
                //pop the remaining opening bracket
                if(!st.empty())
                {
                    st.pop();
                }
                //if there is not operator present in the b/w the brackets return true that 
                //it is a redundant brackets element 
                if(op==false)
                    return true;
            }
        }
    }
    return false;
}
