#include <iostream>

using namespace std;

int main()
{
    float avg;
    cout<<"please enter the avg : "<<endl;
    cin>>avg;
    if ( 0 <= avg  && avg < 12)
    {
        cout<<"zaeif!"<<endl;
    }
    else if (12 <= avg && avg < 16)
    {
        cout<<"motevaset"<<endl;
    }
    else if  (16<= avg && avg <=20)
    {

        cout<<"Alie!"<<endl;
    }


    return 0;
}
