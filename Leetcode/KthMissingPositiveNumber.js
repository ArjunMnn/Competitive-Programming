/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var findKthPositive = function(arr, k) {
    var beg = 0, end = arr.length;
    while(beg<end){
        var mid = Math.floor((beg+end)/2);
        if((arr[mid]-mid-1)<k)
            beg = mid + 1;
        else
            end = mid;
    }
    return end+k;
};