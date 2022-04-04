//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, k;
//	cin >> n >> k;
//
//	vector<int> v(n);
//	vector<int> temp(n);
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		v[i] = i + 1;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		temp[i] = 1;
//	}
//
//	do {
//		for (int i = 0; i < n; i++)
//		{
//			if (temp[i] == 1)
//			{
//				cout << v[i] << " ";
//			}
//		}
//		cout << "\n";
//	} while (prev_permutation(temp.begin(), temp.end()));
//}