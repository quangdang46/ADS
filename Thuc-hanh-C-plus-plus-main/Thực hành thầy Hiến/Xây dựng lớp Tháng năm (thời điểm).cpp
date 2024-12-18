// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

class thangnam
{
private:
    int thang, nam;
    friend thangnam Thangnam(char* s);
public:
    thangnam()
    {
        this -> thang  = 0;
        this -> nam = 0;
    }
    
    thangnam(int thang, int nam)
    {
        this -> thang = thang;
        this -> nam = nam;
    }
    
    void nhapbp()
    {
        cin >> this -> thang >> this -> nam;
    }
    
    void xemmh()
    {
        cout << "thang " << this -> thang << " nam " << this -> nam << endl;
    }
    
    operator char*()
    {
        thangnam tmp;
        tmp.thang = thang;
        tmp.nam = nam;
        char *s = new char[105];
        stack<int> st;
        while(tmp.thang)
        {
            st.push(tmp.thang % 10);
            tmp.thang /= 10;
        }
        char tmpc[] = "thang ";
        strcat(s, tmpc);
        int i = 6;
        while(!st.empty())
        {
            s[i] = st.top() + '0';
            st.pop();
            ++i;
        }
        char tmp2[] = " nam ";
        i += 5;
        strcat(s, tmp2);
        while(tmp.nam)
        {
            st.push(tmp.nam % 10);
            tmp.nam /= 10;
        }
        while(!st.empty())
        {
            s[i] = st.top() + '0';
            st.pop();
            ++i;
        }
        return s;
    }
    
    friend thangnam operator +(thangnam a, int n)
    {
        int tmp = a.thang;
        tmp += a.nam * 12;
        tmp += n;
        a.nam = tmp / 12;
        a.thang = tmp - a.nam * 12;
        if(a.thang == 0)
        {
            a.thang = 12;
            --a.nam;
        }
        return a;
    }
    
    friend thangnam operator -(thangnam a, int n)
    {
        int tmp = a.thang;
        tmp += a.nam * 12;
        tmp -= n;
        a.nam = tmp / 12;
        a.thang = tmp - a.nam * 12;
        if(a.thang == 0)
        {
            a.thang = 12;
            --a.nam;
        }
        return a;
    }
    
    bool operator >(thangnam b)
    {
        if(nam > b.nam) return 1;
        if(nam < b.nam) return 0;
        if(thang > b.thang) return 1;
        return 0;
    }
    
    thangnam(char* s)
    {
        int tmp = 0;
        int i = 0;
        while(!isdigit(s[i])) ++i;
        while(isdigit(s[i]))
        {
            tmp = tmp * 10 + s[i] - '0';
            ++i;
        }
        thang = tmp;
        tmp = 0;
        while(!isdigit(s[i])) ++i;
        while(isdigit(s[i]))
        {
            tmp = tmp * 10 + s[i] - '0';
            ++i;
        }
        nam = tmp;
    }
};

int main()
{
    thangnam a, b(10, 2021), c;
    a.nhapbp();
    a.xemmh();
    c = thangnam((char*)"thang 11 nam 2021");
    c.xemmh();
    cout << (char*)(c) << endl;
    c = a + 20;
    c.xemmh();
    if(a > b) cout << "a > b" << endl;
    else cout << "a < b" << endl;
    return 0;
}

