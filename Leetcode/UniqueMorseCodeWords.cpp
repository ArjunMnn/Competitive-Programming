class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for(string word:words){
            string trans="";
            for(char letter:word){
                trans+=arr[letter-'a'];
            }
            s.insert(trans);
        }
        return s.size();

    }
};