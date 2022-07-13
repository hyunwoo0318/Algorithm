//인접행렬로 구현 (알고리즘 수업시간)
//그러나 위 문제에서 vertex가 10000개로 굉장히 많으므로 비효율적임

//#include<iostream>
//#include<vector>
//#define INT_MAX       2147483647
//
//using namespace std;
////weight값을 저장하는 이차원 배열 ( idx는 edge의 두 vertex를 의미함)
//int w[10000][10000] = {};
////해당 idx의 vertex와 트리의 최소거리를 잇는 idx를 가짐
//int nearest[10000] = {};
////nearest값과 해당 idx를 연결하는 거리
//int dist[10000] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int vnear = 1;
//	//MST의 가중치의 합
//	int ans = 0;
//	//MST
//	//vector<int> f;
//	int v, e;
//	int a, b, c;
//	cin >> v >> e;
//
//	for (int i = 0; i < e; i++)
//	{		
//		cin >> a >> b >> c;
//		//weight값 초기화시켜주기
//		w[a][b] = w[b][a] = c;
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

////인접리스트 구현
//#include<iostream>
//#include<vector>
//#define INT_MAX 2,147,483,647
//
//usi
////도착, 가중치값, 출발을 저장하는 벡터 선언
//vector<pair<int, int> > w[10001];
//int nearest[10001] = {};
//int dist[10001] = {};
//
//int main()
//{
//	int n, e;
//	int a, b, c;
//	cin >> n >> e;
//
//	//입력을 받아서 가중치값 설정하기
//	for (int i = 0; i < e; i++)
//	{
//		cin >> a >> b >> c;
//		w[a].push_back(make_pair(b, c));
//	}
//
//	//초기화
//	for (int i = 2; i <= n; i++)
//	{
//		nearest[i] = 1;
//		dist[i] = 
//	}
//
//}ng namespace std;
