//#include<iostream>
//
//using namespace std;
//
//int arr[2187][2187] = {};
//
////0,1,-1ÀúÀå
//int p0 = 0;
//int p1 = 0;
//int pn1 = 0;
//
//bool check(int x, int y, int n)
//{
//	int temp = arr[y][x];
//	for (int i = y; i < y + n; i++)
//	{
//		for (int j = x; j < x + n; j++)
//		{
//			if (arr[i][j] != temp)
//				return false;
//		}
//	}
//	return true;
//}
//
//void quadTree(int x, int y, int n)
//{
//	if (n == 0) {}
//	else if (check(x, y, n))
//	{
//		if (arr[y][x] == 1)
//			p1++;
//		else if (arr[y][x] == 0)
//			p0++;
//		else
//			pn1++;
//	}
//	else
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				quadTree(x + i * n / 3, y + j * n / 3, n /3);
//			}
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
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			int a;
//			cin >> a;
//			arr[i][j] = a;
//		}
//	}
//
//	quadTree(0, 0, N);
//	cout << pn1 << endl;
//	cout << p0 << endl;
//	cout << p1 << endl;
//
//}