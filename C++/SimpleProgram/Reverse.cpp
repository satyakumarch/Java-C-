


//////////using  While loop//////////////////4
// #include<iostream>
// using namespace std;
// int main(){
//     int temp,num,rev=0;
//     cout<<"Enter the number:";
//     cin>>num;
//     temp=num;
//     while (temp!=0)
//     {
//         int r=temp%10;
//         rev=rev*10+r;
//         temp/=10;
//     }
//     cout<<"The reverse of the number "<<num<<" is :"<<rev;
    
// }

///////////////using for loop//////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int num,rev=0;
//     cout<<"Enter the number:";
//     cin>>num;

//     for(int temp=num;temp!=0;temp/=10)
//     {
//         int r=temp%10;
//         rev=rev*10+r;

//     }
//     cout<<"The reverse of the number "<<num<<" is "<<rev;
// }

///////////////////////////using recursion function //////////////////////////
#include<iostream>
using namespace std;
int reverse(int num)
{
    int rev=0;
    while (num!=0)
    {
        int r=num%10;
        rev=rev*10+r;
        num/=10;
    }
    return rev;    
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Reverse of the number is : "<<reverse(num);
}