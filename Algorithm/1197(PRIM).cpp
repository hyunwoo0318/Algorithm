//������ķ� ���� (�˰��� �����ð�)
//�׷��� �� �������� vertex�� 10000���� ������ �����Ƿ� ��ȿ������

//#include<iostream>
//#include<vector>
//#define INT_MAX       2147483647
//
//using namespace std;
////weight���� �����ϴ� ������ �迭 ( idx�� edge�� �� vertex�� �ǹ���)
//int w[10000][10000] = {};
////�ش� idx�� vertex�� Ʈ���� �ּҰŸ��� �մ� idx�� ����
//int nearest[10000] = {};
////nearest���� �ش� idx�� �����ϴ� �Ÿ�
//int dist[10000] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int vnear = 1;
//	//MST�� ����ġ�� ��
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
//		//weight�� �ʱ�ȭ�����ֱ�
//		w[a][b] = w[b][a] = c;
//	}
//
//	//�ʱ�ȭ
//	for (int i = 2; i <= v; i++)
//	{
//		nearest[i] = 1; // mst�� 1�ۿ� �����ϱ� �������� 1������
//		dist[i] = w[1][i]; // 1���� �Ÿ��� ����
//	}
//
//	//n-1�� repeat�ϱ� ���ؼ� ����
//	int count = v - 1;
//	while (count--)
//	{
//		int min = INT_MAX;
//		for (int i = 2; i <= v; i++)
//		{
//			//mst�� �߰��� vertex�� vnear�� ã�°���
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

////��������Ʈ ����
//#include<iostream>
//#include<vector>
//#define INT_MAX 2,147,483,647
//
//usi
////����, ����ġ��, ����� �����ϴ� ���� ����
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
//	//�Է��� �޾Ƽ� ����ġ�� �����ϱ�
//	for (int i = 0; i < e; i++)
//	{
//		cin >> a >> b >> c;
//		w[a].push_back(make_pair(b, c));
//	}
//
//	//�ʱ�ȭ
//	for (int i = 2; i <= n; i++)
//	{
//		nearest[i] = 1;
//		dist[i] = 
//	}
//
//}ng namespace std;
