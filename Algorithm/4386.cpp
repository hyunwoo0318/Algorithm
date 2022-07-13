//#include<iostream>
//#include<vector>
//#include<limits>
//#define INT_MAX       2147483647
//
//using namespace std;
////weight값을 저장하는 이차원 배열 ( idx는 edge의 두 vertex를 의미함)
//double w[101][101] = {};
////해당 idx의 vertex와 트리의 최소거리를 잇는 idx를 가짐
//int nearest[101] = {};
////nearest값과 해당 idx를 연결하는 거리
//double dist[101] = {};
////좌표를 모음
//vector<pair<double, double>> vec;
//
//double findDist(pair<double, double> a, pair<double, double> b)
//{
//	return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cout.precision(3);
//	int vnear = 1;
//	//MST의 가중치의 합
//	double ans = 0.0;
//	//MST
//	//vector<int> f;
//	int v;
//	double a, b;
//	cin >> v;
//	vec.push_back(make_pair(0, 0));
//	for (int i = 0; i < v; i++)
//	{		
//		cin >> a >> b;
//		vec.push_back(make_pair(a, b));
//	}
//
//	//거리를 직접 구함.
//	for (int j = 1; j <= v; j++)
//	{
//		for (int i = 1; i <= v; i++)
//		{
//			if (i == j)
//				w[i][j] = 0;
//			else
//				w[i][j] = findDist(vec[i], vec[j]);
//		}
//	}	
//
//	//초기화
//	for (int i = 2; i <= v; i++)
//	{
//		nearest[i] = 1; // mst에 1밖에 없으니까 연결점을 1로잡음
//		dist[i] = w[1][i]; // 1과의 거리를 넣음
//	}
//
//	//n-1번 repeat하기 위해서 해줌
//	int count = v - 1;
//	while (count--)
//	{
//		int min = INT_MAX;
//		for (int i = 2; i <= v; i++)
//		{
//			//mst에 추가할 vertex인 vnear를 찾는과정
//			if (0 <= dist[i] && dist[i] < min)
//			{
//				min = dist[i];
//				vnear = i;
//			}
//
//		}
//		
//		ans += dist[vnear];
//
//		//update
//		for (int i = 2; i <= v; i++)
//		{
//			if (w[i][vnear] < dist[i])
//			{
//				nearest[i] = vnear;
//				dist[i] = w[i][vnear];
//			}
//		}
//
//		dist[vnear] = -1;
//
//
//	}
//	cout << ans;
//
//}