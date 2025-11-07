class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m;
        int complement;
        for (auto i = 0; i < nums.size(); i++)
        {
            complement = target - nums[i];
            if (m.find(complement) != m.end())
                return {m[complement], i};
            m.emplace(nums[i], i);
        }
        return {};
    }
};

