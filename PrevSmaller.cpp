//Previous Smaller element
vector<int> prevSmaller(vector<int>& arr, int n)
{
    vector<int> a(n);
    stack<int> s;
    s.push(-1);
    for(int i=0;i<=n-1;i++)
    {
        int curr=arr[i];
        if(s.top()>=curr)
        {
            s.pop();
        }
        a[i]=s.top();
        s.push(curr);
    }
    return a;
}