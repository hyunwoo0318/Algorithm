//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//vector<vector<int> > v1(800, vector<int>(800,0));
//vector<int> v2[800];
//bool visit[800];
//int area = 0;
//
//void makeGraph(int a, int b)
//{
//	v2[a].push_back(b);
//	v2[b].push_back(a);
//}
//
//void DFS(int n)
//{
//	visit[n] = true;
//	area++;
//
//	for (int i = 0; i < v2[n].size(); i++)
//	{
//		if (visit[v2[n][i]] == false)
//		{
//			DFS(v2[n][i]);			
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//		
//	vector<int> res;
//	string s;
//	int cnt = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> s;
//		for (int j = 1; j <= n; j++)
//		{
//			v1[i][j] = s[j-1] - '0';
//		}
//	}
//
//	int temp = 1;
//	for (int i = 0; i <= n; i++)
//	{
//		for (int j = 0; j <= n; j++)
//		{
//			if (v1[i][j] == 1)
//			{
//				v1[i][j] = temp;
//				temp++;
//			}			
//		}
//	}
//
//	for (int i = 1; i <=n; i++)
//	{
//		for (int j = 1; j <=n; j++)
//		{
//			if (v1[i][j] != 0)
//			{
//				
//				if (v1[i][j - 1] != 0)
//				{
//					makeGraph(v1[i][j], v1[i][j - 1]);
//				}
//				if (v1[i][j + 1] != 0)
//				{
//					makeGraph(v1[i][j], v1[i][j + 1]);
//				}if (v1[i - 1][j] != 0)
//				{
//					makeGraph(v1[i][j], v1[i - 1][j]);
//				}if (v1[i + 1][j] != 0)
//				{
//					makeGraph(v1[i][j], v1[i + 1][j]);
//				}
//				v1[i][j] = 0;
//			}
//
//		}
//	}
//
//	for (int i = 1; i < temp; i++)
//	{
//		area = 0;
//		if (visit[i] == false)
//		{
//			DFS(i);
//			res.push_back(area);
//		}
//		
//	}
//	cout << res.size() << endl;
//	sort(res.begin(), res.end());
//	for (int i = 0; i < res.size(); i++)
//		cout << res[i] << endl;
//}