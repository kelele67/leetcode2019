class Solution {
public:
	bool contaninsDuplicate(vector<int>& nums) {
		const int size = nums.size();
		if (size  < = 1 ) {
			return false;
		}
		sort(nums.begin(), nums.end());
		for (int i = 0; i < size; i++) {
			if (nums[i] == nums[i++]) {
				return true;
			}
		}
		return false;
	}
};