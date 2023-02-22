//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<string>
//#include<sstream>
//
//using namespace std;
//
//map<string, int> m;
//
//vector<string> split(string input, char delimeter)
//{
//    vector<string> ret;
//    stringstream ss(input);
//    string temp;
//
//    while (getline(ss, temp, delimeter)) {
//        ret.push_back(temp);
//    }
//    return ret;
//}
//
//void setMap(vector<string> terms)
//{
//    for (string s : terms)
//    {
//        vector<string> temp = split(s, ' ');
//        int val = stoi(temp[1]);
//        m.insert({ temp[0], val });
//    }
//}
//
//int findMinDate(string s1, string s2)
//{
//    int ret = 0;
//    vector<string> t1 = split(s1, '.');
//    vector<string> t2 = split(s2, '.');
//
//    vector<int> today, check;
//
//    for (string s : t1)
//    {
//        check.push_back(stoi(s));
//    }
//    for (string s : t2)
//    {
//        today.push_back(stoi(s));
//    }
//
//    //달 비교 -> 크면 
//    if (today[1] >= check[1])
//    {
//        ret += (today[0] - check[0]) * 12;
//        ret += (today[1] - check[1]);
//        if (today[2] <= check[2])
//            ret--;
//    }
//    else
//    {
//        today[0]--;
//        today[1] += 12;
//
//        ret += (today[0] - check[0]) * 12;
//        ret += (today[1] - check[1]);
//        if (today[2] <= check[2])
//            ret--;
//    }
//    return ret + 1;
//
//}
//
//vector<int> findSol(vector<string> v, string today)
//{
//    vector<int> ret;
//    for (int i=0;i<v.size();i++)
//    {
//        vector<string> temp = split(v[i], ' ');
//        int minDate = findMinDate(temp[0],today);
//        int val = m.find(temp[1])->second;
//        if (minDate > val)
//            ret.push_back(i + 1);
//    }
//    return ret;
//}
//
//vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
//    
//    setMap(terms);    
//    vector<int> answer = findSol(privacies,today);
//    return answer;
//}
//
//int main()
//{
//	
//}