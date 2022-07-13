//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
////세로,가로
//int a, b;
////보드판
//char arr[21][21];
//
//int res = 0;
//
////방향
//int xx[4] = { 0,-1,0,1 };
//int yy[4] = { 1,0,-1,0 };
//
////현재위치
//pair<int, int> pos = make_pair(0, 0);
//vector<char> vec;
//
////알파벳이 사용되었는지 확인하는 배열
//bool v[28] = {false};
//
//
//bool canMove(int x, int y, pair<int, int> p)
//{
//	x += p.second;
//	y += p.first;
//	if (((x >= 0 && x < b) && (y >= 0 && y < a)) &&
//		(v[arr[y][x] - 'A'] == false))
//		return true;
//	else return false;
//}
//
//bool stop()
//{	
//	//4방향으로 움직일수 있는지확인하면됨.
//	for (int i = 0; i < 4; i++)
//	{
//		bool result = canMove(xx[i], yy[i], pos);
//		if (result == true)
//			return false;
//	}
//	return true;
//}
//
//
//
//void back(int n,int y, int x)
//{
//	
//	if (stop())
//	{
//		if (res < n)
//			res = n;
//	}
//	else
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			if (canMove(xx[i], yy[i], pos))
//			{		
//				pos.first += yy[i];
//				pos.second += xx[i];
//				v[arr[pos.first][pos.second] - 'A'] = true;
//				back(n + 1, y + yy[i], x + xx[i]);
//				v[arr[pos.first][pos.second] - 'A'] = false;
//				//값을 변경을 할때 그 값을 사용하는 변수가 있는지 확인해보기
//				pos.first -= yy[i];
//				pos.second -= xx[i];
//				
//			}
//		}
//	}
//}
//
//int main()
//{	
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> a >> b;
//
//	for (int i = 0; i < a; i++)
//	{
//		string s;
//		cin >> s;
//		for (int j = 0; j < b; j++)
//		{
//			arr[i][j] = s[j];
//		}
//	}
//	v[arr[0][0] - 'A'] = true;
//	back(1,0,0);
//	cout << res;
//}