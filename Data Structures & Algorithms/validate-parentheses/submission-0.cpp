class Solution {
public:
    bool isValid(string s) {
        if (s[0] == '}' || s[0] == ']' || s[0] == ')') return false;
        stack<char> container;
        for(char c : s)
        {
            if (c == '[' || c == '(' || c == '{') container.push(c);
            else if (c == ')') {
            if (container.empty() || container.top() != '(') return false;
            container.pop();
            }
            else if (c == ']') {
            if (container.empty() || container.top() != '[') return false;
            container.pop();
            }
            else if (c == '}') {
            if (container.empty() || container.top() != '{') return false;
            container.pop();
            }
        }
        return container.empty();
    }
};
