#include <bits/stdc++.h>

using namespace std;

int calc(string s)
{
    if (s.size() > 9) return 0;
    long long n = 0;
    for(char i : s)
    {
        if (!isdigit(i)) return 0;
    	n = n*10 + i - '0';
    }
	if (n < 2147483647) return (int) n;
	return 0;
}

int main ()
{
    ifstream fp;
    fp.open("DATA.in");
//    ifstream fp("Data.in.txt");
    string s;
    long long ans = 0;
    while(fp >> s)
    {
        ans += calc(s);
    }
    cout << ans;
}