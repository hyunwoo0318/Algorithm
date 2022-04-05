//#include <iostream>
//#include <vector>
//using namespace std;
//
//int sd[9][9];
//vector<pair<int, int>> v;
//bool flag = false;
//
//bool isSetNum(int row, int col) {
//    int cur = sd[row][col];
//
//    ����
//    for (int i = 0; i < 9; i++) {
//        if (i == col) continue;
//        if (cur == sd[row][i]) return false;
//    }
//
//    ����
//    for (int i = 0; i < 9; i++) {
//        if (i == row) continue;
//        if (cur == sd[i][col]) return false;
//    }
//
//    3x3 ���簢��
//    int r = row / 3;
//    int c = col / 3;
//
//    for (int i = r * 3; i < r * 3 + 3; i++) {
//        for (int j = c * 3; j < c * 3 + 3; j++) {
//            if (i == row && j == col) continue;
//            if (cur == sd[i][j])    return false;
//        }
//    }
//
//    return true;
//}
//
//void backtrack(int cur) {
//    if ((int)v.size() == cur) {
//        for (int i = 0; i < 9; i++) {
//            for (int j = 0; j < 9; j++)
//                cout << sd[i][j] << " ";
//            cout << endl;
//        }
//        flag = true;
//        return;
//    }
//
//    for (int i = 1; i <= 9; i++) {
//        sd[v[cur].first][v[cur].second] = i; //���� �ֱ�
//        if (isSetNum(v[cur].first, v[cur].second)) { //���� ��ġ���� �� ������ ��ȿ�� �Ǵ�
//            backtrack(cur + 1);
//            if (flag) return; //������ �ϼ��� ��� ����
//        }
//        sd[v[cur].first][v[cur].second] = 0; //��ȿ�� ���ڰ� �ƴ� ��� �� ����ֱ�
//    }
//}
//
//int main() {
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            cin >> sd[i][j];
//            if (!sd[i][j])
//                v.push_back(make_pair(i, j));
//        }
//    }
//
//    backtrack(0);
//
//    return 0;
//}