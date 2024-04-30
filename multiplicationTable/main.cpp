#include <iostream>

using namespace std;
void multiplicationTable(){
        for (int i=1; i<=10; i++){
            for (int j=1; j<=10; j++){
                cout<<i*j<<"\t";
            }
            cout<<endl;
        }
    }

int main()
{
    multiplicationTable();
    return 0;
}
