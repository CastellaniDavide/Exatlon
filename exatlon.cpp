/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <bits/stdc++.h>
using namespace std;


// constraints
#define MAXN 1010

// input data
int N;
long cont_rosso, cont_blu;
char board[MAXN][MAXN];
vector< vector<bool> >mat_rossa;
vector< vector<bool> >mat_blu;


int conta(vector<bool> vec, bool colore) {
    long cont = 0;
    for(int i = 0; i < N; i++) {
        if(vec[i] == colore)
            cont++;
    }
    return cont;
}

bool sortbyred(vector<bool> vec1, vector<bool> vec2) {
    return(conta(vec1, true) < conta(vec2, true));
}
bool sortbyblue(vector<bool> vec1, vector<bool> vec2) {
    return(conta(vec1, false) < conta(vec2, false));
}

int main() {
//  uncomment the following lines if you want to read/write from files
  freopen("input0.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    cin>>N;
    for (int i=0; i<N; i++) {
        string s;
        cin>>s;

        vector<bool> temp(N);
        for(int j = 0; j < N; j++) {
            if(s[j] == 'A')
                temp[j] = false;
            else
                temp[j] = true;
        }
        mat_rossa.push_back(temp);
        mat_blu.push_back(temp);
        sort(mat_rossa.begin(), mat_rossa.end(), sortbyred);

    }

    return 0;
}
