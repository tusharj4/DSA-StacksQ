#include <iostream>
#include <stack>
using namespace std;
void getMiddle(stack<int> &st,int totalsize)
{
    if(st.size()==0)
    {
        cout<<"The stack is empty"<<endl;
        return;
    }
    //base case
    if(st.size()==totalsize/2+1)
    {
        cout<<"the middle element of the stack is : "<<st.top()<<endl;
        return;
    }
    //operations to be performed on the stack
    int temp=st.top();
    st.pop();
    //recursive call
    getMiddle(st,totalsize);
    //reverse operations to push back onto the stack
    //so as to maintain the original stack
    st.push(temp);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    int totalsize=st.size();
    getMiddle(st,totalsize);
}