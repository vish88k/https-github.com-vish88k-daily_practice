class Solution {
public:
    bool isMonotonic(vector<int>& nums){
        int dir = 0; // 0 = unknown, 1 = increasing, -1 = decreasing

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                continue;

            if (dir == 0) {
                if (nums[i] > nums[i - 1])
                    dir = 1;
                else
                    dir = -1;
            } else if (dir == 1 && nums[i] < nums[i - 1]) {
                return false;
            } else if (dir == -1 && nums[i] > nums[i - 1]) {
                return false;
            }
        }

        return true;
    }
};
        