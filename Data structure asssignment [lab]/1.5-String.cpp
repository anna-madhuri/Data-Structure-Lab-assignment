#include <bits/stdc++.h>
using namespace std;

int main()
{

    string p= "ab";
    string q = "aaa";
    string T1 = "ababababab";
    string T2 = "abaabbaaabbbaaaabbbb";

    int i, k = 0;
    int mx = T1.size() - p.size() + 1;
    int cnt = 0;

    for (k = 0; k <= mx; )
    {
        for (i = 0; i < p.size(); i++)
        {
            if (p[i] != T1[k+i-1]) break;
        }
        if (i == p.size()) cnt++;

        k++;
    }
    cout<<"p appears "<<cnt<<" time(s) in T1."<<endl;

    k = 0;
    mx = T2.size() - q.size() + 1;
    cnt = 0;

    for (k = 0; k <= mx; )
    {
        for (i = 0; i < q.size(); i++)
        {
            if (q[i] != T2[k+i-1]) break;
        }
        if (i == q.size()) cnt++;

        k++;
    }
    cout<<"q appears "<<cnt<<" time(s) in T2."<<endl;


    return 0;
}


