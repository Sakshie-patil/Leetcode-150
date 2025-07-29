
   int strStr(string a, string b) {
   int m = a.size();
   int n = b.size();
   for(int i=0;i<=m-n;i++) {
    if(a.substr(i,n) == b) return i;
   }
   return -1;
}
