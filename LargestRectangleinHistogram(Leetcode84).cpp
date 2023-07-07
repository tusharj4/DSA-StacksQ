/*
Question Link ---> "https://leetcode.com/problems/largest-rectangle-in-histogram/description/"
Companies asked in ---> Microsoft, Google, Apple, Amazon, Zomato, Goldman Sachs, IBM
VERY IMPORTANT QUESTION
*/
class Solution {
public:
vector<int> nextSmallerElement(vector<int> &arr)
    {
    // Write your code here.
        int n=arr.size();
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            int curr=arr[i];
            //agar bada element hai toh pop kardo 
            while(s.top()!=-1 && arr[s.top()]>=curr)
            {
                s.pop();
            }
            //agar chota element hai toh ham phele uska chota element store karenge
            ans[i]=s.top();
            //fir ham usko push karenge onto the stack
            s.push(i);
        }
        return ans;
    }
    vector<int> prevSmaller(vector<int>& arr)
    {
        int n=arr.size();
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);
        for(int i=0;i<n;i++)
        {
            int curr=arr[i];
            while(s.top()!=-1 && arr[s.top()]>=curr)
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int size=heights.size();
        vector<int> prev=prevSmaller(heights);
        vector<int> next=nextSmallerElement(heights);
        int maxA=INT_MIN;
        // int size=heights.size();
        int area,len,wid;
        for(int i=0;i<=heights.size()-1;i++)
        {
            if(next[i]==-1)
                next[i]=size;
            len=heights[i];
            wid=next[i]-prev[i]-1;
            area=len*wid;
            // cout<<maxA<<endl;
            maxA=max(maxA,area);
        }
        // cout<<maxA;
        return maxA;
    }
};