//#include<iostream>
//#include<algorithm>
//
//#define INF 10000000
//
//using namespace std;
//
//int n, e, v1, v2;
//
////����ġ�� �Է¹��� �迭
//int w[801][801];
//
////���������κ����� �ִܰŸ�
//int d[801];
//
//
////Ʈ���� ���ԵǾ����� üũ
//bool checked[801] = { false };
//
//void dijikstra(int a)
//{		
//
//	//�ʱ�ȭ
//	for (int i = 1; i <= n; i++)
//	{
//		d[i] = w[a][i];
//		checked[i] = false;
//	}
//
//	//������ ����
//	checked[a] = true;
//	d[a] = 0;
//	
//	while(1)
//	{
//		int s = -1;
//		int min = INF - 1;
//		//Ʈ���� �߰��� ��带 ã��
//		for (int i = 1; i <= n; i++)
//		{
//			if (checked[i])
//				continue;
//			else if (min > d[i])
//			{
//				s = i;
//				min = d[i];
//			}
//		}	
//		//���̻� Ʈ���� �߰��� ��尡 ���°�� ����
//		if (s == -1)
//			break;
//
//		//Ʈ���� s�߰�
//		checked[s] = true;
//
//		//s�� ������ ����� ���������� �ִ��� Ȯ��
//		for (int i = 1; i <= n; i++)
//		{			
//			if (d[i] > d[s] + w[s][i] && w[s][i] != INF && !checked[i])
//				d[i] = d[s] + w[s][i];
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
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j)
//				w[i][j] = 0;
//			else
//				w[i][j] = INF;
//		}
//	}
//
//	for (int i = 0; i < e; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		w[a][b] = w[b][a] = c;
//	}
//
//	
//	cin >> v1 >> v2;
//	
//	dijikstra(v1);
//
//	int v1_1 = d[1];
//	int v1_n = d[n];
//	int v1_v2 = d[v2];
//
//	dijikstra(v2);
//	int v2_n = d[n];
//	int v2_1 = d[1];
//	
//	int ans;
//
//	int min1 = v1_1 + v1_v2 + v2_n;
//	int min2 = v2_1 + v1_v2 + v1_n;
//	ans = min(min1, min2);
//		if (ans >= INF)
//			cout << -1;
//		else
//			cout << ans;
//	
//	
//}
