#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int size;
        cin >> size;

        vector<int> arr(size);
        for (auto &value : arr) cin >> value;

        vector<int> suffixMin(size + 1, INT_MAX);

        for (int i = size - 1; i >= 0; i--) {
            suffixMin[i] = min(arr[i], suffixMin[i + 1]);
        }

        long long sumAll = 0, sumMin = 0;

        for (int i = 0; i < size; i++) {
            sumAll += arr[i];
            sumMin += suffixMin[i];
        }

        long long answer = sumAll - sumMin;

        vector<int> leftCount(size);
        stack<int> indexStack;

        for (int i = 0; i < size; i++) {
            while (!indexStack.empty() && arr[indexStack.top()] >= arr[i]) {
                indexStack.pop();
            }

            int previousSmaller = indexStack.empty() ? -1 : indexStack.top();
            leftCount[i] = i - previousSmaller;

            indexStack.push(i);
        }

        long long maxExtra = 0;

        for (int i = 0; i < size; i++) {
            long long extraGain =
                (suffixMin[i + 1] >= arr[i]) ? (long long)leftCount[i] - 1 : -1;

            maxExtra = max(maxExtra, extraGain);
        }

        cout << answer + maxExtra << "\n";
    }

    return 0;
}