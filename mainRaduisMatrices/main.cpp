#include <iostream>

using namespace std;

int main()
{
    int m [4][4];
    cout<<"please enter your numbers : "<<endl;
    for (int i=0; i<4; i++){
        for (int j=0; j<4;j++){
            cin>>m[i][j];
        }
    }
     for (int i=0; i<4; i++){
        for (int j=0; j<4;j++){
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
    int sum=0;
    for (int i=0; i<4; i++){
        for (int j=0; j<4;j++){
            if (i==j){
                sum+=m[i][j];
            }
        }
        cout<<endl;
    } cout<<sum;

    return 0;
}

