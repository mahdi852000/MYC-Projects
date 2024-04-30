#include <iostream>
int fact(int num);
double combination (int n, int r);
void pascalTriangle(int);
using namespace std;


int main()
{
    int row;
    cout<<"Enter row : "<<endl;
    cin>>row;
    pascalTriangle(row);
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

void pascalTriangle(int n){
    for (int i=0; i<=n; i++){
        for (int j=0; j<=i; j++){
        cout<<combination(i,j)<<"\t";
    }
    cout<<endl;
}
}

