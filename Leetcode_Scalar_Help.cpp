class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0; // Initialize left pointer
        int right = height.size() - 1; // Initialize right pointer
        int leftmax = -1; // Initialize maximum height from the left
        int rightmax = -1; // Initialize maximum height from the right
        int ans = 0; // Initialize answer to store total water trapped

        // Use a while loop to traverse the array from both ends
        while (left <= right) {
            // If height at left pointer is less than or equal to height at right pointer
            if (height[left] <= height[right]) { 

                // Update leftmax if current height is greater
                if (height[left] > leftmax) leftmax = height[left];

                 // Calculate water trapped at left pointer
                else  ans = ans + leftmax - height[left];
                left++; // Move left pointer to the right


            } else { // If height at left pointer is greater than height at right pointer

            // Update rightmax if current height is greater
                if (height[right] > rightmax) rightmax = height[right];


                else ans = ans + rightmax - height[right]; // Calculate water trapped at right pointer
                
                right--; // Move right pointer to the left
            }
        }

        return ans; // Return the total water trapped
    }
};