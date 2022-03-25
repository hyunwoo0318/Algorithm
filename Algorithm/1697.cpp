//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//vector<int> v[200003] = {};
//bool visited[200003];
//int cnt = 1;
//int k;
//queue<int> q;
//
//int Find(int n)
//{
//	visited[n] = true;
//	
//	for (int i = 0; i < v[n].size(); i++)
//	{
//		q.push(v[n][i]);
//	}
//	
//	while (!q.empty())
//	{
//		int qs = q.size();
//		for (int i = 0; i < qs; i++)
//		{
//			int temp = q.front();
//			q.pop();
//			if (temp == k)
//			{
//				return cnt;
//			}
//				
//			if (visited[temp] == false)
//			{
//				visited[temp] = true;
//				for (int j = 0; j < v[temp].size(); j++)
//				{
//					q.push(v[temp][j]);
//				}
//			}
//			
//		}
//		cnt++;
//	}
//}
//
//
//void makeGraph(int a, int b)
//{
//	v[a].push_back(b);	
//}
//
//int main()
//{
//	int n;
//	cin >> n >> k;
//
//	for (int i = 0; i <= 100000; i++)
//	{
//		
//		if (i >= 1)
//		{
//			makeGraph(i, i - 1);
//			makeGraph(i, i + 1);
//			makeGraph(i, i * 2);
//		}
//		else if (i == 0)
//		{
//			makeGraph(i, i + 1);
//		}
//			
//		
//	}
//
//	if (n == k)
//		cout << 0;
//	else
//		cout << Find(n);
//}
//
