//#include<iostream>
//#include<algorithm>
//
//#define MAX_INT 600000000
//
//using namespace std;
//
//int n, e;
//
////����ġ�� �Է¹��� �迭
//int w[801][801] = {};
//
////���������κ����� �ִܰŸ�
//int d[801][801];
//
//void dijikstra(int a)
//{	
//	
//	while(1)
//	{
//		int s = -1;
//		int min = MAX_INT - 1;
//		//Ʈ���� �߰��� ��带 ã��
//		for (int i = 1; i <= n; i++)
//		{
//			if (i == a)
//				continue;
//			else if (min > d[a][i])
//			{
//				s = i;
//				min = d[a][i];
//			}
//		}	
//		if (s == -1)
//			break;
//
//		//s�� ������ ����� ���������� �ִ��� Ȯ��
//		for (int i = 1; i <= n; i++)
//		{			
//			if (d[a][i] > d[a][s] + w[s][i] && w[s][i] != MAX_INT)
//				d[a][i] = d[a][s] + w[s][i];
//		}
//	}
//
//	
//}
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//		
//	cin >> n >> e;
//
//	for (int i = 0; i < e; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		if(w[a][b] == 0 || w[a][b] >c)
//		w[a][b] = w[b][a] = c;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j)
//			{
//				d[i][j] = 0;
//			}			
//			else if (w[i][j] == 0)
//			{
//				d[i][j] = MAX_INT;
//				w[i][j] = MAX_INT;
//			}
//
//			else
//				d[i][j] = w[i][j];
//		}
//	}
//
//	int v1, v2;
//	cin >> v1 >> v2;
//
//	dijikstra(1);
//	dijikstra(v1);
//	dijikstra(v2);
//	
//	int ans;
//
//		int min1 = d[1][v1] + d[v1][v2] + d[v2][n];
//		int min2 = d[1][v2] + d[v2][v1] + d[v1][n];
//		ans = min(min1, min2);
//		if (ans >= MAX_INT)
//			cout << -1;
//		else
//			cout << ans;
//	
//	
//}
