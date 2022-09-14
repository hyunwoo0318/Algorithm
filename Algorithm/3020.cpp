//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////종유석
//vector<int> v1;
////석순
//vector<int> v2;
//int n, h, temp;
//int ans = 1000000;
//int ansCnt = 0;
//
//int findBreakCnt(int x)
//{
//	//석순 -> 길이가 x이상인 것들은 다 잘림 -> n/2에서 x-1까지의 개수를 빼주면 됨.
//	int cntA = lower_bound(v2.begin(),v2.end(),x) - v2.begin();
//	cntA = n / 2 - cntA;
//	
//
//	//종유석 -> 
//	int cntB = upper_bound(v1.begin(), v1.end(), x-1) - v1.begin();
//	
//
//	return cntA + cntB;
//}
//
//int main()
//{
//	
//	cin >> n >> h;		
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		if (i % 2 != 0)
//			v1.push_back(-temp);
//		else
//			v2.push_back(temp);
//	}
//
//	
//	sort(v1.begin(), v1.end());
//	sort(v2.begin(), v2.end());
//
//	//종유석 길이 조정
//	for (int i = 0; i < n / 2; i++)
//	{
//		v1[i] += h;
//	}
//	
//
//	for(int i=1;i<=h;i++)
//	{				
//		int tempAns = findBreakCnt(i);
//		if (tempAns == ans)
//			ansCnt++;
//		if (tempAns < ans)
//		{
//			ansCnt = 1;
//			ans = tempAns;
//		}
//		
//	}
//	cout << ans << " " << ansCnt;
//} 