#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int size;
        cin >> size;

        vector<int> twoGroup, threeGroup, sixGroup, neutralGroup;

        while(size--){
            int value;
            cin >> value;

            bool isEven = (value % 2 == 0);
            bool isDiv3 = (value % 3 == 0);

            if(isEven && isDiv3)
                sixGroup.push_back(value);
            else if(isEven)
                twoGroup.push_back(value);
            else if(isDiv3)
                threeGroup.push_back(value);
            else
                neutralGroup.push_back(value);
        }

        for(int x : twoGroup) cout << x << " ";
        for(int x : neutralGroup) cout << x << " ";
        for(int x : threeGroup) cout << x << " ";
        for(int x : sixGroup) cout << x << " ";

        cout << endl;
    }
}