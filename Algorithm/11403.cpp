//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//vector<int> v[101];
//int arr[101][101] = {};
//bool visited[101] = { false };
//int n;
//
//void dfs(int x)
//{	
//	for (int i = 0; i < v[x].size(); i++)
//	{
//		int val = v[x][i];
//		if (visited[val] == false)
//		{
//			visited[val] = true;
//			dfs(val);
//		}
//			
//	}
//}
//
//void clear()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		visited[i] = false;
//	}
//}
//
//int main()
//{
//	
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int input;
//			cin >> input;
//			if (input == 1 && i != j)
//			{
//				v[i].push_back(j);
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		dfs(i);
//		for (int j = 1; j <= n; j++)
//		{
//			if (visited[j])
//				cout << "1 ";
//			else
//				cout << "0 ";
//		}
//		cout << "\n";
//		clear();
//	}
//
//}