//#include<iostream>
//#include<vector>
//#include<cstdlib>
//#include<algorithm>
//
//using namespace std;
//
//int arr[20][20] = {};
//bool visited[21] = {false};
//int N;
//int minNum = 1000000000;
//
//
//int addAns()
//{
//	int temp = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			if (visited[i] == true && visited[j] == true)
//				temp = temp + arr[i][j];
//		}
//	}
//	return temp;
//}
//
//int findRest()
//{
//	int temp = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			if (visited[i] == false && visited[j] == false)
//				temp = temp + arr[i][j];
//		}
//	}
//	return temp;
//}
//
//void back(int n, int num)
//{
//	if (n == N / 2)
//	{
//		int temp2 = addAns();
//		int temp = findRest();
//		int ans = abs(temp2 - temp);
//		if (ans < minNum)
//			minNum = ans;
//		
//	}
//	else
//	{		
//		for (int i = num; i <= N; i++)
//		{
//			visited[i] = true;			
//			back(n + 1, i + 1);
//			visited[i] = false;
//		}
//				
//	}
//}
//
//int main()
//{
//	
//	cin >> N;
//	
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			int a;
//			cin >> a;
//			arr[i][j] = a;
//			
//		}
//	}
//
//	back(0,1);
//	cout << minNum;
//}