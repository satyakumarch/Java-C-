#include<iostream>
using namespace std;
class Base{
    protected:
    int data;
    public:
    Base(int val=0):data(val){}
    int getData(void) const {return data;}

};
class Derived:public Base{
    public:
    void changeData(int val)
    {
        cout<<"Change of derived data from:"<<data<<"->"<<val<<endl;
        data=val;
            }
};

int main(){
    Base b;
    Derived d;
    d.changeData(20);
    cout<<"Base class Data :  "<<b.getData()<<endl;
    cout<<"Derived classs Data : "<<d.getData()<<endl;

}