#include <algorithm>
#include <iostream>
using namespace std;
struct bench
{
    int length;
    int width;
    int height;
};
bool cmp(const bench &x, const bench &y)
{
    if (x.length == y.length)
    {
        if (x.width == y.width)
            return x.height < y.height;
        return x.width < y.width;
    }
    return x.length < y.length;
}
int main()
{
    int groups, count, n[3], *LIS;
    int index[6][3] = {{0, 1, 2}, {0, 2, 1}, {1, 0, 2}, {1, 2, 0}, {2, 0, 1}, {2, 1, 0}};
    bench *data;
    cin >> groups;
    while (groups--)
    {
        cin >> count;
        data = new bench[count * 6];
        LIS = new int[count * 6];
        for (int i = 0; i < count; i++)
        {
            cin >> n[0] >> n[1] >> n[2];
            for (int j = 0; j < 6; j++)
            {
                data[i * 6 + j].length = n[index[j][0]];
                data[i * 6 + j].width = n[index[j][1]];
                data[i * 6 + j].height = n[index[j][2]];
            }
        }
        int end = count * 6;
        sort(data, data + end, cmp);
        for (int i = 0; i < end; i++)
        {
            LIS[i] = data[i].height;
            for (int j = 0; j < i; j++)
            {
                if (data[i].length > data[j].length && data[i].width > data[j].width)
                    if (LIS[j] + data[i].height > LIS[i])
                        LIS[i] = LIS[j] + data[i].height;
            }
        }
        int *max = max_element(LIS, LIS + count * 6);
        cout << *max << endl;
    }
    return 0;
}
