//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
////������� �ʾ������� �Ÿ��� ǥ��
//#define INFINITE 100000000
//
//using namespace std;
//
////����ġ ����
//vector<pair<int, int> > vec[20001];
//
////���������� �ִܰŸ�
//int d[20001];
//
////Ʈ���� ���ԵǾ����� �ƴ��� Ȯ���ϴ� �迭
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
//	//���� Ʈ���� ���Ե������� ������ �Ÿ��� ���� �������� �������ؼ� ���
//	priority_queue<pair<int,int>, vector<pair<int,int> >, cmp  > pq;
//
//	int v, e;
//	cin >> v >> e;
//
//	int k;
//	cin >> k;
//
//	//�ϴ� ��� ����Ǿ����� �ʴٰ� �����ϰ� ����� ������ �� �ٲ��ֱ�
//	fill_n(d, 20001, INFINITE);	
//
//	for (int i = 0; i < e; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		vec[a].push_back(make_pair(b,c));
//		//�������� ����� �ֵ� �� �ٲ��ֱ�
//		//�� ��� ���̿� �������� ������ ������ �����Ƿ� üũ�������
//		if (a == k && d[b] > c)
//		{
//			d[b] = c;			
//		}			
//	}
//
//	//�������� ������ �����Ƿ� �� ��� ���̿� ������ ������ ���Ŀ� pq�� �־����
//	for (int i = 1; i <= v; i++)
//	{
//		if (d[i] != INFINITE)
//			pq.push(make_pair(i, d[i]));
//	}
//
//	//�������� ���� 0��. ->��������
//	d[k] = 0;
//	visited[k] = true;
//
//	//�Ź� �߰��Ǵ� ����� idx��ȣ
//	int s=k;
//	
//	
//	while(!pq.empty())
//	{		
//		//���� ���� �Ÿ� + Ʈ���� ���Ե������� ���� ��带 Ʈ���� ���Խ�Ŵ				
//				s = pq.top().first;
//				//Ʈ���� ���ԵǾ��ٴ� ���� �ִܰŸ��� Ȯ���Ǿ��ٴ� �ǹ��̹Ƿ� ���̻� �����������
//				if (visited[s])
//				{
//					pq.pop();
//					continue;
//				}
//					
//				//���ο� ��� �߰�
//				d[s] = pq.top().second;
//				visited[s] = true;
//				pq.pop();
//		
//		//���� �߰��� ���(s)�� ������ ������ �ϳ��ϳ� Ȯ���غ���.					
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
//	//������
//	for (int i = 1; i <= v; i++)
//	{
//		if (d[i]== INFINITE)
//			cout << "INF\n";
//		else
//			cout << d[i] << "\n";
//	}
//}