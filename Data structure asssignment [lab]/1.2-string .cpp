#include <bits/stdc++.h>
using namespace std;

int main()
{

    string t = "AAAAA";
    string temp = "AAAAA";

    string st = "BBB";

    t.insert(1-1, st);
    cout<<t<<endl;

    t = temp;
    t.insert(3-1, st);
    cout<<t<<endl;

    t = temp;
    t.insert(6-1, st);
    cout<<t<<endl;


    return 0;
}

