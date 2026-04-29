class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;

        for(int i = 0; i < nums.size(); i++) {

            // If number seen before
            if(lastIndex.find(nums[i]) != lastIndex.end()) {

                // Check distance
                if(i - lastIndex[nums[i]] <= k)
                    return true;
            }

            // Update latest index
            lastIndex[nums[i]] = i;
        }

        return false;
    }
};