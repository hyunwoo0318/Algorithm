//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
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
//	vector<string> temp;
//	for (int i = 0; i < n; i++)
//	{
//		v[i] = i+1;
//	}
//
//	do
//	{
//		string s;
//		for (int i = 0; i < k; i++)
//		{			
//			s += to_string(v[i]);			
//		}
//		temp.push_back(s);		
//	} while (next_permutation(v.begin(), v.end()));
//
//	sort(temp.begin(), temp.end());
//	temp.erase(unique(temp.begin(), temp.end()), temp.end());
//
//	for (int i = 0; i < temp.size(); i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			cout << temp[i][j] << " ";
//		}
//		cout << "\n";
//	}
//
//}