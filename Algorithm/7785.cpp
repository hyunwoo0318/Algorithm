//#include<iostream>
//#include<set>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//
//	int countNum;
//	cin >> countNum;
//
//	set<string> s_enter;
//	
//	for (int i = 0; i < countNum; i++)
//	{
//		string name;
//		string log;
//
//		cin >> name >> log;
//
//		if (log == "enter")
//		{
//			s_enter.insert(name);
//		}
//		else if(log == "leave")
//		{   
//			s_enter.erase(name);
//			
//		}
//	}
//	set<string>::reverse_iterator ritr;
//	for (ritr = s_enter.rbegin(); ritr != s_enter.rend(); ritr++)
//	{
//		cout << *ritr << '\n';
//	}
//}