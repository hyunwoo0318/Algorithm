//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//#include<queue>
//#include<vector>
//
//using namespace std;
//vector<int> v[20001];
//int visited[20001];
//int arr[20001] = {};
//queue<int> q;
//int n, k;
// // 테케의 개수가 2개 이상이므로 무조건 초기화 과정을 거쳐야한다.
//
//bool find()
//{
//	int ad;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j =1 ; j < v[i].size(); j++)
//		{
//			ad = arr[v[i][0]];
//			if (ad != arr[v[i][j]])
//				return false;
//		}
//	}
//	return true;
//}
//
//bool Bipartite(int n)
//{
//	int cnt = 0;
//	visited[n] = 1;
//	arr[n] = -1;
//	for(int i=0;i<v[n].size();i++)
//	q.push(v[n][i]);
//
//	while (!q.empty())
//	{
//		int qs = q.size();
//		for (int i = 0; i < qs; i++)
//		{
//			
//			int temp = q.front();			
//			q.pop();
//			if (visited[temp] != 1)
//			{
//				visited[temp] = 1;
//				for (int j = 0; j < v[temp].size(); j++)
//				{
//					q.push(v[temp][j]);
//				}
//
//				if (cnt % 2 == 0 && arr[temp] == 0)
//				{
//					arr[temp] = 1;
//				}
//
//				else if (cnt % 2 == 1 && arr[temp] == 0)
//					arr[temp] = -1;
//			}
//						
//				
//		}
//		cnt++;
//	}
//	if (find() == false)
//		return false;
//	return true;
//}
//
//void makeGraph(int a, int b)
//{
//	v[b].push_back(a);
//	v[a].push_back(b);
//}
//
//void clear()
//{
//	
//	for (int i = 0; i < 20001; i++)
//	{
//		v[i].clear();
//		arr[i] = 0;
//		visited[i] = 0;
//	}
//}
//
//
//
//int main()
//{
//	int N;
//	cin >> N;
//	bool success = false;
//	while (N--)
//	{
//		
//		scanf("%d", &n);
//		scanf("%d", &k);
//		for (int i = 0; i < k; i++)
//		{
//			int a, b;
//			scanf("%d", &a);
//			scanf("%d", &b);
//			makeGraph(a, b);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			if (arr[i] == 0)
//			{
//				if (Bipartite(i) == true)
//				{					
//					success = true;
//					continue;
//				}
//					
//				else
//				{
//					cout << "NO" << endl;
//					success = false;
//					break;
//				}
//			}
//			
//		}
//		if (success == true)
//			cout << "YES" << endl;
//		
//		clear();
//	}
//	
//}