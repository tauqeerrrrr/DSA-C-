#include<iostream>
using namespace std;
class demo
{ int x;
int y;
static int z;
public:
static int fun()
{
cout<<z+10<<endl;
}
void getdata(int x, int y)
{
    this->x=x;
    this->y=y;
    z=z+8;
}
void putdata()
{
    cout<<x<<endl<<y<<endl<<z<<endl;
}

};
int demo::z;
int main()
{
    demo aa;
    aa.getdata(34,56);
    aa.putdata();
    // demo::fun();
}