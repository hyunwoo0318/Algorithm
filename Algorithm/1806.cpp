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
//		//�������� �����Ѱ�� ������ ������ �������� �ϳ��� �ٿ�����
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
//		//�κ����� ���ϴ� ������ ���� -> end�� �÷�����
//		else if (sum < x)
//		{
//			sum += v[end];
//			end++;
//		}
//		//�κ����� ���ϴ� ������ ŭ -> start�� �÷������
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