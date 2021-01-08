/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let d = new Map();
    var start = 0, max1 = 0, sum = 0;
    for(var i = 0; i<s.length; i++){
        // console.log(d.get(s[i]));
        
        if(d.has(s[i]) && d.get(s[i])>=start){
            max1 = Math.max(max1, sum);
            sum = i - d.get(s[i]);
            start = d.get(s[i])+1;
            
        }
        else
            sum+=1;
        d.set(s[i],i);
    }
    return Math.max(max1,sum);
};