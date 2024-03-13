#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,20,30,40,50,60};
    int i=0,j=0;
    int sum=0;
    int k=3;
    while(j<6)
    {
        sum=sum+arr[j];
        if(j-i+1<k)
        {
            
            j++;


        }
        else if(j-i+1==k)
        {
             cout<<"Sum of numbers:"<<sum<<endl;

             sum=sum-arr[i];
             i++;
             j++;
             


             
        }
           
    }
    
    return 0;


}