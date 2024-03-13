#include<iostream>
#include<stack>
using namespace std;
 


 int main()
 {
    //creation of stack
    stack<int>st;
    //push operation
    st.push(2);
     st.push(3);
     //pop operation
     st.pop();
     cout<<"Printing top element"<<""<<st.top()<<endl;
     if(st.empty())
     {
        cout<<"Stack is empty"<<endl;
     }
     else
     {
        cout<<"Stack is not empty"<<endl;

     }
      cout<<"size of stack"<<""<<st.size()<<endl;

     
     return 0;
 }