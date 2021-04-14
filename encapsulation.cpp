#include<iostream>
using namespace std;
class A
{
    public:
        int a;
        void funcA()
        {
            cout<<"\nFunc. A";
        }
    private:
        int b;
        void funcB()
        {
            cout<<"\nFunc. B";
        }
    protected:
        int c;
        void funcC()
        {
            cout<<"\nFunc. C";
        }    
};
int main()
{
    A obj;

    obj.funcA();
    //obj.funcB();//error
    //obj.funcC();//error
    obj.a=2;
    cout<<obj.a;
    return 0;
}