//#include<iostream>
//#include<stack>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	vector<int>v;
//	vector<char> ans;
//	stack<int> st;
//	bool fail = false;
//	int N;
//	cin >> N;
//	v.resize(N);
//	for (int i = 0; i <N; i++)
//	{
//		int a;
//		cin >> a;
//		v[i] = a;
//	}
//
//	//v에서 꺼낼때 사용할 인덱스
//	int idx = 0;
//
//	//1~n의 숫자 이용
//	int num = 2;
//	st.push(1);
//	ans.push_back('+');
//	while (1)
//	{	
//		if (idx == N)
//			break;
//		if (num > N)
//		{
//			if (st.top() != v[idx])
//			{
//				fail = true;
//				break;
//			}
//			else
//			{
//				st.pop();
//				idx++;
//				ans.push_back('-');
//			}
//		}
//		else
//		{
//			if (st.empty() || st.top() != v[idx])
//			{
//				st.push(num);
//				num++;
//				ans.push_back('+');
//			}
//			else if (st.top() == v[idx])
//			{
//				st.pop();
//				idx++;
//				ans.push_back('-');
//			}
//		}
//		
//
//
//	}
//
//	if (fail)
//		cout << "NO\n";
//	else
//	{
//		for (int i = 0; i < ans.size(); i++)
//		{
//			cout << ans[i] << "\n";
//		}
//	}
//}
