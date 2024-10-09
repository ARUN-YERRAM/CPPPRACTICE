#include<bits/stdc++.h>
using namespace std;

// Top-down Memoization (Recursive)
int Recrse(int size[], int values[], int n, int rodLength, vector<vector<int>>& t) {
    if (n == 0 || rodLength == 0) return 0; // Base case: no more pieces or no more rod length

    if (t[n][rodLength] != -1) return t[n][rodLength]; // Return already computed value

    // If the current piece size is less than or equal to the remaining rod length
    if (size[n-1] <= rodLength) {
        // Include the current piece and don't reduce n (reuse piece) or exclude the piece
        return t[n][rodLength] = max(values[n-1] + Recrse(size, values, n, rodLength-size[n-1], t),
                                     Recrse(size, values, n-1, rodLength, t));
    } else {
        // Exclude the current piece
        return t[n][rodLength] = Recrse(size, values, n-1, rodLength, t);
    }
}


// Bottom-up Tabulation (Iterative)
int Tabulation(int size[], int values[], int n, int rodLength) {
    vector<vector<int>> t(n+1, vector<int>(rodLength+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= rodLength; j++) {
            if (size[i-1] <= j) {
                // Include the current piece or exclude it
                t[i][j] = max(values[i-1] + t[i][j-size[i-1]], t[i-1][j]);
            } else {
                // Exclude the current piece
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][rodLength]; // Maximum value we can get for the rod of length rodLength
}

int main() {
    int n, rodLength;
    cout << "Enter number of pieces and the length of the rod: ";
    cin >> n >> rodLength;

    int size[n], values[n];
    
    cout << "Enter sizes of pieces: ";
    for (int i = 0; i < n; i++) {
        cin >> size[i];
    }

    cout << "Enter values of pieces: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    // Memoization Table initialization
    vector<vector<int>> t(n+1, vector<int>(rodLength+1, -1));

    // Solve using top-down (memoization) approach
    int maxProfitMemoization = Recrse(size, values, n, rodLength, t);
    cout << "Maximum value (Memoization): " << maxProfitMemoization << endl;

    // Solve using bottom-up (tabulation) approach
    int maxProfitTabulation = Tabulation(size, values, n, rodLength);
    cout << "Maximum value (Tabulation): " << maxProfitTabulation << endl;

    return 0;
}

