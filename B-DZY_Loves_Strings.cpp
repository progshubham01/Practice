#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s;
    cin>>s;
    int k,r=0,ar[1001],x;
    cin>>k;
    for(int i=0;i<26;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        r=r+(i+1)*ar[0];
        if(s[i]=='b')
        r=r+(i+1)*ar[1];
        if(s[i]=='c')
        r=r+(i+1)*ar[2];
        if(s[i]=='d')
        r=r+(i+1)*ar[3];
        if(s[i]=='e')
        r=r+(i+1)*ar[4];
        if(s[i]=='f')
        r=r+(i+1)*ar[5];
        if(s[i]=='g')
        r=r+(i+1)*ar[6];
        if(s[i]=='h')
        r=r+(i+1)*ar[7];
        if(s[i]=='i')
        r=r+(i+1)*ar[8];
        if(s[i]=='j')
        r=r+(i+1)*ar[9];
        if(s[i]=='k')
        r=r+(i+1)*ar[10];
        if(s[i]=='l')
        r=r+(i+1)*ar[11];
        if(s[i]=='m')
        r=r+(i+1)*ar[12];
        if(s[i]=='n')
        r=r+(i+1)*ar[13];
        if(s[i]=='o')
        r=r+(i+1)*ar[14];
        if(s[i]=='p')
        r=r+(i+1)*ar[15];
        if(s[i]=='q')
        r=r+(i+1)*ar[16];
        if(s[i]=='r')
        r=r+(i+1)*ar[17];
        if(s[i]=='s')
        r=r+(i+1)*ar[18];
        if(s[i]=='t')
        r=r+(i+1)*ar[19];
        if(s[i]=='u')
        r=r+(i+1)*ar[20];
        if(s[i]=='v')
        r=r+(i+1)*ar[21];
        if(s[i]=='w')
        r=r+(i+1)*ar[22];
        if(s[i]=='x')
        r=r+(i+1)*ar[23];
        if(s[i]=='y')
        r=r+(i+1)*ar[24];
        if(s[i]=='z')
        r=r+(i+1)*ar[25];
    }
    sort(ar,ar+26,greater<int>());
    x=s.length();
    for(int i=x;i<x+k;i++)
    {
        r=r+(i+1)*ar[0];
    }
    cout<<r;
    
}