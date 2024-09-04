#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    if(isdigit(ch))
        cout<<ch <<" is digit";
    else if(isalpha(ch))
    {
         if((ch=='A') ||(ch=='E') ||(ch=='I') ||(ch=='O') ||(ch=='U') ||(ch=='a') ||(ch=='e') ||(ch=='i') ||(ch=='0') ||(ch=='u'))
         cout<<"The character  " <<ch<< " is vowel";
         else
         
            cout<<"The character " <<ch<< " consonant";
        
    }
    else{
           cout<<"The character " <<ch<< " is Special Character";

    }
 
    
   
}