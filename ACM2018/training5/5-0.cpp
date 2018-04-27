#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int groups, count, *data, *LIS;
    cin >> groups;
    while (groups--)
    {
        cin >> count;
        data = new int[count];
        LIS = new int[count];
        for (int i = 0; i < count; i++)
            cin >> data[i];
        for (int i = 0; i < count; i++)
        {
            LIS[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (data[i] > data[j] && LIS[j] + 1 > LIS[i])
                    LIS[i] = LIS[j] + 1;
            }
        }
        int *max = max_element(LIS, LIS + count);
        cout << *max << endl;
    }
    return 0;
}
