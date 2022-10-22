//#include<iostream>
//#include<string>
//#include<map>
//#include<deque>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//
//using namespace std;
//
//bool cmp(pair<char, int> v1, pair<char, int> v2)
//{
//	return v1.second > v2.second;
//}
//
//int main()
//{
//	int n;
//	string input;
//	map<char, int> m;
//	deque<char> dq;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		int temp = input.size()-1;
//		for (int j = 0; j < input.size(); j++)
//		{
//			if (m.count(input[j])==0) // 아직 없는경우
//			{
//				m[input[j]] = pow(10, temp);
//			}
//			else
//				m[input[j]] += pow(10, temp);
//			temp--;
//		}
//	}
//
//	//value를 기준으로 정렬만 하면됨.
//	//이걸또 pair 벡터로 빼서 정렬하면 되긴하는데 더 좋은 방법이 있나?
//	//이 방법이 제일 좋음 map-> vector복사후 정렬
//
//	vector<pair<char, int>> v(m.begin(), m.end());
//	sort(v.begin(), v.end(), cmp);
//	int num = 9;
//	int ans = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		ans += v[i].second * num;
//		num--;
//	}
//	cout << ans;
//
//}