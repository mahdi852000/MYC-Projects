#include <iostream>

using namespace std;

int main()
{   int num;
    cout<<"please enter an integer: "<<endl;
    cin>>num;

    switch (num)
    {
        case 1:
            cout<<"ali";
            break;
        case 3:
            cout<<"+++++";
            break;
        case 5:
            cout<<"darsman";
            break;
        case 20:
            cout<<"error";
            break;
        default :
            cout<<"ali dohezar";
    }
    return 0;
}
