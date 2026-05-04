#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> v(n);

    for(long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long min_value= LLONG_MAX;
     
    for(long long i = 0; i < n; i++)
    {
         min_value= min(min_value,abs(v[i]));
       
    }
     
    

    cout <<min_value<< endl;

    return 0;
}