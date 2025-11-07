/*
class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<string, int> m;
        m.emplace("I", 1);
        m.emplace("V", 5);
        m.emplace("X", 10);
        m.emplace("L", 50);
        m.emplace("C", 100);
        m.emplace("D", 500);
        m.emplace("M", 1000);
        m.emplace("IV", 4);
        m.emplace("IX", 9);
        m.emplace("XL", 40);
        m.emplace("XC", 90);
        m.emplace("CD", 400);
        m.emplace("CM", 900);
        int i = 0, sum = 0;
        while (i != s.length())
        {
            bool found = false;
            if (i + 1 < s.length())
            {
                if (m.count(s.substr(i, 2)))
                {
                    found = true;
                    sum += m[s.substr(i, 2)];
                    i += 2;
                }
            }
            if (!found)
            {
                sum += m[s.substr(i, 1)];
                i++;
            }
        }
        return sum;
    }
};
*/