#include<bits/stdc++.h>
using namespace std;


    int reverseNum(int n) {
        int rev = 0;
        while (n != 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;

            if(rev > INT_MAX || rev < INT_MIN) 
            return 0;


        }
        return rev;
    }

     int reverseExponentiation(int n) {
        int reverse = reverseNum(n);
        bool One_nibo = true;
        if(reverse == n || n <= 10)
            One_nibo = false; 
        return One_nibo + pow(n, reverse);
     }

int main()
{
    int n; cin>>n;
    cout<<reverseExponentiation(n);
 return 0;
}