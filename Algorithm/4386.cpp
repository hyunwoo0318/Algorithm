//#include<iostream>
//#include<vector>
//#include<limits>
//#define INT_MAX       2147483647
//
//using namespace std;
////weight���� �����ϴ� ������ �迭 ( idx�� edge�� �� vertex�� �ǹ���)
//double w[101][101] = {};
////�ش� idx�� vertex�� Ʈ���� �ּҰŸ��� �մ� idx�� ����
//int nearest[101] = {};
////nearest���� �ش� idx�� �����ϴ� �Ÿ�
//double dist[101] = {};
////��ǥ�� ����
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
//	//MST�� ����ġ�� ��
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
//	//�Ÿ��� ���� ����.
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