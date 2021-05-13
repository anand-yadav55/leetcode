#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int y = x;
        int z = 0;
        while (y != 0)
        {
            //OVERFLOW NEEDS TO BE CORRECTED!!!
            if ((z * 10 + y % 10) / 10 != z)
                return 0;
            z = z * 10 + y % 10;
            cout << "z:" << z << endl;
            y /= 10;
        }
        return z;
    }
};
main()
{
    freopen("input.txt", "r", stdin);
    int t, n;
    cin >> t;
    Solution obj;
    std::cout << "int min" << INT_MIN << " max:" << INT_MAX << endl;
    while (t > 0)
    {
        --t;
        std::cin >> n;
        std::cout << obj.reverse(n) << endl;
    }
}