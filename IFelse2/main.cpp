#include <iostream>

using namespace std;

int main()
{
   int num1, num2, sum, mul,  sub;
   float div;


    cout<<"please enter number 1: "<<endl;
    cin>>num1;
    cout<<"please enter number 2: "<<endl;
    cin>>num2;

   sum = num1 + num2;
   mul = num1 * num2;
   div = (float)num1 / num2;
   sub = num1 - num2;
    cout<< "sum is : " <<sum << endl;
    cout<< "mul is : " <<mul << endl;
    cout<< "div is : " <<div << endl;
    cout<< "sub is : " <<sub << endl;

    return 0;
}

