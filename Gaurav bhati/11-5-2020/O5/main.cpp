#include <iostream>

using namespace std;

int main()
{
    int a,countx=0,odd=1;
    cout<<"Enter the no. ";
    cin>>a;
    while(a>=odd){
        cout<<a<<"-"<<odd<<"\t"<<a-odd;
        a=a-odd;
        odd=odd+2;
        countx++;
        cout<<"\t"<<countx<<endl;
    }
    cout<<"\nThe square root is "<<countx;
    return 0;
}
