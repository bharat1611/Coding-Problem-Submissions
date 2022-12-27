class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int aR) {
        
        for(int i=0;i<rocks.size();i++){
            rocks[i]=capacity[i]-rocks[i];
        }
        sort(rocks.begin(),rocks.end());
        int c=0,i=0;
        while(aR && i<rocks.size()){
            if(c==rocks.size())break;
            if(rocks[i]==0)c++;
            else if(rocks[i]<=aR){
                aR-=rocks[i];

                c++;
            }
            i++;
        }
        return c;
    }
};