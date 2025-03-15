bool isAnagram(string s, string t) {
    std::unordered_map<char,int>str,str1;
    if(s.length()!=t.length())
    {
       return false;
    }
    for(char x:s)
    {
       if(str.find(x)!=str.end())
       {
           
           str[x]++;
       }
       else
          str[x]=1;
    }
    for(char x:t)
    {
        if(str[x]!=1)
        {
           str[x]--;    
        }
        else
        {
            str.erase(x);
        }
        
    }
    if(str.size())
    {
        return false;
    }
    return true;
    }
