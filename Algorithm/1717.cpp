//#include<iostream>
//
//using namespace std;
//
//int arr[1000001];
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
//void find(int a, int b)
//{
//	int rootA = findRoot(a);
//	int rootB = findRoot(b);
//
//	if (rootA == rootB)
//		cout << "yes\n";
//	else
//		cout << "no\n";
//
//}
//
//int main()
//{
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m, a,b,c;
//	cin >> n >> m;
//
//	for (int i = 0; i <= n; i++)
//	{
//		arr[i] = i; 
//		
//	}
//
//	while (m--)
//	{		
//		cin >> c >> a >> b;
//		if (c == 0)
//		{
//			merge(a, b);
//		}
//		else if (c == 1)
//		{
//			find(a, b);
//		}
//	}
//}