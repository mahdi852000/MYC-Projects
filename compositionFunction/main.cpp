#include <iostream>
int fact(int num);
double combination (int n, int r);

using namespace std;

int main()
{
    cout<<combination(6,2);
    return 0;
}
///////////////////////////////////////////////////////
int fact(int num){
    int factorial=1;
    for (int i=1; i<=num; i++){
        factorial*=i;
    }
     return factorial;
}

///////////////////////////////////////////////////////
double combination (int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}
///////////////////////////////////////////////////////

