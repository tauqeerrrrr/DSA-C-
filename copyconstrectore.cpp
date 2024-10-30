#include<iostream>
using namespace std;
class student
{ int age;
int rol;
public:
student(){}
student(int age, int rol)
{
    this->age=age;
    this->rol=rol;
cout<< age<<"  "<<rol<<endl;
}
student(student &sd)
{
   cout<<sd.age<<" "<<sd.rol<<endl; 
}


};
int main()
{ student ob(56,78);
student sd=ob;




}