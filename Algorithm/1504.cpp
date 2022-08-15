//#include<iostream>
//#include<algorithm>
//
//#define INF 10000000
//
//using namespace std;
//
//int n, e, v1, v2;
//
////가중치를 입력받을 배열
//int w[801][801];
//
////시작점으로부터의 최단거리
//int d[801];
//
//
////트리에 포함되었는지 체크
//bool checked[801] = { false };
//
//void dijikstra(int a)
//{		
//
//	//초기화
//	for (int i = 1; i <= n; i++)
//	{
//		d[i] = w[a][i];
//		checked[i] = false;
//	}
//
//	//시작점 설정
//	checked[a] = true;
//	d[a] = 0;
//	
//	while(1)
//	{
//		int s = -1;
//		int min = INF - 1;
//		//트리에 추가할 노드를 찾음
//		for (int i = 1; i <= n; i++)
//		{
//			if (checked[i])
//				continue;
//			else if (min > d[i])
//			{
//				s = i;
//				min = d[i];
//			}
//		}	
//		//더이상 트리에 추가할 노드가 없는경우 종료
//		if (s == -1)
//			break;
//
//		//트리에 s추가
//		checked[s] = true;
//
//		//s에 인접한 노드중 개선사항이 있는지 확인
//		for (int i = 1; i <= n; i++)
//		{			
//			if (d[i] > d[s] + w[s][i] && w[s][i] != INF && !checked[i])
//				d[i] = d[s] + w[s][i];
//		}
//	}
//
//	
//}
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//		
//	cin >> n >> e;		
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j)
//				w[i][j] = 0;
//			else
//				w[i][j] = INF;
//		}
//	}
//
//	for (int i = 0; i < e; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		w[a][b] = w[b][a] = c;
//	}
//
//	
//	cin >> v1 >> v2;
//	
//	dijikstra(v1);
//
//	int v1_1 = d[1];
//	int v1_n = d[n];
//	int v1_v2 = d[v2];
//
//	dijikstra(v2);
//	int v2_n = d[n];
//	int v2_1 = d[1];
//	
//	int ans;
//
//	int min1 = v1_1 + v1_v2 + v2_n;
//	int min2 = v2_1 + v1_v2 + v1_n;
//	ans = min(min1, min2);
//		if (ans >= INF)
//			cout << -1;
//		else
//			cout << ans;
//	
//	
//}
