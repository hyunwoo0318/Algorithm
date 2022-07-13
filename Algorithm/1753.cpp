//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
////연결되지 않았을때의 거리를 표현
//#define INFINITE 100000000
//
//using namespace std;
//
////가중치 저장
//vector<pair<int, int> > vec[20001];
//
////시작점과의 최단거리
//int d[20001];
//
////트리에 포함되었는지 아닌지 확인하는 배열
//bool visited[20001] = {false};
//
//struct cmp {
//	bool operator()(pair<int, int> a, pair<int, int> b) {
//		return a.second > b.second;
//	}
//};
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	//아직 트리에 포함되지않은 노드들중 거리가 제일 작은놈을 고르기위해서 사용
//	priority_queue<pair<int,int>, vector<pair<int,int> >, cmp  > pq;
//
//	int v, e;
//	cin >> v >> e;
//
//	int k;
//	cin >> k;
//
//	//일단 모두 연결되어있지 않다고 가정하고 연결된 노드들은 값 바꿔주기
//	fill_n(d, 20001, INFINITE);	
//
//	for (int i = 0; i < e; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		vec[a].push_back(make_pair(b,c));
//		//시작점과 연결된 애들 값 바꿔주기
//		//두 노드 사이에 여러개의 간선이 있을수 있으므로 체크해줘야함
//		if (a == k && d[b] > c)
//		{
//			d[b] = c;			
//		}			
//	}
//
//	//여러개의 간선이 있으므로 두 노드 사이에 간선이 정해진 이후에 pq에 넣어야함
//	for (int i = 1; i <= v; i++)
//	{
//		if (d[i] != INFINITE)
//			pq.push(make_pair(i, d[i]));
//	}
//
//	//시작점은 값이 0임. ->문제조건
//	d[k] = 0;
//	visited[k] = true;
//
//	//매번 추가되는 노드의 idx번호
//	int s=k;
//	
//	
//	while(!pq.empty())
//	{		
//		//제일 작은 거리 + 트리에 포함되지않음 가진 노드를 트리에 포함시킴				
//				s = pq.top().first;
//				//트리에 포함되었다는 것은 최단거리가 확정되었다는 의미이므로 더이상 고려하지않음
//				if (visited[s])
//				{
//					pq.pop();
//					continue;
//				}
//					
//				//새로운 노드 추가
//				d[s] = pq.top().second;
//				visited[s] = true;
//				pq.pop();
//		
//		//새로 추가된 노드(s)에 인접한 노드들을 하나하나 확인해본다.					
//				for (int j = 0; j < vec[s].size(); j++)
//				{
//					int idx = vec[s][j].first;
//					int dist = vec[s][j].second;
//				
//						if (d[idx] > d[s] + dist)
//						{
//							d[idx] = d[s] + dist;
//							pq.push(make_pair(idx, d[idx]));
//						}
//										
//				}			
//		}
//
//
//	//결과출력
//	for (int i = 1; i <= v; i++)
//	{
//		if (d[i]== INFINITE)
//			cout << "INF\n";
//		else
//			cout << d[i] << "\n";
//	}
//}