#include <bits/stdc++.h>

using namespace std;

int k = 0;

class SinhVien
{
public:
    string id, name, love, date;
    float gpa;

public:
    SinhVien()
    {
        id = "B20DCCN0";
        name = "";
        love = "";
        gpa = 0;
    }

    friend istream &operator>>(istream &is, SinhVien &sv)
    {
        // cin.ignore(1); Dùng scanf mới AC thật vl
        scanf("\n");
        k++;
        if (k < 10)
            sv.id = sv.id + "0" + to_string(k);
        else
            sv.id = sv.id + to_string(k);
        getline(cin, sv.name);
        cin >> sv.love >> sv.date >> sv.gpa;
        return is;
    }

    friend ostream &operator<<(ostream &os, SinhVien sv)
    {
        if (sv.date[1] == '/')
            sv.date = "0" + sv.date;
        if (sv.date[4] == '/')
            sv.date.insert(3, "0");

        if (iswlower(sv.name[0]))
            sv.name[0] = toupper(sv.name[0]);
        for (int i = 1; i < sv.name.size(); i++)
        {
            if (isalpha(sv.name[i]) && sv.name[i - 1] == ' ')
                sv.name[i] = toupper(sv.name[i]);
            else
                sv.name[i] = tolower(sv.name[i]);
        }

        cout << sv.id << " " << sv.name << " " << sv.love << " ";
        cout << sv.date << " " << fixed << setprecision(2) << sv.gpa;
        cout << endl;
        return os;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds+n, cmp);
}

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}