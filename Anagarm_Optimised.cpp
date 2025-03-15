 bool isAnagram(string s, string t) {
    int charSet[256]={0};
    if(s.length()!=t.length())
    {
        return false;
    }
    for(int i=0;i<s.length();i++)
    {
         charSet[s[i]]++;
         charSet[t[i]]--;
    }
    for(int x:charSet)
    {
        if(x!=0)
        {
            return false;
        }
    }
    return true;

    }
