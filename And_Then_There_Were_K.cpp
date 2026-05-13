#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int answer =1;
        while (answer*2<=n)
        {
            answer*=2;
        }
        cout<<answer-1<<endl;
    }
 return 0;
}