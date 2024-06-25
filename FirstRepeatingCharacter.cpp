int main() {
    std::string str="abcdefghijab";
    int left=0,right=0,maxLen=0;
    int strLen = str.length();
    std::unordered_set<char>charSet;

   while(right < strLen)
    {
        if(charSet.find(str[right])==charSet.end())
        {
            charSet.insert(str[right]);
            maxLen = std::max(right-left+1,maxLen);
            right++;
        }
        else
        {
            charSet.erase(str[left]);
            left++;
        }
    }
    std::cout<<"Max Len :"<<maxLen;
    std::cout<<"Longest Length"<<str.substr(left,maxLen);
}
