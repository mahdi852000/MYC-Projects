#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;

    if (9 <num && num<100) {

        int a = num%10;
    int b = num/10;
    int sum = a + b;
    cout<<"sum is :" << sum;
    }
    else {
        cout<<"error";
    }

    getch();
    return 0;
}
