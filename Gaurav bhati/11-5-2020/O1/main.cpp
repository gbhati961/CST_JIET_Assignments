#include <iostream>

using namespace std;

int main()
{
    int n,x=0;
    cout<<"Enter the size of array";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        x=x^a[i];
    }
    cout<<"\nSingle no. is : "<<x;

    return 0;
}
