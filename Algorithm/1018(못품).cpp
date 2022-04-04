//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//char arr[50][50] = {};
//
//void clear(vector<int> &vs)
//{
//	for (int i = 0; i < vs.size(); i++)
//	{
//		vs[i] = 0;
//	}
//}
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	
//	for (int i = 0; i < m; i++)
//	{
//		string s;
//		cin >> s;
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = s[j];
//		}
//	}
//
//	vector<int> v((n - 7));
//	int min = 10000;
//		
//		for (int i = 0; i <= m-8; i++)
//		{
//			for (int j = 0; j <= n-8; j++)
//			{
//				if (arr[i][j] == 'B')
//				{
//					for (int i1 = i; i1 < i + 8; i1++)
//					{
//						for (int j1 = j; j1 < j + 8; j1++)
//						{
//							if (((j1 - j) % 2 == 0 && (i1 - i) % 2 == 0) || ((j1 - j) % 2 == 1 && (i1 - i) % 2 == 1))
//							{
//								if (arr[i1][j1] == 'W')
//									v[j]++;
//							}
//							else
//							{
//								if (arr[i1][j1] == 'B')
//									v[j]++;
//							}
//						}
//					}
//				}
//				else if (arr[i][j] == 'W')
//				{
//					for (int i1 = i; i1 < i + 8; i1++)
//					{
//						for (int j1 = j; j1 < j + 8; j1++)
//						{
//							if (((j1 - j) % 2 == 0 && (i1 - i) % 2 == 0) || ((j1 - j) % 2 == 1 && (i1 - i) % 2 == 1))
//							{
//								if (arr[i1][j1] == 'B')
//									v[j]++;
//							}
//							else
//							{
//								if (arr[i1][j1] == 'W')
//									v[j]++;
//							}
//						}
//					}
//				}
//			}
//			sort(v.begin(), v.end());
//			if (min > v.front())
//				min = v.front();
//			clear(v);			
//		}
//		
//		cout << min << endl;
//
//		//뒤집어서 하는거도 해야함
//		//알고리즘부터 다시 짜야할꺼같음
//
//}