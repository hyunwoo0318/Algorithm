//#include<iostream>
//
//using namespace std;
//
//int arr[1025][1025] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		int temp = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			int a;
//			cin >> a;
//			temp += a;
//			arr[i][j] = temp;
//		}		
//	}
//
//	while (m--)
//	{
//		int res = 0;
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//				
//		for (int i = x1; i <= x2; i++)
//		{
//			if (y1 == 1)
//				res += arr[i][y2];
//			else
//				res += arr[i][y2] - arr[i][y1 - 1];
//		}		
//		cout << res << "\n";
//	}
//
//}