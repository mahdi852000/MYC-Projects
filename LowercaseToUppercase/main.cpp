#include <iostream>

using namespace std;

int main()
{
    char s[200];
    char desire;
    cin.getline(s,201);
    cout<<"please enter the desire Char : "<<endl;
    cin>>desire;
    for (int i=0; s[i]; i++){
        if (s[i]==desire)
        {
            s[i]-=32;
        }
    }
    cout<<s;
    return 0;
}
