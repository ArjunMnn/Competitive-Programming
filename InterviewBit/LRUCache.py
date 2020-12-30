from collections import OrderedDict
class LRUCache:

    def __init__(self, capacity):
        self.c = capacity
        self.d = OrderedDict()
    # @return an integer
    def get(self, key):
        if key in self.d:
            v = self.d[key]
            del self.d[key]
            self.d[key] = v
        return self.d.get(key,-1)

    def set(self, key, value):
        if key in self.d:
            v = self.d[key]
            del self.d[key]
            self.d[key] = v
        else:
            if len(self.d) == self.c:
                self.d.popitem(last=False)
        self.d[key] = value
        
