//#include<iostream>
//
//using namespace std;
//
//int arr[100000][2] = {};
//int w[100000][2] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		int n,a;
//		cin >> n;
//
//		for (int i = 0; i < n; i++)
//		{			
//			cin >> a;
//			w[i][0] = a;
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a;
//			w[i][1] = a;
//		}
//
//		//초기값 설정
//		arr[0][0] = w[0][0];
//		arr[0][1] = w[0][1];
//
//		arr[1][0] = w[0][1] + w[1][0];
//		arr[1][1] = w[0][0] + w[1][1];
//
//		for (int i = 2; i < n; i++)
//		{
//			for (int j = 0; j < 2; j++)
//			{
//				if (arr[i - 1][(j + 1) % 2] >= arr[i-2][(j+1) % 2])
//					arr[i][j] = arr[i - 1][(j + 1) % 2] + w[i][j];
//				else
//					arr[i][j] = arr[i - 2][(j + 1) % 2] + w[i][j];
//			}
//		}
//
//		cout << max(arr[n - 1][0], arr[n - 1][1]) << "\n";
//	}
//}