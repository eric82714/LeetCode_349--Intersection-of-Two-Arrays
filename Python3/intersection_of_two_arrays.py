class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        """
        result = []
        intersection = []
        candidate = []
        
        if len(nums1) < len(nums2):
            intersection = set(nums1)
            candidate = nums2
        else:
            intersection = set(nums2)
            candidate = nums1
        
        for num in intersection:
            if num in candidate:
                result.append(num)
        
        return result 
        """
        return list(set(nums1) & set(nums2))
