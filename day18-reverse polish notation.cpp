int evalRPN(vector<string>& st) {
        int n = st.size();
        stack<int>s;
    
        for(int i=0;i<n;i++) {
            // operator
            if(st[i] == "+"  || st[i] <= "-" || st[i] == "*" || st[i] == "/")    {
              int t2 = s.top();
              s.pop();
              int t1 = s.top();
              s.pop();

                if(st[i] == "+") s.push(t1+t2);
                else if(st[i] == "-") s.push(t1-t2);
                else if(st[i] == "*") s.push(t1*t2);
                else s.push(t1/t2);
            }

            // operand
            else {
                s.push(stoi(st[i]));
            }
        }
        return s.top();
    }
