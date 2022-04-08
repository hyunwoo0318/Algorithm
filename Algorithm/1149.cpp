//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//vector<int> v[1000];
//int ans = 0;
//int res[1000][3];
//
//int p(int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 0)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				res[i][j] = v[i][j];
//			}			
//		}
//		else
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				res[i][j] = min(res[i-1][(j + 1) % 3], res[i-1][(j + 2) % 3]) + v[i][j];
//			}
//		}
//	}
//	int temp = min(res[n - 1][0], min(res[n - 1][1], res[n - 1][2]));
//	return temp;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		v[i].push_back(a);
//		v[i].push_back(b);
//		v[i].push_back(c);
//	}
//
//	cout << p(N);
//	
//	
//}