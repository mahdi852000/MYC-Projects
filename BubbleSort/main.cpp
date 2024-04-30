#include <iostream>

using namespace std;

int main()
{
    const int n = 10;
    int arr [n] = {34,56,324,57,89,237,78,67,10,29};

    for (int i=0; i<n; i++){
        cout<<arr[i]<<"\t";

    }
    cout<<endl;
    for (int i=n-1 ;  i>=1 ; i--){
        for (int j=0; j<n; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0; i<n; i++){
        cout<< arr[i]<<"\t";
    }

    return 0;
}
