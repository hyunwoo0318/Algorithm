//#include<iostream>
//
//using namespace std;
//
//long long arr[102][102][102] = {};
//
//long long w(int i, int j, int k)
//{
//	for (int a = 0; a <= 20; a++)
//	{
//		for (int b = 0; b <= 20; b++)
//		{
//			for (int c = 0; c <= 20; c++)
//			{
//				if (a == 0 || b == 0 || c == 0)
//				{
//					arr[a][b][c] = 1;
//				}			
//					
//				else if (a < b && b < c)
//				{
//					arr[a][b][c] = arr[a][b - 1][c - 1] + arr[a][b - 1][c-1] - arr[a][b-1][c];
//				}
//				else
//				{
//					arr[a][b][c] = arr[a - 1][b][c] + arr[a - 1][b - 1][c] + arr[a - 1][b][c - 1] - arr[a - 1][b - 1][c - 1];
//				}
//			}
//		}
//	}
//	if (i == 0 || j == 0 || k == 0)
//		return 1;
//	else if (i > 20 || j > 20 || k > 20)
//		return arr[20][20][20];
//	else
//		return arr[i][j][k];
//	
//}
//
//int main()
//{
//	while (1)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (a == -1 && b == -1 && c == -1)
//			break;
//		else
//		{
//			int tempa = a;
//			int tempb = b;
//			int tempc = c;
//			
//			if (a < 0)
//			{
//				tempa = a;
//				a = 0;				
//			}
//			if (b < 0)
//			{
//				tempb = b;
//				b = 0;
//			}
//			if (c < 0)
//			{
//				tempc = c;
//				c = 0;
//			}
//				
//		
//			printf("w(%d, %d, %d) = %lld\n", tempa, tempb, tempc, w(a, b, c));			
//		}
//	}
//}