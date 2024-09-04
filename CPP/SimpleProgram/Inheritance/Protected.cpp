#include<iostream>
using namespace std;
class Base{
    private:
    int i;
    protected:
    int j;
    public:
    int k;
    Base(int ii=0,int jj=1,int kk=2):i(ii),j(jj),k(kk){}
    void printData(){
        cout<<"i (private)="<<i<<endl
        <<"j protected ="<<j<<endl
        <<"k public ="<<k<<endl;
    }
};
class Derived:public Base{
    public:
    void changeData(void)
    {
        j++;
        k++;
    }
};
int main()
{
Derived d;
cout<<"Before changing"<<endl;
d.printData();
cout<<"After changing"<<endl;
d.printData();
}


