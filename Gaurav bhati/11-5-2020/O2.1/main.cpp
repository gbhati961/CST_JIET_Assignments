#include <iostream>

using namespace std;

int main()
{
    int n,min1,min2;
    cout<<"Enter the no. of element";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    min1=a[0];
    min2=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min1){
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2 && a[i]!=min1){
            min2=a[i];
            }
    }
    cout<<"The pair with minimum XOR is "<<min1<<" "<<min2;
    return 0;
}
