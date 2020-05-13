#include<iostream>

using namespace std;
int main()
{

    cout<<"Enter dimension";
	int n,m;
	cin>>n>>m;

	int a[n][m];
	cout<<"Enter elements";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int arr[m]={0};

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1)
			{
				arr[j]=arr[j]+1;
			}
		}
	}
	int k=0;
	for(int i=0;i<m;i++)
	{
		if(arr[i]%2!=0)
		{
			k++;
		}
	}

	cout<<"No. of column "<<k;



	return 0;
}
