#include <iostream>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        char temp;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
                temp = s[i];
                if(temp == '('){
                    
                }
            }
        }
    }
};
int main()
{
    Solution s;

    cout << s.isValid("()") << endl;
    cout << s.isValid("()[]{}") << endl;
    cout << s.isValid("()]") << endl;
    return 0;
}