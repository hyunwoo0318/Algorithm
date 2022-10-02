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
////priority queue를 이용하지 않고 구현
////void dijikstra(int a)
////{
////	int cnt = 1;
////	//초기화
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
////		//제일 거리가 작은 놈을 골라냄
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
////		//트리에 포함시킴
////		check[pos] = true;
////
////		//갱신
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