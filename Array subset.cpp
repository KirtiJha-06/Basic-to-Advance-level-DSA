TC: O(nlogn+ mlogm)
SC: O(1)

class Solution {
public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int>& a, vector<int>& b) {
        // Get the sizes of both arrays
        int n = a.size();
        int m = b.size();

        // If size of b is greater than a, it can't be a subset
        if (m > n) {
            return false;
        }

        // Sort both arrays to use two-pointer technique
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // Initialize two pointers
        int i = 0, j = 0;

        // Traverse both arrays
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                // Move pointer `i` if the current element of `a` is smaller than the current element of `b`
                i++;
            } else if (a[i] == b[j]) {
                // If elements match, move both pointers
                i++;
                j++;
            } else {
                // If the current element of `b` is not in `a`, `b` cannot be a subset
                return false;
            }
        }

        // If pointer `j` has traversed all elements of `b`, it means `b` is a subset of `a`
        return j == m;
    }
};
