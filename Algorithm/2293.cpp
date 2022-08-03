#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[10002] = {};

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> v;
	int a;

	for (int i = 0; i < n; i++)
	{		
		cin >> a;
		v.push_back(a);	
	}

	sort(v.begin(), v.end());
	int big = v[n - 1];
	arr[0] = 1;

	//동전의 사용순서는 의미가 없기때문에 동전 순서대로 하는게 중복을 만들지 않는다
	for (int j = 0; j < v.size(); j++)
	{
		for(int i=0;i<=k;i++)
		{
			if(i + v[j] <= k)
			arr[i + v[j]] += arr[i];
		}
	}

	cout << arr[k];
}
