//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int arr[20][20] = {};
//int ss[40] = {};
//int n;
//int mem = n / 2;
//int team[11] = {};
//bool visited[11];
//
//void makeTeam(int cnt)
//{
//	if (cnt == n / 2) {
//		for (int i = 0; i < (n / 2); i++)
//			cout << team[i] << " ";
//		cout << endl;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (visited[i] == false)
//			{
//				visited[i] = true;
//				team[cnt] = i;
//				makeTeam(cnt + 1);
//				visited[i] = false;
//			}
//		}
//	}	
//}
//
//int main()
//{	
//	cin >> n;
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int a;
//			cin >> a;
//			arr[i][j] = a;
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int temp = arr[i][j];
//			ss[i + j] = temp;
//		}
//	}
//
//	makeTeam(0);
//}