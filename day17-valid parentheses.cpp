bool isValid(string str) {
        int n = str.size();
        stack<int>s;
        for(int i=0;i<n;i++) {
            // opening bracket
            if(str[i] == '(' ||
            str[i] == '{' || str[i] == '[') {
                s.push(str[i]);
            }
            // closing bracket
            else {
                // if there is no opening bracket present
                if(s.size() == 0) return false;

                // matching bracket found
                if((str[i] == ')' && s.top() == '(') ||
                    (str[i] == '}' && s.top() == '{') ||
                    (str[i] == ']' && s.top() == '[')) {
                        s.pop();
                }

                // diff bracket found
                else {
                    return false;
                }
            }
        }
        // if stack empty => valid
        // if element present => invalid
        return s.size() == 0;
    }
