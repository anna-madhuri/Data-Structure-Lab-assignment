#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = "AAABBB";
    cout<<text.erase(2-1, 2)<<endl;

    text = "JOHN PAUL JONES";
    cout<<text.erase(6-1, 5)<<endl;

    text = "AAABBB";
    string p = "AA";
    string q = "BB";

    size_t k = text.find(p);
    //text.erase(k, p2.size());
    cout<<text.replace(k, p.size(), q)<<endl;

    text = "JOHN PAUL JONES";
    p = "PAUL";
    q = "DAVID";
    k = text.find(p);

    //text.erase(k, p2.size());
    cout<<text.replace(k, p.size(), q)<<endl;
    //cout<<k<<endl;


    return 0;
}

