#include<iostream>
#include<vector>
#include<algorithm>
#define INF 2000000000

#define MAX 1e10
using namespace std;

vector<int> v;
int n, k;

int main()
{ 
	cin >> n >> k;
	v.push_back(0);
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			v.push_back(i * j);
		}
	}

	sort(v.begin(), v.end());
 
}