string Solution::intToRoman(int num) {
    string values[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX","V", "IV", "I"};    
    int symbols[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string s = "";
    int i = 0;
    while(num!=0){
        if(num - symbols[i]<0)
            i++;
        else{
            num-=symbols[i];
            s+=values[i];
        }
    }
    return s;
}
