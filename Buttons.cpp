#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a , b, c;
        cin>>a>>b>>c;
        
        int anna = (c + 1) / 2;
        int katie = c / 2;
        if(a + anna > b + katie)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    return 0;


}