//#include<iostream>
//#include<string>
//
//using namespace std;
//
//char arr[100][100];
//bool visited[100][100]={false};
//int n;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//bool checkSick(int x, int y, char co)
//{
//	if (x < 0 || y < 0 || x >= n || y >= n)
//		return false;
//	if (co == 'B' && arr[y][x] != co)
//		return false;
//	else if((co=='R' || co =='G') && arr[y][x] == 'B')
//		return false;
//	if (visited[y][x] == true)
//		return false;
//	return true;
//}
//
//bool checkNormal(int x, int y, char co)
//{
//	if (x < 0 || y < 0 || x >= n || y >= n)
//		return false;
//	if (arr[y][x] != co)
//		return false;
//	if (visited[y][x] == true)
//		return false;
//	return true;
//}
//
//void dfsNormal(int x, int y, char co)
//{
//	visited[y][x] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int xx = dx[i] + x;
//		int yy = dy[i] + y;
//		if (checkNormal(xx, yy, co))
//			dfsNormal(xx, yy, co);
//	}	
//}
//
//void dfsSick(int x, int y, char co)
//{
//	visited[y][x] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int xx = dx[i] + x;
//		int yy = dy[i] + y;
//		if (checkSick(xx, yy, co))
//			dfsSick(xx, yy, co);
//	}
//}
//
//void clear()
//{
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			visited[i][j] = false;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n;
//
//	string input;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		for (int j=0;j<input.size();j++)
//		{
//			arr[i][j] = input[j];
//		}
//	}
//
//	int ansNormal = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (visited[i][j] == false)
//			{
//				ansNormal++;
//				char color = arr[i][j];
//				dfsNormal(j, i, color);				
//			}			
//		}
//	}
//
//	clear();
//	int ansSick = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (visited[i][j] == false)
//			{
//				ansSick++;
//				char color = arr[i][j];
//				dfsSick(j, i, color);
//			}
//		}
//	}
//	cout << ansNormal << " " << ansSick;
//}