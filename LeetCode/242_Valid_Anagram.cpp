class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() == t.length())
        {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            for (auto i = 0; i < max(s.length(), t.length()); i++)
            {
                if (s[i] != t[i])
                    return false;
            }
            return true;
        }
        else
            return false;
    }
};