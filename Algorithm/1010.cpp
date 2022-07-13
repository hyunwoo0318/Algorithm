//#include<iostream>
//
//using namespace std;
//
//int arr[1000][1000] = {};
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int n, m;
//		cin >> n >> m;
//		for (int i = 0; i <= m; i++)
//		{
//			for (int j = 0; j <= n; j++)
//			{
//				if (j == 0 || j == i)
//					arr[i][j] = 1;
//				else if (j == 1)
//					arr[i][j] = i;
//				else
//					arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//		cout << arr[m][n] << "\n";
//	}
//}