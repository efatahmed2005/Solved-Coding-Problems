/*
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int lp = 0, rp = height.size() - 1, w, ans = 0, h;
        while (rp > lp)
        {
            w = rp - lp;
            h = min(height[lp], height[rp]);
            ans = max(ans, (w * h));

            if (height[lp] < height[rp])
                lp++;
            else
                rp--;
        }
        return ans;
    }
};
*/