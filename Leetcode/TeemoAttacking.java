class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int total = 0;
        for(int i = 0;i<timeSeries.length;i++){
            if(i == timeSeries.length-1){
                total+=duration;
                break;
            }
            int curr = timeSeries[i];
            if (curr+duration>timeSeries[i+1]){
                total+=timeSeries[i+1] - curr;
            }
            else
                total+=duration;
            
        }
        return total;
                
    }
}