#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<long long int, long long int>> movies;
    
    // Read the start and end times for each movie
    for (int i = 0; i < n; i++) {
        long long int start, end;
        cin >> start >> end;
        movies.push_back({end, start});  // Store as (end, start) for easy sorting by end time
    }
    
    // Sort movies by ending time
    sort(movies.begin(), movies.end());
    
    int count = 0;
    long long int last_end_time = 0;
    
    // Iterate through sorted movies and apply the greedy algorithm
    for (auto movie : movies) {
        if (movie.second >= last_end_time) {  // If the movie starts after or when the last one ended
            count++;
            last_end_time = movie.first;  // Update the end time to the current movie's end
        }
    }
    
    cout << count << endl;
    return 0;
}
