//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int n, m, input;
//int arr[8][8];
//bool visited[8][8] = { false };
//vector<pair<int, int> > wallPos;
//vector<pair<int, int> > wall;
//vector<pair<int, int> > virus;
//vector<vector<pair<int, int> > > v;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//bool check(int x, int y, int index)
//{
//	if (x < 0 || y < 0 || x >= m || y >= n)
//		return false;
//	for (int i = 0; i < 3; i++)
//	{
//		if (v[index][i].second == y && v[index][i].first == x)
//			return false;
//	}
//	if (visited[y][x] == true)
//		return false;
//	if (arr[y][x] == 2 || arr[y][x] == 1)
//		return false;
//	
//	return true;
//}
//
//void findWallPos(int index)
//{
//	if (wallPos.size() == 3)
//		v.push_back(wallPos);
//	else
//	{
//		for (int i = index; i < wall.size(); i++)
//		{
//			wallPos.push_back(wall[i]);
//			findWallPos(i+1);
//			wallPos.pop_back();
//		}
//	}
//}
//
//void dfs(int x,int y, int index)
//{
//	visited[y][x] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int xx = x + dx[i];
//		int yy = y + dy[i];
//
//		if (check(xx, yy, index))
//			dfs(xx, yy, index);
//	}
//}
//
//int findArea(int index)
//{
//	int area = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{			
//			if (arr[i][j] == 0 && visited[i][j] == false)
//				area++;
//		}
//	}
//	return area;
//}
//
//void clear()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			visited[i][j] = false;
//		}
//	}
//}
//
//void makeWall(int index)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		int x = v[index][i].first;
//		int y = v[index][i].second;
//		visited[y][x] = true;
//	}
//}
//
//int main()
//{
//	
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> input;
//			arr[i][j] = input;
//			if (input == 0)
//				wall.push_back({ j,i });
//			if (input == 2)
//				virus.push_back({ j,i });
//		}
//	}
//
//	findWallPos(0);
//
//	int ans = 0;
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		clear();
//		makeWall(i);
//		for (int j = 0; j < virus.size(); j++)
//		{
//			dfs(virus[j].first,virus[j].second, i);
//		}
//		ans = max(ans,findArea(i));
//	}
//	cout << ans;
//}