# include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,count=0;
	cin >> n;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin >>  arr[i];
	}

	sort(arr,arr+n);

	for(int i=0;i<n;i++)
	{
		// cout << arr[i];
		if(arr[i]==arr[i+1])
		{
			cout << arr[i] << arr[i+1] << endl;
			i=i+1;
			count++;
		}
	}

	cout << count;

}