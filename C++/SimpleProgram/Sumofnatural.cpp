#include<iostream>
using namespace std;
int main(){
    int val,num,sum=0;
    
    cout<<"Enter the number:";
    cin>>val;
    num=val;
    while (num!=0)
    {
        /* code */
        sum=sum+num%10;
        num=num/10;
    }
    cout<<"The sum  is:"<<sum;
    return 0;
    
}