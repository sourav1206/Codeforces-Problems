#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    int frequency_array[26] = { 0 };
    for (int i = 0; i < str.size(); i++)
    {
        frequency_array[str[i] - 'a']++;
    }
    int Count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (frequency_array[i] > 0) Count++;
    }
    if (Count % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
}
 
