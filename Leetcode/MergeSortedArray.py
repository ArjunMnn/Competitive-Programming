class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        k = len(nums1)-1
        m-=1
        n-=1
        while m>=0 and n>=0:
            # print(m,n)
            if(nums1[m] > nums2[n]):
                nums1[k] = nums1[m]
                m-=1
            else:
                nums1[k] = nums2[n]
                n-=1
            k-=1
        while m>=0:
            nums1[k] = nums1[m]
            k-=1
            m-=1
        while n>=0:
            nums1[k] = nums2[n]
            k-=1
            n-=1
        
                
        