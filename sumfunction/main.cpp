#include <iostream>

using namespace std;

int sum (int num1, int num2){

    int temp= num1+num2;
    return temp;
}
/////////////////////////////////////
double Mul(int num1, int num2, double num3){
    double temp = num1*num2*num3;
    cout<<temp;
}
/////////////////////////////////////

int main()
{
    Mul(1,1,5.2);
    cout<<endl;
    cout<<sum(4,3)<<endl;
    return 0;
}
