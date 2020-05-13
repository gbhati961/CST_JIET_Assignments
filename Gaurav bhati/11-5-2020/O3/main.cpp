#include <iostream>

using namespace std;

int main()
{
    int a,countx=0;
    cout<<"Enter the no. ";
    cin>>a;
    for(int i=0;a>=i;i++){
        a=a-i;
        countx++;
    }
    cout<<"\nMaximum height of staircase is "<<countx-1;
    return 0;
}
