#include<bits/stdc++.h>
using namespace std;

class seat
{
	public:
	int at;
	int dt;
};

int main()
{
	int n;
	cin>>n;
	seat chair[n];
	for(int i=0;i<n;i++)
	{
		cin>>chair[i].at;
	}
	for(int i=0;i<n;i++)
	{
		cin>>chair[i].dt;
	}
	
	int arr[2400];
	for(int i=0;i<2400;i++)
	{
		arr[i]=0;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=chair[i].at ; j<=chair[i].dt;j++)
		{
			arr[j]++;
		}
	}
	int max=0;
	for(int i=0;i<2400;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<max;
	return 0;
}
