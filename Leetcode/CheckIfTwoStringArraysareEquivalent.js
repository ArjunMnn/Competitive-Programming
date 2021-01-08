/**
 * @param {string[]} word1
 * @param {string[]} word2
 * @return {boolean}
 */
var arrayStringsAreEqual = function(word1, word2) {
    var i1=0,i2=0,j1=0,j2=0;
        
    while (i1<(word1.length) && i2<(word2.length))
        {if (word1[i1][j1]!=word2[i2][j2])
            return false;
        j1+=1
        j2+=1
        if (j1 == (word1[i1].length))
            {j1 = 0;
            i1 += 1;}
        if (j2 == (word2[i2].length))
           { j2 = 0;
            i2 += 1;}
        if (i1 == (word1.length) && i2 == (word2.length))
            return true;}

    return false
};