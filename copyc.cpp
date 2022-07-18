#include <iostream>
#include <string>
using namespace std;
class error
{
    int a;
    int b;

public:
    error()
    {
        a = 0;
        b = 0;
    }
    void getdata(int, int);
    void add();
    void sum();
    void mul();
    void div();
};
void error::getdata(int a, int b)
{
    this->a = a;
    this->b = b;
}

void error::add()
{
    cout << a + b << endl;
}

void error::sum()
{
    cout << a - b << endl;
}

void error::mul()
{
    cout << a * b << endl;
}

void error::div()
{
    try
    {
        if (b == 0)
        {
            throw "error on b(b=0)";
        }
        else
        {
            cout << a / b << endl;
        }
    }
    catch (const char *e)
    {
        cout << e << '\n';
    }
}
int main()
{
    error e;
    int ch;
    int x, y;
    char ans='y';

    while (ans != 'n')
    {
        cout << "*******MENU********" << endl;
        cout << "1 .enter data" << endl;
        cout << "2 . add" << endl;
        cout << "3 . sum" << endl;
        cout << "4 . mul" << endl;
        cout << "5 . div" << endl;
        cout << "enter your choice :";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter 2 number :" << endl;
            cin >> x >> y;
            e.getdata(x, y);
            break;
        case 2:
            e.add();
            break;
        case 3:
            e.sum();
            break;
        case 4:
            e.mul();
            break;
        case 5:
            e.div();
            break;
        default:
            cout << "enter correct choice:";
        }
        cout << endl;
        cout << "want to continue  1 or 0 :";
        cin >> ans;
        // if (ans == 'n')
        // {
        //     break;
        // }
    } 
    return 0;
}