#include<bits/stdc++.h>
using namespace std;

auto main()->int{
    int a,b,c;
    cin>>a>>b>>c;
    a<b ? cout<<"True " : cout<<"False ";
    c>a ? cout<<"True " : cout<<"False ";
    a==b ? cout<<"True " : cout<<"False ";
    a!=c ? cout<<"True " : cout<<"False ";
    c<=b ? cout<<"True " : cout<<"False "; 
    return 0;
}