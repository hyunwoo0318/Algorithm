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
//		//�밢���� �����Ϸ��� (x1,y1), (x2,y2)�� x2 -x1 = y2 - y1�̴�(���� ����)
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
//			//����� �ϳ��� �����ؾ��ϹǷ� arr[cnt]�� ����.
//			//�׸��� i��° �࿡ �ִ´�.
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

