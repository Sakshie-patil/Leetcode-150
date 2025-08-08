// catch :
// if we suck into the cycle means if we are seeing the number that we have already seen then we need to return false that number cant necome the happy number...

int squareNumber(int n) {
    int ans =0;
    while(n > 0) {
    int rem = n%10;
    ans = ans + rem * rem;
    n=n/10;
    }
    return ans;
}

bool isHappyHelper(int n, unordered_set<int> s) {
    if(n == 1) return true;

    // when the number we have seen already appeared in the set means that we are stuck into the cycle and the number is not happy number
    if(s.count(n)) return false;
    s.insert(n);
    int next = squareNumber(n);
    return isHappyHelper(next, s);
}

    bool isHappy(int n) {

      unordered_set<int>s;
      return isHappyHelper(n, s);
    }
