#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int emo[8][5];

vector<vector<int> > seq;

void makeSeq(int size)
{
    for (int i1 = 0; i1 < size; i1++)
    {
        for (int i2 = 0; i2 < size; i2++)
        {
            for (int i3 = 0; i3 < size; i3++)
            {
                for (int i4 = 0; i4 < size; i4++)
                {
                    for (int i5 = 0; i5 < size; i5++)
                    {
                        vector<int> temp = { i1,i2,i3,i4,i5 };
                        seq.push_back(temp);
                    }
                }
            }
        }
    }
}


vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {

    int maxMember = 0;
    int maxSell = 0;

    for (int i = 0; i < emoticons.size(); i++)
    {
        int temp = emoticons[i];
        emo[i][0] = temp;
        emo[i][1] = temp * (0.9);
        emo[i][2] = temp * (0.8);
        emo[i][3] = temp * (0.7);
        emo[i][4] = temp * (0.6);
    }

    makeSeq(emoticons.size());

    for (int idx = 0; idx < seq.size() - 1; idx++)
    {
        vector<int> v = seq[idx];
        for (int i = 0; i < users.size(); i++)
        {
            int percent = users[i][0];
            int sell = users[i][1];
            int sum = 0;

            for (int j = 0; j < v.size(); j++)
            {

            }

            
        }
    }


    vector<int> answer;
    return answer;
}