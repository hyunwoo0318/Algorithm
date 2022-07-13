//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int findGcm(int a, int b)
//{
//	int temp = 1;
//	for (int i = 1; i <= min(a,b); i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			temp = i;
//	}
//	return a * b / temp;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	cin >> n;
//
//	vector<int> v;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	int first = v.front();
//	for (int i = 1; i < v.size(); i++)
//	{
//		int gcm = findGcm(first, v[i]);
//		cout <<gcm / v[i] << "/" << gcm / first << "\n";
//	}
//}