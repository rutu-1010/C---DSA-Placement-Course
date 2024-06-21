#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function to calculate stock span
void stockspan(vector<int> stock, vector<int> &span) {
    stack<int> s;
    s.push(0); // Push the index of the first element
    span[0] = 1; // Span of the first element is always 1

    for (int i = 1; i < stock.size(); i++) {
        int currprice = stock[i];
        // Pop elements from the stack while the current price is greater than or equal to the price at the stack's top index
        while (!s.empty() && currprice >= stock[s.top()]) {
            s.pop();
        }

        if (s.empty()) {
            // If stack is empty, the span is the index + 1
            span[i] = i + 1;
        } else {
            // Otherwise, the span is the difference between the current index and the index at the top of the stack
            int prevhigh = s.top();
            span[i] = i - prevhigh;
        }

        // Push the current index onto the stack
        s.push(i);
    }

    // Print the span for each day
    for (int i = 0; i < span.size(); i++) {
        cout << span[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> stock = {100, 80, 60, 70, 60, 85, 100}; // Stock prices
    vector<int> span(stock.size(), 0); // Span initialized to 0 with the same size as stock

    stockspan(stock, span); // Calculate stock span
    return 0;
}
