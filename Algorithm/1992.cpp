//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int N;
//int arr[64][64] = {};
//
//bool check(int x, int y, int n)
//{
//	int temp = arr[y][x];
//	for (int i = y; i < y + n; i++)
//	{
//		for (int j = x; j < x + n; j++)
//		{
//			if (temp != arr[i][j])
//				return false;
//		}
//	}
//	return true;
//}
//
//void quadTree(int x, int y, int n)
//{
//	if (n == 0)
//	{
//	}
//	else if (check(x, y, n))
//	{
//		cout << arr[y][x];
//	}
//	else
//	{
//		cout << "(";
//		quadTree(x, y, n / 2);
//		quadTree(x + n / 2, y, n / 2);
//		quadTree(x, y + n / 2, n / 2);
//		quadTree(x + n / 2, y + n / 2, n / 2);
//		cout << ")";
//	}
//}
//
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		string s;
//		cin >> s;
//		for (int j = 0; j < N; j++)
//		{
//			arr[i][j] = s[j] - '0';
//		}
//	}
//
//	quadTree(0, 0, N);
//
//}