class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        long long maxn = INT_MIN, index = 0;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                index = i + 1;
            }
        }
        return index;
    }
};