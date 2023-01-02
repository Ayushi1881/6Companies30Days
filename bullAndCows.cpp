class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0,cows=0;
        map<int,int> smp;
        map<int,int> gmp;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]) {
                bulls++;}
            else{
                smp[secret[i]-'0']++;
                gmp[guess[i]-'0']++;
            }
        }
        for(auto it:smp)
        {
            if(gmp.find(it.first)!=gmp.end())
            cows+=min(gmp[it.first],it.second);
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};