//#include<iostream>
//#include<vector>
//#include<queue>
//
//#define maxNum 987654321
//
//using namespace std;
//
//int n, m, i1, i2, input, st, dest;
//int arr[1001][1001] = {};
//int d[1001] = {};
//bool check[1001] = { false };
//
//struct cmp
//{
//	bool operator()(pair<int, int> a, pair<int, int> b)
//	{
//		return a.second > b.second;
//	}
//};
//
//
//void dijikstra(int a)
//{
//	priority_queue<pair<int, int>,vector<pair<int,int> >,cmp >pq;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[a][i] != maxNum)
//		{
//			pq.push({ i, arr[a][i] });
//			d[i] = arr[a][i];
//		}
//		else
//			d[i] = maxNum;
//			
//	}
//
//	d[a] = 0;
//	check[a] = true;
//
//	while (!pq.empty())
//	{
//		int pos = pq.top().first;
//		pq.pop();
//
//		if (check[pos])
//			continue;
//		check[pos] = true;
//
//		for (int i = 1; i <= n; i++)
//		{
//			if (check[i] == false && d[pos] + arr[pos][i] < d[i])
//			{
//				d[i] = d[pos] + arr[pos][i];
//				pq.push({ i, d[i] });
//			}
//				
//		}		
//	}
//}
//
//int main()
//{
//	
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			arr[i][j] = maxNum;
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> i1 >> i2 >> input;
//		arr[i1][i2] = min(arr[i1][i2], input);
//	}
//
//	cin >> st >> dest;
//
//	dijikstra(st);
//	cout << d[dest];
//
//		
//}