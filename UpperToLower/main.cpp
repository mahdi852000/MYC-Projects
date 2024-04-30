#include <iostream>

using namespace std;

int main()
{
    char s[200];
    char desire;
    cin.getline(s,201);

    for (int i=0; s[i]; i++){
        if (s[i]>= 'A' && s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    cout<<s;
    return 0;
}


