#include <iostream>

using namespace std;

int main()
{
    int m [2][5];
    cout<<"please enter your numbers : "<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<5;j++){
            cin>>m[i][j];
        }
    }
     for (int i=0; i<2; i++){
        for (int j=0; j<5;j++){
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
