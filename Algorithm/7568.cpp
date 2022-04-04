//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<pair<int, int> > vp;
//	vector<int> grade(n,1);
//	for (int i = 0; i < n; i++)
//	{
//		int a,b;
//		cin >> a >> b;
//		vp.push_back(make_pair(a, b));
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)
//				continue;
//			//나보다 큰놈이 있으면 등수를 하나 올려야함.
//			else if (vp[i].first < vp[j].first && vp[i].second < vp[j].second)
//			{
//				grade[i]++;
//			}
//		}
//	}
//
//	for (int a = 0; a< n;a++)
//	{
//		cout << grade[a] << " ";
//	}
//}
//
