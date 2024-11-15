#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    multiset<int> tickets;
    vector<int> customers(m);
    
    // Read the ticket prices and store them in a multiset
    for (int i = 0; i < n; ++i) {
        int price;
        cin >> price;
        tickets.insert(price);
    }
    
    // Read the customers' max prices
    for (int i = 0; i < m; ++i) {
        cin >> customers[i];
    }
    
    // Process each customer
    for (int max_price : customers) {
        // Find the largest ticket price that is <= max_price
        auto it = tickets.upper_bound(max_price);
        if (it == tickets.begin()) {
            // No ticket available within the max price range
            cout << -1 << "\n";
        } else {
            // Get the valid ticket (closest price <= max_price)
            --it;
            cout << *it << "\n";
            tickets.erase(it); // Remove the ticket from available tickets
        }
    }

    return 0;
}
