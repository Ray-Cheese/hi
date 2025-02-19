class Solution
{
public:
    int reverse(int x)
    {
        int num = 0;
        if (x >= 0)
        {
            for (int i = x; i > 0; i /= 10)
                num = num * 10 + i % 10;
        }
        else
        {
            x = -x;
            for (int i = x; i > 0; i /= 10)
                num = num * 10 + i % 10;
            num = num * (-1);
        }
        return num;
    }
};