//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int arr1[100][100] = {};
//int arr2[100][100] = {};
//int arr3[100][100] = {};
//
//void multMatrix(int n, int m, int k)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			int temp = 0;
//			for (int h = 0; h < m; h++)
//			{
//				temp += arr1[i][h] * arr2[h][j];
//			}
//			arr3[i][j] = temp;
//		}
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m, k;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			int a;
//			cin >> a;
//			arr1[i][j] = a;
//		}
//	}
//
//	cin >> m >> k;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			int a;
//			cin >> a;
//			arr2[i][j] = a;
//		}
//	}
//
//	multMatrix(n, m, k);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			cout << arr3[i][j] << " ";
//		}
//		cout << "\n";
//	}
//}