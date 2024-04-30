#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    char s1[200];
    cin.getline(s1,201);
    int counter = strlen(s1);
    cout<<counter<<endl;
    char s2[100];
    strcpy(s2,"Mahdi");
    cout<<s2<<endl;
    strcpy(s1,s2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}
