//#include<iostream>
//
//#define INF 100000000;
//
//using namespace std;
//
//int w[100001][3];
//int ans[100001][3];
//
//int main()
//{
//	int cnt = 0;
//	while (1)
//	{
//		int n;
//		cin >> n;
//		if (n == 0)
//			return 0;
//		for (int i = 1; i <= n; i++)
//		{
//			int a, b, c;
//			
//			cin >>a >> b >> c;
//			w[i][1] = a;
//			w[i][2] = b;
//			w[i][3] = c;
//		}
//
//		//∏«¿≠¡Ÿ º≥¡§
//		ans[1][1] = INF;
//		ans[1][2] = w[1][2];
//		ans[1][3] = w[1][3] + w[1][2];
//
//		for (int i = 2; i <= n; i++)
//		{
//			for (int j = 1; j <= 3; j++)
//			{
//				if (j == 1)
//				{
//					ans[i][j] = min(ans[i - 1][j], ans[i - 1][j + 1]) + w[i][j];
//				}
//				else if (j == 2)
//				{
//					ans[i][j] = min(min(min(ans[i - 1][j], ans[i - 1][j + 1]),ans[i-1][j-1]),ans[i][j-1]) + w[i][j];
//				}
//				else if (j == 3)
//				{
//					ans[i][j] = min(min(ans[i - 1][j], ans[i - 1][j - 1]),ans[i][j-1]) + w[i][j];
//				}
//			}
//		}
//		cout << ++cnt << ". " << ans[n][2] << "\n";
//
//
//		
//	}
//}