#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string num;
    while(cin >> num)
    {
        string temp = num;
        reverse(temp.begin(), temp.end());
        if (num == temp)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
