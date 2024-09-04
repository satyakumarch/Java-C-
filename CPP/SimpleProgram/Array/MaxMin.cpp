#include<iostream>
using namespace std;
 int main()
 {
    int arr[10],max,min;
    int n;
    cout<<"Enter the number:";
    cin>>n;
   
    cout<<"Enter the "<<n<<" number of element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];

    }
    cout<<"largest number is : "<<max<<endl;
    cout<<"smallest number is : "<<min;

    

 }