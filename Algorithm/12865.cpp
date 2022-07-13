//#include<iostream>
//#include<vector>
//
////0/1 냅색문제
////dp로 풀경우 각각의 무게에 대해서 무게를 정하는 방식에 대해서 고민이 많았는데
////그냥 모든 무게에 대한 일반적인 해를 구해서 원하는 값을 골라쓰면 된다.
//
//using namespace std;
//
//vector<pair<int, int> > v;
//int p[101][100001] = {};
//int n, k;
//
//void knapsack()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= k; j++)
//		{
//			int wi = v[i].first;
//			int pi = v[i].second;
//
//			if (wi > j)
//				p[i][j] = p[i - 1][j];
//			else
//			{
//				p[i][j] = max(p[i - 1][j], pi + p[i - 1][j-wi]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	
//	cin >> n >> k;
//
//	
//	v.push_back(make_pair(0, 0));
//	for (int i = 0; i < n; i++)
//	{
//		int w,p;
//		cin >> w >> p;
//		v.push_back(make_pair(w, p));
//	}
//
//	knapsack();
//	cout << p[n][k];
//	
//}