#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, row, col;

    for(int i = 0; i <= 4; i++)
    {
        for(int j = 0; j <= 4; j++)
        {
            cin >> x;

            if(x == 1)
            {
                
              cout<<abs(i-2)+abs(j-2)<<endl;  
            }
        }
    }
   

    return 0;
}