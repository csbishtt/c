#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string ch;
    getline(cin,ch);
    fstream cget;
    cget.open("sample.txt", ios::app);
    if (!cget)
    {
        cout << "File creation failed";
    }
    else
    {
        cget << "goes to file" << endl;
        cget.close();
    }

    fstream pget;
    cget.open("sample.txt", ios::in);
    if (!pget)
    {
        cout << "No such file";
    }
    else
    {
        while (getline(cget, ch))
        {
            cout << ch << endl;
        }
        pget.close();
    }
    return 0;
}
