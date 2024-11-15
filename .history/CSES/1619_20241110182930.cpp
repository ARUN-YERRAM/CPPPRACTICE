#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> events;
    
    // Read the arrival and leaving times, and create two events per customer
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, 1});  // Arrival event
        events.push_back({b, -1}); // Departure event
    }
    
    // Sort events by time, prioritizing arrivals over departures in case of tie
    sort(events.begin(), events.end());
    
    int current_customers = 0;
    int max_customers = 0;
    
    // Sweep line: calculate the maximum number of customers at any time
    for (auto event : events) {
        current_customers += event.second;  // +1 for arrival, -1 for departure
        max_customers = max(max_customers, current_customers);
    }
    
    cout << max_customers << endl;
    return 0;
}
