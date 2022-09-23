//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//
//
//using namespace std;
//
//int n, input;
//int arr[20][20];
////아기상어가 먹은 물고기의 개수
//int cnt = 0;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//
//int checkBFS(int x, int y, int big)
//{
//	if (x < 0 || y < 0 || x >= n || y >= n)
//		return -1;
//	if (arr[y][x] > big)
//		return -1;
//	if (arr[y][x] < big && arr[y][x] > 0)
//		return 0; //물고기인경우
//	if (arr[y][x] == 0 || arr[y][x] == big)
//		return 1; //그냥 빈칸인 경우랑 크기가 같은경우
//	
//}
//
////가장가까운 물고기를 찾고 그 위치와 거리를 return함
//pair<int, pair<int, int> > findNearest(pair<int,int> p, int big)
//{
//	bool visited[20][20] = { false };
//
//	int retD = 0;
//	pair<int, int> retP={50000, 50000};
//	bool find = false;
//	//거리가 같은경우 가장 위에, 왼쪽에 있는것을 찾기 위해서 일단 저장
//	vector<pair<int, int> > v;
//	queue<pair<int,int> > q;
//	q.push(p);
//	visited[p.second][p.first] = true;
//
//	while (!find && !q.empty())
//	{
//		int m = q.size();
//		for (int k = 0; k < m; k++)
//		{
//			int x = q.front().first;
//			int y = q.front().second;
//			q.pop();			
//
//			for (int i = 0; i < 4; i++)
//			{
//				int xx = x + dx[i];
//				int yy = y + dy[i];
//				if (visited[yy][xx])
//					continue;
//				int temp = checkBFS(xx, yy, big);
//				if (temp== 0)
//				{
//					//물고기인경우
//					find = true;
//					if (retP.second > yy)
//						retP = { xx,yy };
//					else if (retP.second == yy && retP.first > xx)
//						retP = { xx,yy };
//				}
//				else if (temp == 1)
//				{
//					//그냥 빈칸인 경우
//					visited[yy][xx] = true;
//					q.push({ xx,yy });
//				}
//			}
//			
//		}
//		retD++;
//	}
//	
//	return { retD, retP };
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
//	
//
//	int ans = 0;
//	//아기상어의 위치
//	pair<int, int> pos;
//
//	//아기상어의 크기
//	int big = 2;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> input;
//			arr[i][j] = input;
//		
//			if (input == 9)
//			{
//				pos.first = j;
//				pos.second = i;
//				arr[i][j] = 0;
//			}			
//		}
//	}
//
//	while (1)
//	{
//		pair<int, pair<int, int> > nearest = findNearest(pos, big);
//		if (nearest.second == make_pair(50000,50000))
//			break;
//		ans += nearest.first;
//		pos = nearest.second;
//		
//		arr[pos.second][pos.first] = 0;		
//		cnt++;
//		if (cnt == big)
//		{
//			big++;
//			cnt = 0;
//		}
//	}
//
//	cout << ans;
//}