//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//struct Time {
//	int start;
//	int finish;
//};
//
//bool cmp(Time t1, Time t2)
//{
//	if (t1.finish == t2.finish)
//		return t1.start < t2.start;
//	else
//		return t1.finish < t2.finish;
//}
//
//int main()
//{
//	int countNum;
//	cin >> countNum;
//
//	vector<Time> t(countNum);
//	for (int i = 0; i < countNum; i++)
//	{
//		cin >> t[i].start >> t[i].finish;
//	}
//	sort(t.begin(), t.end(), cmp);
//		
//	int cnt = 0;
//	int end = 0;
//
//	for (int i = 0; i < countNum; i++)
//	{
//		if (end <= t[i].start) {
//			end = t[i].finish;
//			cnt++;
//		}
//	}
//	cout << cnt << endl;
//}