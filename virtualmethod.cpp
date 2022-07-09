#include <iostream>
using namespace std;
class c1
{
public:

    virtual void add()
    {
        cout<<"c1 add"<<endl;
    }
};

class c2:public c1
{
public:

    void add()
    {
        cout<<"c2 add"<<endl;
    }
};
int main()
{
c2 *obj;
c1 q;

obj=&q;
obj->add();
    return 0;
}