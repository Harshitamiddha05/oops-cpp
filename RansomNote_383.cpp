#include<string>
class Solution {
public:
    bool canConstruct(std::string ransomNote,std::string magazine) {
        int rlen=ransomNote.length();
        int mlen=magazine.length();
        int count[26]={0};
        for(int i=0;i<rlen;i++){
            count[ransomNote[i]-'a']++;
        }
        for(int i=0;i<mlen;i++){
            count[magazine[i]-'a']--;
        }
        for(int i;i<26;i++){
            if(count[i]>0)
               return false;
        }
        return true;
    }
};