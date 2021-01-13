from collections import defaultdict
class Solution:
    # @param A : string
    # @param B : list of strings
    # @return a list of integers
    def solve(self, A, B):
        self.node = {}
        
        reviews = defaultdict(list)
        for word in A.split('_'):
            self.insert(word)
        for index, sent in enumerate(B):
            good = 0
            for word in sent.split('_'):
                if self.search(word):
                    good+=1
            reviews[good].append(index)
        res = sorted(reviews.keys(), reverse = True)
        return [i for score in res for i in reviews[score]]
            
        
        
    def insert(self, word):
        n = self.node
        for i in word:
            if i not in n:
                n[i] = {}
            n = n[i]
        n['end'] = True
        
    def search(self, word):
        n = self.node
        for i in word:
            if i not in n:
                return False
            n = n[i]
        if 'end' not in n:
            return False
        return True
        
                