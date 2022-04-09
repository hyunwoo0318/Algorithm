//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int arr[300][2] = {};
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	arr[0][0] = 0;
//	arr[0][1] = 0;
//
//	for (int i = 1; i <= N; i++)
//	{
//		int a;
//		cin >> a;
//		arr[i][0] = a;
//		arr[i][1] = a;
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		if (i == 1)
//		{
//			continue;
//		}
//		else
//		{
//			arr[i][0] += max(arr[i - 2][0],arr[i-2][1]);
//			arr[i][1] += arr[i - 1][0];
//		}
//	}
//	cout << max(arr[N][0], arr[N][1]);
//
//}