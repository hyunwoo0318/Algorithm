//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int arr[3000001] = {};
//
//int main()
//{
//	int cnt = 1;
//	int res = 0;
//	int n;
//	int i = 1;
//	cin >> n;
//
//	arr[0] = 0;
//	arr[1] = 0;
//
//	for (int i = 1; i <= 1000000; i++)
//	{
//		if (arr[3 * i] == 0)
//			arr[3 * i] = arr[i] + 1;
//		else
//			arr[3 * i] = min(arr[i] + 1, arr[3 * i]);
//
//		if (arr[2 * i] == 0)
//			arr[2 * i] = arr[i] + 1;
//		else
//			arr[2 * i] = min(arr[i] + 1, arr[2 * i]);
//		if (arr[1 + i] == 0)
//			arr[1 + i] = arr[i] + 1;
//		else
//			arr[1 + i] = min(arr[i] + 1, arr[1 + i]);
//
//	}
//	cout << arr[n];
//	
//}
