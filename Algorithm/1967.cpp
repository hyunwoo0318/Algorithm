//#include<iostream>
//
//
//using namespace std;
//
//int arr[201];
//int city[1000];
//
//int n, m, x, y;
//
//int findRoot(int a)
//{
//	if (arr[a] == a)
//		return a;
//	else
//		return arr[a] = findRoot(arr[a]);
//}
//
//void merge(int a, int b)
//{
//	int rootA = findRoot(a);
//	int rootB = findRoot(b);
//
//	if (a != b)
//	{
//		arr[rootA] = rootB;
//	}
//
//}
//
//void travel()
//{
//	int root = findRoot(city[0]);
//	for (int i = 1; i <m; i++)
//	{
//		if (root != findRoot(city[i]))
//		{
//			cout << "NO";
//			return;
//		}
//	}
//	cout << "YES";
//}
//
//int main()
//{
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	
//	int t;
//	int cnt = 1;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (int i = 0; i < n*n; i++)
//	{
//		cin >> t;
//		if (t == 1)
//		{
//			y = cnt / n + 1;
//			x = cnt % n;
//			merge(x, y);
//		}
//		cnt++;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> t;
//		city[i] = t;
//	}
//
//	travel();	
//}