class Solution {
public:
    int bitwiseComplement(int n) {
        vector<int> v;
        int r;
        if(n==0){
            return 1;
        }
        while(n!=0){
            r = n%2;
            n = n/2;
            v.push_back(r);
        }
        for(int i=0; i<v.size(); i++){
            if(v[i]==0){
                v[i]=1;
            }
            else{
                v[i]=0;
            }
        }
        for(auto i:v){
            cout<<i<<" ";
        }
        int p=0;
        for(int i=0; i<v.size(); i++){
            p = p + pow(2,i)*v[i];
        }
        return p;
    }
};
