class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> vec;
        for (int i = 0; i < max(nums1.size(), nums2.size()); i++)
        {
            if (i < nums1.size())
                vec.push_back(nums1[i]);
            if (i < nums2.size())
                vec.push_back(nums2[i]);
        }
        sort(vec.begin(), vec.end());
        if (vec.size() % 2 != 0)
            return (double)vec[(vec.size() / 2.0)];
        else
            return (double)(((vec[vec.size() / 2]) + (vec[(vec.size() / 2) - 1]))) / 2.0;
    }
};
