//#include<iostream>
//
//using namespace std;
//
//long long arr[101] = {0,1,1,1,2,2,3,4,5,7,9,};
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int i = 11; i <= 100; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 5];
//	}
//
//	while (T--)
//	{
//		int a;
//		cin >> a;
//		cout << arr[a] << "\n";
//	}
//}