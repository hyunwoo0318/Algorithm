//#include<iostream>
//
//using namespace std;
//
//int arr[128][128] = {};
//int white = 0;
//int blue = 0;
//int N;
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
//void paper(int x, int y, int n)
//{
//	if (n == 0)
//	{
//	}
//	else if (check(x, y, n))
//	{
//		if (arr[y][x] == 1)
//			blue++;
//		else
//			white++;
//	}
//	else
//	{
//		paper(x, y, n/2);
//		paper(x + n/2, y, n / 2);
//		paper(x , y + n / 2, n / 2);
//		paper(x+ n / 2, y + n / 2, n / 2);
//	}
//		
//}
//
//int main()
//{
//	
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
//	paper(0,0,N);
//	cout << white << endl;
//	cout << blue << endl;
//
//
//}