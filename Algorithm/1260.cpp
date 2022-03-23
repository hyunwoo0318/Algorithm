//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//
//vector<int> v[1001];
//bool visitedD[1001];
//bool visitedB[1001];
//
//void makeGraph(int a, int b)
//{
//	v[a].push_back(b);
//	v[b].push_back(a);
//}
//
//void DFS(int n)
//{
//	visitedD[n] = true;
//	printf("%d ", n);
//
//	for (int i = 0; i < v[n].size(); i++)
//	{
//		if (visitedD[v[n][i]] == false)
//			DFS(v[n][i]);		
//	}		
//}
//
//void BFS(int n)
//{
//	queue<int> q;
//	visitedB[n] = true;
//	printf("%d ", n);
//
//	for(int i=0;i<v[n].size();i++)
//	q.push(v[n][i]);
//
//	while (q.empty() == false)
//	{
//		int top = q.front();
//		if (visitedB[top] == true)
//		{
//			q.pop();
//		}			
//		else
//		{
//			visitedB[top] = true;
//			q.pop();
//			printf("%d ", top);
//			for (int i = 0; i < v[top].size(); i++)
//			{
//				q.push(v[top][i]);
//			}
//		}
//	}
//		
//}
//
//int main()
//{
//	int n, m, st;
//	cin >> n >> m >> st;
//		
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		makeGraph(a, b);
//	}
//
//	//숫자가 낮은 수부터 방문을 해야하므로 정렬을 해줌
//	for (int i = 1; i < 1001; i++)
//	{
//		sort(v[i].begin(), v[i].end());
//	}
//
//	DFS(st);
//	cout << endl;
//	BFS(st);
//}