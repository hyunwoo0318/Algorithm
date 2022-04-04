//#include<iostream>
//
//using namespace std;
//
//int arr[15];
//int n;
//int ans = 0;
//
//bool check(int a)
//{
//	for (int i = 0; i < a; i++)
//	{
//		//대각선을 만족하려면 (x1,y1), (x2,y2)면 x2 -x1 = y2 - y1이다(각각 절댓값)
//		if (arr[i] == arr[a] || abs(arr[i] - arr[a]) == abs(i - a))
//			return false;		
//	}	
//	return true;
//}
//
//void dfs(int cnt)
//{
//	if (cnt == n)
//		ans++;
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			//한행당 하나씩 존재해야하므로 arr[cnt]를 쓴다.
//			//그리고 i번째 행에 넣는다.
//			arr[cnt] = i;
//			if (check(cnt))
//				dfs(cnt + 1);
//		}
//	}
//}
//
//int main()
//{	
//	cin >> n;
//	dfs(0);
//	cout << ans;
//
//}

