//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int total = 0;
//int arr[20][20] = {};
//int ss[40] = {};
//int n;
//int mem = n / 2;
//int team[11] = {};
//bool visited[11];
//bool visited2[11];
//int balance[11] = {};
//vector<int> ans;
//int team1 = 0;
//
//
//
//void makeTeam(int cnt)
//{
//	if (cnt == n / 2) {
//		calc();
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
//			total += a;
//		}
//	}
//	makeTeam(0);	
//
//	sort(ans.begin(), ans.end());
//	cout << ans.front();
//}