//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//vector<int> v;
//
//int main()
//{
//	int N;
//	int cnt = 0;
//
//	cin >> N;
//	
//
//	for (int i = 0; i < N; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	sort(v.begin(), v.end());
//
//
//	int first = 0;
//	int last = N - 1;
//	int lowValue = 2000000001;
//	pair<int, int> ans;
//
//	while (first < last)
//	{
//		if (lowValue == 0)
//		{
//			break;
//		}
//		else
//		{
//			if (abs(v[first] + v[last]) < lowValue)
//			{
//				//���� ����
//				ans.first = v[first];
//				ans.second = v[last];
//				lowValue = abs(v[first] + v[last]);
//			}
//				
//				//first, last �̵�
//			if (abs(v[first + 1] + v[last]) < abs(v[first] + v[last - 1]))
//				first++;
//			else
//				last--;
//		}
//
//	}
//	cout << ans.first << " " << ans.second;
//}