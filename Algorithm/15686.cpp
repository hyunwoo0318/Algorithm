//#include<iostream>
//#include<vector>
//#include<cstdlib>
//
//using namespace std;
//
//int n, m;
//int arr[51][51] = {};
//int chicknum = 0;
////정답
//int minNum = 1000000000;
////치킨집 위치 저장용 벡터
//vector<pair<int, int> > v;
////정답 벡터
//vector<pair<int, int> > ans;
//
//int findRes()
//{
//	int sumOfChick = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (arr[i][j] == 1)
//			{
//				int res = 1000000000;
//				for (int k = 0; k < m; k++)
//				{					
//					int temp =  abs(ans[k].first - i) + abs(ans[k].second - j);
//					if (res > temp)
//						res = temp;
//				}
//				sumOfChick += res;
//			}			
//		}
//	}
//	return sumOfChick;
//}
//
//void back(int num, int pos)
//{
//	if (num == m)
//	{
//		int temp = findRes();
//		if (minNum > temp)
//			minNum = temp;
//	}
//	else
//	{
//		for (int i = pos; i < chicknum; i++)
//		{
//			ans.push_back(make_pair(v[i].first, v[i].second));
//			back(num + 1, i + 1);
//			ans.pop_back();
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int a;
//			cin >> a;
//			arr[i][j] = a;
//			if (a == 2)
//			{
//				chicknum++;
//				v.push_back(make_pair(i, j));
//			}				
//		}
//	}
//	back(0, 0);
//	cout << minNum;
//
//}