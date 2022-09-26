#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int>v[10001];
int deg[10001] = {};
int t[10001] = {};
vector<int> v2[10001];

int n;

int topo()
{
	int ans = -1;
	queue<int> q;
	for (int i = 1; i <= n; i++)
	{
		if (deg[i] == 0)
			q.push(i);
	}

	while (!q.empty())
	{		
		int qs = q.size();
		for (int i = 0; i < qs; i++)
		{
			int x = q.front();
			q.pop();
			int maxT = -1;
			for (int j = 0; j < v2[x].size(); j++)
			{
				int val = v2[x][j];
				if (t[val] > maxT)
					maxT = t[val];
			}
			if(maxT != -1)
				t[x] += maxT;
			if (t[x] > ans)
				ans = t[x];
			
			for (int j = 0; j < v[x].size(); j++)
			{
				deg[v[x][j]]--;
				if (deg[v[x][j]] == 0)
					q.push(v[x][j]);
			}			
		}
	}
	return ans;
}

int main()
{	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int i1,i2;
		cin >> i1 >> i2;
		t[i] = i1;

		for (int j = 0; j < i2; j++)
		{
			int a;
			cin >> a;
			v[a].push_back(i);
			deg[i]++;
			v2[i].push_back(a);
		}
	}
	cout << topo();
}