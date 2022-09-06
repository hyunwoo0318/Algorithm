//#include<iostream>
//
//using namespace std;
//
//int w[201][201];
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	//√ ±‚»≠
//	for (int i = 0; i<= n; i++)
//	{
//		for (int j = 0; j <= k; j++)
//		{
//			if (j == 0)
//			{
//				w[i][j] = 1;				
//			}
//			else if (j == 1)
//			{
//				w[i][j] = 1;
//			}
//			else if (i == 0)
//			{
//				w[i][j] = 1;
//			}
//		}
//	}
//
//
//	for (int h = 2; h <= k; h++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			int sum = 0;
//			for (int j = 0; j <= i; j++)
//			{
//				sum += w[j][h - 1];
//				sum %= 1000000000;
//			}
//			w[i][h] = sum;
//		}
//	}
//	cout << w[n][k];
//	
//}