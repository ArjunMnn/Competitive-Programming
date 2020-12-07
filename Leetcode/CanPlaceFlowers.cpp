class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)
            return true;
        if(flowerbed.size()==1 and flowerbed[0]==1){
            return false;
        }
        if(flowerbed.size()==1 and flowerbed[0]==0 and n==1){
            return true;
        }
        int res = 0;
        if(flowerbed[0]==0 && flowerbed[1]==0){
            res+=1;
            flowerbed[0]=1;
        }
        for(int i = 1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0){
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    res+=1;
                }
            }
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0)
            res++;
        return res>=n;
    }
};