//#include<iostream>
//
//#define maxNum  987654321
//
//using namespace std;
//
//int n, m, input, i1, i2, st, dest;
//
//int arr[1001][1001] = {};
//int d[1001] = {};
//bool check[1001] = { false };
//
////priority queue�� �̿����� �ʰ� ����
////void dijikstra(int a)
////{
////	int cnt = 1;
////	//�ʱ�ȭ
////	for (int i = 1; i <= n; i++)
////	{
////		if (arr[a][i] != maxNum)
////			d[i] = arr[a][i];
////		else
////			d[i] = maxNum;
////	}
////
////	d[a] = 0;
////	check[a] = true;
////
////	while (cnt < n)
////	{
////		int minNum = maxNum + 1;
////		int pos=-1;
////		//���� �Ÿ��� ���� ���� ���
////		for (int i = 1; i <= n; i++)
////		{
////			if (d[i] < minNum && check[i] == false)
////			{
////				minNum = d[i];
////				pos = i;
////			}				
////		}
////		if (pos == -1)
////		{
////			continue;
////		}
////
////		//Ʈ���� ���Խ�Ŵ
////		check[pos] = true;
////
////		//����
////		for (int i = 1; i <= n; i++)
////		{
////			if (check[i] == false && d[pos] + arr[pos][i] < d[i])
////				d[i] = d[pos] + arr[pos][i];
////		}
////		cnt++;
////	}
////
////}
//
//
//int main()
//{	
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			arr[i][j] = maxNum;
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> i1 >> i2 >> input;
//		arr[i1][i2] = min(arr[i1][i2], input);
//	}
//	cin >> st >> dest;
//
//	dijikstra(st);
//	cout << d[dest];
//}