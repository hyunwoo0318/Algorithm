//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////������
//vector<int> v1;
////����
//vector<int> v2;
//int n, h, temp;
//int ans = 1000000;
//int ansCnt = 0;
//
//int findBreakCnt(int x)
//{
//	//���� -> ���̰� x�̻��� �͵��� �� �߸� -> n/2���� x-1������ ������ ���ָ� ��.
//	int cntA = lower_bound(v2.begin(),v2.end(),x) - v2.begin();
//	cntA = n / 2 - cntA;
//	
//
//	//������ -> 
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
//	//������ ���� ����
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