#include <bits/stdc++.h>

using namespace std;

bool condition(string a, string b)
{
    return a.size() > b.size();
}

void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end(), condition);

    int cnt=0;
    for (int i=0; i<a.size(); i++)
    {
        for (int j=i+1; j<a.size(); j++)
        {
            if (a[i]==a[j])
            {
                cnt+=2;
                continue;
            }
            if (a[i].find(a[j]) != string::npos)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}

int main ()
{
    solve();
}

// giá trị npos giống như là null ấy. delim.find(c) nếu ko tìm thấy c trong delim thì cũng phải trả về 1 giá trị size_t nào đó (bình thường nếu tìm thấy c trong delim thì giá trị này là vị trí của c trong delim), nên ở đây phải tạo 1 giá trị “ma” là npos tượng trưng cho vị trí của c trong delim khi c ko có trong delim

// ví dụ
// “ccc”.find(‘c’) trả về 0 là vị trí ký tự ‘c’ đầu tiên
// “abc”.find(‘c’) trả về 2
// “aaa”.find(‘c’) trả về npos vì ko tìm thấy ‘c’ trong “aaa”