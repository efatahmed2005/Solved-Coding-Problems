class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        vector<pair<int, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), [](pair<int, int> &a, pair<int, int> &b)
             { return a.second > b.second; });
        vec.erase(vec.begin() + k, vec.end());
        vector<int> v;
        for (int i = 0; i < k; i++)
            v.push_back(vec[i].first);
        return v;
    }
};
