//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//
//using namespace std;
//
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m, temp;
//	vector<int> v;
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//	}
//
//	sort(v.begin(), v.end(),cmp);
//
//	int lo = 0;
//	//�ִ밳�� -> ���� ������ ���� ������ ����(���� ����� ���� ���� �������� ������ �ֱ⶧����)
//	int hi = v[0];
//	int mid;
//
//	while (lo < hi-1)
//	{
//		int cnt = 0;
//		mid = (lo + hi) / 2;
//		
//		for (int e : v)
//		{
//			double a = (double)e / mid;
//			a = ceil(a);
//			cnt += (int)a;			
//		}
//		//T�� ���
//		if (cnt <= n)
//		{
//			hi = mid;
//		}
//		else
//		{
//			lo = mid;
//		}
//	}
//	cout << hi;
//}