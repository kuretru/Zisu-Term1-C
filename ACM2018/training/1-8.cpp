#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    int count;
    cin >> count;
    map<string, int> data;
    map<string, int>::iterator iter;
    for (int i = 0; i < count; i++)
    {
        string key;
        cin >> key;
        data[key]++;
    }
    string max = data.begin()->first;
    for (iter = data.begin(); iter != data.end(); iter++)
        if (iter->second > data[max])
            max = iter->first;
    cout << max << endl;
    return 0;
}
