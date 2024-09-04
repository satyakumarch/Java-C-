#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,sum=0,pro=1;
    cout<<"Enter the number :";
    cin>>n;

    cout<<"Enter  Element : ";
    for(int i=0;i<n;i++)
    
        cin>>arr[i];
    
    for(int i=0;i<n;i++)
    {
       sum+=arr[i];
       pro*=arr[i];
 
    }
    cout<<"sum : "<<sum<<endl;
    cout<<"pro : "<<pro;
    
}