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

	//������ �������� �ǹ̰� ���⶧���� ���� ������� �ϴ°� �ߺ��� ������ �ʴ´�
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
