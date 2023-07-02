//Question link->https://leetcode.com/problems/reverse-string/description/
//Topic->Stacks,Vectors
//Question number(On leetcode)->344
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> ch;
        int i=0;
        int n=s.size();
        while(i<n)
        {
            char c=s[i];
            ch.push(c);
            i++;
        }
        s.clear();
        while(!ch.empty())
        {
            // cout<<ch.top();
            char c=ch.top();
            s.push_back(c);
            ch.pop();
        }
    }
};
