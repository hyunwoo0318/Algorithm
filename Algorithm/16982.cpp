//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//vector<int> v[101] ;
//queue<int> q;
//int cnt = 0;
//int path[101] = { };
//
//void bfs()
//{
//	q.push(1);
//	path[1] = 0;
//	while (!q.empty())
//	{		
//				int temp = q.front();
//			q.pop();
//			
//				for (int i = 0; i < v[temp].size(); i++)
//				{
//					int x = v[temp][i];
//					if (x > 100)
//						continue;
//					else
//					{
//						
//						if (path[x] == -1)
//						{
//							//사다리나 뱀인경우
//							if (v[x].size() == 1)
//							{
//								path[x] = path[temp]+1;
//								if (path[v[x][0]] == -1)
//								{
//									path[v[x][0]] = path[x];
//									q.push(v[x][0]);
//								}									
//								
//							}
//							else
//							{
//								path[x] = path[temp] + 1;
//								q.push(x);
//							}							
//						}
//					}
//				}				
//	}
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	fill_n(path, 101, -1);
//
//	for (int i = 1; i <= 100; i++)
//	{
//		for (int j = 1; j <= 6; j++)
//		{			
//				v[i].push_back(i + j);			
//		}		
//	}
//
//	for (int i = 0; i < n + m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		v[a].clear();
//		v[a].push_back(b);
//	}
//
//	bfs();	
//	cout << path[100];
//
//	
//}