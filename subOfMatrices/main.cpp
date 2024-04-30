#include <iostream>

using namespace std;

int main()
{
    int a[3][4],b[3][4],c[3][4];

    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            cout<<"Enter A["<<i<<"] : "<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"------------------------------------------------";

    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            cout<<"Enter B["<<i<<"] : "<<endl;
            cin>>b[i][j];
        }
    }

    cout<<"------------------------------------------------";

     for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            c[i][j]=a[i][j]+b[i][j]<<endl;
        }
    }

    cout<<"------------------------------------------------";

    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            cout<<c[i][j]<<"\t";
        }
    }
    return 0;
}
