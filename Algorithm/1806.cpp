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
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, a, x;
//	
//	int ans = 1000000;
//	cin >> n >> x;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		v.push_back(a);
//	}	
//		
//	int start = 0;
//	int end = 1;
//	int sum = v[0];
//
//
//	while (start <= end)
//	{
//		//마지막에 도달한경우 작으면 끝내고 안작으면 하나씩 줄여보기
//		if (end == n)
//		{
//			if (sum < x)
//				break;
//			else
//			{
//				sum -= v[start];
//				start++;
//				if (ans > end - start)
//					ans = end - start;
//			}
//		}
//		//부분합이 원하는 값보다 작음 -> end를 늘려야함
//		else if (sum < x)
//		{
//			sum += v[end];
//			end++;
//		}
//		//부분합이 원하는 값보다 큼 -> start를 늘려줘야함
//		else
//		{
//			sum -= v[start];
//			start++;
//			if (ans > end - start)
//				ans = end - start;
//		}		
//	}
//	if (ans != 1000000)
//		cout << ans + 1;
//	else
//		cout << 0;
//
//}