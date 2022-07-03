#include<bits/stdc++.h>
using namespace std;

auto main()->int{
    short int a;
    cin>>a;
    if(a>=0 && a<4)
        cout<<"BEBE";
    else if(a<15)
        cout<<"NIÑO";
    else if(a<19)
        cout<<"JOVEN";
    else if(a<66)
        cout<<"ADULTO";
    else 
        cout<<"ADULTO 3RA";

    return 0;
}