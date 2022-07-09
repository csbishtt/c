#include <iostream>
using namespace std;
typedef struct stack
{
    int data;
    struct stack *next;
} st;
st *push(st *top)
{
    st *temp = NULL;
    temp=(st *)malloc(sizeof(st *));
    if (temp == NULL)
    {
        cout << "overflow" << endl;
    }
    else
    {
        cout << "enter numbers" << endl;
        cin >> temp->data;
        temp->next = NULL;
        if (top == NULL)
        {
            top = temp;
            cout << "no insert";
        }
        else
        {
            temp->next = top;
            top = temp;
            cout << "no is inserted";
        }
    }
    return top;
}

st *pop(st *top)
{
    int v;
    if (top == NULL)
    {
        cout << "underflow" << endl;
    }
    else
    {
        v = top->data;
        cout<<top->data<<" is deleted";
        top = top->next;
    }
    return top;
}
void display(st *top)
{
    st *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << "->" << endl;
        temp = temp->next;
    }
}

int main()
{
    st *top = NULL;
    int choice;
m:
    cout << "\n\n\n\t\t*****menu*****" << endl;
    cout << "press 1 for insert " << endl;
    cout << "press 2 for delete " << endl;
    cout << "press 3 for display " << endl;
    cout << "press 4 for exit " << endl;
    cout << "enter your choice : " << endl;
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:

        top = push(top);
        break;

    case 2:
        top = pop(top);
        break;
    case 3:
        display(top);
        break;
    case 4:
        exit(0);
        break;
    default:
        cout << "enter correct choice";
    }
    goto m;

    return 0;
}