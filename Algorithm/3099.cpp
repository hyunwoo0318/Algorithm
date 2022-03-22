//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	pair<int, int> x1;
//	pair<int, int> x2;
//	pair<int, int> x3;
//	pair<int, int> t;
//
//	cin >> x1.first >> x1.second;
//	cin >> x2.first >> x2.second;
//	cin >> x3.first >> x3.second;
//
//	if (x1.first == x2.first)
//		t.first = x3.first;
//	else if (x1.first == x3.first)
//		t.first = x2.first;
//	else
//		t.first = x1.first;
//
//	if (x1.second == x2.second)
//		t.second = x3.second;
//	else if (x1.second == x3.second)
//		t.second = x2.second;
//	else
//		t.second = x1.second;
//
//	cout << t.first << " " << t.second << endl;
//}