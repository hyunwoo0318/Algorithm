//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//vector<int> v[101];
//bool vs[101];
//int cnt = 0;
//
//void DFS(int n)
//{
//	vs[n] = true;
//	cnt++;
//	for (int i = 0; i < v[n].size(); i++)
//	{
//		if (vs[v[n][i]] == false)
//			DFS(v[n][i]);
//	}	
//}
//
//void makeGraph(int a, int b)
//{
//	v[a].push_back(b);
//	v[b].push_back(a);
//}
//
//int main()
//{
//	int num,e;
//	cin >> num >> e;
//
//	for (int i = 0; i < e; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		makeGraph(a, b);
//	}
//
//	DFS(1);
//	cout << cnt-1 << endl;
//}