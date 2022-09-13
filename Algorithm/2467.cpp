//#include<iostream>
//#include<vector>
//#include<cstdlib>
//
//#define maxNum 2000000050
//
//using namespace std;
//
//int main()
//{
//	int n, temp;
//	vector<int> v;
//	cin >> n;
//
//	int plus=-1;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//		//양수로 변하는 지점을 확인하기
//		if (temp > 0 && plus == -1)
//			plus = i;
//	}
//
//	//다 음수인경우
//	if (plus == -1)
//	{
//		cout << v[n - 2] << " " << v[n - 1];
//		return 0;
//	}
//	
//	//다 양수인경우
//	if (v[0] >= 0)
//	{
//		cout << v[0] << " " << v[1];
//		return 0;
//	}
//
//
//	//음수 양수가 여러개 나오는 경우
//	//음수의 idx
//	int ansNum = maxNum;
//	pair<int, int> ansPair;
//
//	for (int i = 0; i < plus; i++)
//	{
//		int val = v[i];
//		int lo = plus;
//		int hi = n - 1;
//		int mid;
//
//		//만일 합이 0인 경우를 찾으면 끝낸다.
//		if (v[lo] + val == 0)
//		{
//			cout << val << " " << v[lo];
//			return 0;
//		}
//			
//		if (v[hi] + val == 0)
//		{
//			cout << val << " " << v[hi];
//			return 0;
//		}
//			
//		//제일 작은수가 val의 절댓값보다 크거나 같으면 이분탐색을 돌릴 필요없다.
//		if (v[lo] + val >= 0)
//		{
//			if (ansNum > abs(val + v[lo]))
//			{
//				ansNum = abs(val + v[lo]);
//				ansPair = { v[i], v[lo] };
//			}
//			continue;
//		}
//
//		while (lo < hi - 1)
//		{
//			mid = (lo + hi) / 2;
//			if (val + v[mid] > 0)
//				hi = mid;
//			else
//				lo = mid;
//		}
//
//		if (abs(val + v[lo]) < abs(val + v[hi]))
//		{
//			if (ansNum > abs(val + v[lo]))
//			{
//				ansNum = abs(val + v[lo]);
//				ansPair = { v[i], v[lo] };
//			}
//		}
//		else
//		{
//			if (ansNum > abs(val + v[hi]))
//			{
//				ansNum = abs(val + v[hi]);
//				ansPair = { v[i], v[hi] };
//			}
//		}
//
//	}		
//
//	//양수나 음수끼리 더해서 더 작은경우를 찾는 코드
//	if (plus >= 2)
//	{
//		if (ansNum > abs(v[plus - 1] + v[plus - 2]))
//		{
//			ansNum = abs(v[plus - 1] + v[plus - 2]);
//			ansPair = { v[plus - 2], v[plus - 1] };
//
//		}
//	}
//
//	if (plus + 1 <= n - 1)
//	{
//		if (ansNum > abs(v[plus + 1] + v[plus]))
//		{
//			ansNum = abs(v[plus] + v[plus + 1]);
//			ansPair = { v[plus], v[plus + 1] };
//		}
//	}
//
//	cout << ansPair.first << " " << ansPair.second;
//
//}
