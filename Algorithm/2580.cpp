//#include<iostream>
//#include<vector>
//using namespace std;
//
//int arr[9][9] = {};
//bool flag = false;
//vector<pair<int, int> > v;
//
//bool check(int y, int x, int val)
//{
//	for (int i = 0; i < 9; i++)
//	{
//		if (x == i)
//			continue;
//		else if (arr[y][i] == val)
//			return false;
//	}
//
//	for (int i = 0; i < 9; i++)
//	{	
//		if (y == i)
//			continue;
//
//		else if (arr[i][x] == val)
//			return false;
//	}
//
//	int yy = y / 3;
//	int xx = x / 3;
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (i == y && j == x)
//				continue;
//			else if (i / 3 == yy && j / 3 == xx && arr[i][j] == val)
//				return false;
//		}
//	}
//	return true;
//}
//
//void sudoku(int cnt)
//{   
//	if (cnt == v.size())
//	{
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//		flag = true;
//		return;
//	}
//	
//		
//				for (int k = 1; k <= 9; k++)
//					{
//						arr[v[cnt].first][v[cnt].second] = k;
//						if (check(v[cnt].first, v[cnt].second, k))
//							sudoku(cnt + 1);
//					//	k==9이고 check가 false일때 초기화를 해줘야하는데
//					//	어떻게 해야할지 모르겠다.
//						if (flag) return;
//					}
//					arr[v[cnt].first][v[cnt].second] = 0;					
//				}
//	
//
//
//
//
//int main()
//{
//	//입력받음
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			int a;
//			cin >> a;
//			arr[i][j] = a;
//			if (a == 0)
//			{
//				v.push_back(make_pair(i, j));
//			}
//		}
//	}
//
//	sudoku(0);	
//}