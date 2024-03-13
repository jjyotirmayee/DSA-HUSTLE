
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int>st;
    int i;
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        if(st.size()==0)
        {
            cout<<-1<<endl;
            st.push(a[i]);
        }
        else
        {
            if(st.top()>a[i])
            {
                cout<<st.top()<<endl;
                st.push(a[i]);
            }
            else
            {
                while(st.top()<=a[i])
                {
                    st.pop();
                    
                }
                if(st.size()==0)
                {
                    cout<<-1<<endl;
                    st.push(a[i]);
                }
                else
                {
                    cout<<st.top()<<endl;
                    st.push(a[i]);
                }
            }
        }
    }
    return 0;
    
}