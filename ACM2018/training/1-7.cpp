#include <map>
#include <stdio.h>
using namespace std;
int main()
{
    map<int, int> data;
    int count, a, b;
    scanf("%d\n", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &a, &b);
        if (data[b] != a)
            data[a] = b;
        data.erase(b);
    }
    if (!data.empty())
        puts("NO");
    else
        puts("YES");
    return 0;
}
