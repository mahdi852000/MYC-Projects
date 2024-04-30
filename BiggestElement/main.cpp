#include <iostream>

using namespace std;

int main()
{
    const int n = 8;
    float arr[n]={440,10.5,13.75,450.4,12};
    int arrSize = sizeof(arr)/sizeof arr[0];
    cout<<"{";
    for (int j=0; j<arrSize; j++){
        cout<<arr[j];
        if (j<arrSize-1){
            cout<<",";
        }
    }
    cout<<"}"<<endl;
    float Max=arr[0];
    for (int i=0; i<n; i++){
        if (Max<arr[i]){
            Max = arr[i];
        }
    }
    cout<<"New Max : "<<Max;
    return 0;
}
