/*
Question Link --> "https://www.codingninjas.com/studio/problems/next-smaller-element_1112581?leftPanelTab=0"
Question --> Next Smaller Element
*/
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> ans(n);
    stack<int> s(n);
    s.push(-1);
    for(int i=n-1;i>=0;i--)
    {
        int curr=arr[i];
        //agar bada element hai toh pop kardo 
        while(s.top()>=curr)
        {
            s.pop();
        }
        //agar chota element hai toh ham phele uska chota element store karenge
        ans[i]=s.top();
        //fir ham usko push karenge onto the stack
        s.push(curr);
    }
    return ans;
}