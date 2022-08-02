//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<math.h>
//
//using namespace std;
//
//vector<int> v;
//
//int main()
//{
//	int N, x;
//	int ans = 0;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//	
//	cin >> x;
//
//	sort(v.begin(), v.end());
//
//	int first,last;
//	first = 0;
//	last = N - 1;
//
//	int temp1, temp2;
//
//	while (first < last)
//	{
//		//정답일경우
//		if (v[first] + v[last] == x)
//		{
//			ans++;
//			first++;
//			last--;
//		}
//		//정답이 아닐경우
//		else
//		{
//			temp1 = v[first + 1] + v[last];
//			temp2 = v[first] + v[last - 1];
//
//			if (abs(temp1 - x) < abs(temp2 - x))
//				first++;
//			else
//				last--;
//		}
//	}
//	cout << ans;
//}