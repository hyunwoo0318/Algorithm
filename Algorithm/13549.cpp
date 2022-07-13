//#include<iostream>
//#include<queue>
//#include<deque>
//
//#define MAX_COST 100040
//
//using namespace std;

// 일반적인 bfs 풀이

//bool visited[100001] = { false };
//int check[100001] = {};
//
//int main()
//{
//	queue<int> q;
//	int n, k;
//	cin >> n >> k;
//	int ans = 0;
//
//	q.push(n);
//	visited[n] = true;
//	while (!q.empty())
//	{
//		int qs = q.size();
//		for (int j = 0; j < qs; j++)
//		{
//			int temp = q.front();
//			if (temp == k)
//			{
//				cout << ans - check[temp];
//				return 0;
//			}
//			q.pop();			
//			
//			if (!visited[temp * 2] && temp != 0 && temp * 2 <= 100000)
//			{
//				q.push(temp * 2);
//				visited[temp * 2] = true;
//				check[temp * 2] = check[temp] + 1;
//			}				
//					
//			if (!visited[temp - 1] && temp >=1 && temp -1 <=100000)
//			{
//					q.push(temp - 1);
//					visited[temp - 1] = true;
//					check[temp - 1] = check[temp];
//			}
//
//			if (!visited[temp + 1] && temp + 1 <= 100000)
//			{
//					q.push(temp + 1);
//					visited[temp + 1] = true;
//					check[temp + 1] = check[temp];
//			}
//			
//			
//		}
//		ans++;
//	}
//}

// 0-1 bfs 풀이


//-- 먼저 모든값을 max_cost로 둔다
//1. dq에서 하나를 pop_front한다.
//2. cost의 갱신이 더 cost가 낮아지면 갱신을한다.
//3. 갱신을 한 노드를 향한 간선의 가중치가 1이면 push_back, 0이면 push_front를 한다.
//4. dq가 비워질때까지한다.

//int cost[100001] = {};
//
//
//int main()
//{
//	int n, k;
//	deque<int> dq;
//
//	cin >> n >> k;
//
//	fill_n(cost, 100001, MAX_COST);
//
//	dq.push_front(n);
//	cost[n] = 0;
//
//	while (!dq.empty())
//	{
//		int x = dq.front();
//		dq.pop_front();
//
//		if (x == k)
//			cout << cost[k];
//
//		if (x * 2 <= 100000 && cost[x] < cost[x * 2])
//		{
//			cost[x * 2] = cost[x];
//			dq.push_front(x * 2);
//		}
//
//		if ( x + 1 <= 100000 && cost[x] + 1 < cost[x + 1] )
//		{
//			cost[x + 1] = cost[x] + 1;
//			dq.push_back(x +1);
//		}
//
//		if (x > 0 && x - 1 <= 100000 && cost[x] + 1 < cost[x - 1])
//		{
//			cost[x - 1] = cost[x] + 1;
//			dq.push_back(x -1);
//		}
//	}
//
//	
//}