//#include<iostream>
//#include<queue>
//#include<deque>
//
//#define MAX_COST 100040
//
//using namespace std;

// �Ϲ����� bfs Ǯ��

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

// 0-1 bfs Ǯ��


//-- ���� ��簪�� max_cost�� �д�
//1. dq���� �ϳ��� pop_front�Ѵ�.
//2. cost�� ������ �� cost�� �������� �������Ѵ�.
//3. ������ �� ��带 ���� ������ ����ġ�� 1�̸� push_back, 0�̸� push_front�� �Ѵ�.
//4. dq�� ������������Ѵ�.

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