class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        s = set()
        q = deque()
        q.append(start)
        while q:
            i = q.popleft()
            if arr[i]==0:
                return True
            if i in s:
                continue
            else:
                s.add(i)
            if i+arr[i]<len(arr):
                q.append(i+arr[i])
            if i-arr[i]>=0:
                q.append(i-arr[i])
        return False