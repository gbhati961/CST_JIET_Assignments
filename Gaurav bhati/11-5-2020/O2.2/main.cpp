#include <iostream>

using namespace std;

int main()
{
    int n,odd=0;
    cout<<"Enter the no. of element";
    cin>>n;
    int a[n];
    cout<<"Enter the element";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            odd++;
        }
    }
    if(odd%2==0){
        cout<<"Minimum XOR is 0";
    }
    else{
        cout<<"Minimum XOR is 1";
    }

    return 0;
}
