#include <stdio.h>
#include<vector>
using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
    printf("Hello World");
    vector<char>vectStr;
    vectStr.push_back('a');
    vectStr.push_back('b');
    vectStr.push_back('c');
    vectStr.push_back('d');
    sort(vectStr.begin(),vectStr.end());
    int count=0;
    do{
        for( auto i=0;i< vectStr.size();i++)
        {
            cout<<vectStr[i]<<" " ;
        }
        cout<<endl;
        cout<<count++;
        
       // cout<<vectStr[0]<<vectStr[1]<<vectStr[2]<<" "
    }while(next_permutation(vectStr.begin(),vectStr.end()));
    return 0;
}
