string simplifyPath(string path) {
        vector<string>st;
        // break input by '/'
        stringstream ss(path);
        string token;

        // passing acrual string, where to store each seperated string, on what basis to seperate ('/')
        while(getline(ss, token, '/')) {
            // conditions given in q
            if(token == "" || token == "." ) continue;
            else if(token == "..") {
                if(!st.empty()) st.pop_back();
            } 
            else st.push_back(token);
        }

        if(st.empty()) return "/";

        string result;
        // iterate over stack and add '/' to every substr that we have removed previosuly
        for(string &str : st) {
            result = result + "/" + str;
        }

        return result;
    }
