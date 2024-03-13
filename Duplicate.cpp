#include<iostream>
#include<stack>
using namespace std;
 
 int main()
 {
    stack<char>st;
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.size();i++)
    {
        char c = s[i];
        if(s[i]!=')')
        {
            st.push(s[i]);


        }
        else if(s[i]==')')
        {
            int chr=0;
            while(st.top()!='(')
            {
                st.pop();
                chr=chr+1;
            }
            cout<<chr<<endl;
            st.pop();
            if(chr==0)
            {
                cout<<"The expression is Duplicate"<<endl;
                break;
            }
            else
            {
                 cout<<"The expression is not Duplicate"<<endl;
                
            }




        }

    }
    return 0;
    
 }