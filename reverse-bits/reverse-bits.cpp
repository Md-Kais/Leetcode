
class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        long long ans = 0;
        bitset<32> a(n);
        string aa = a.to_string();
        int i = 0;
        for (auto e : aa)
        {

            if (e == '1')
            {
                ans += 1 << i;
            }
            i++;
        }
        return ans;
    }
};