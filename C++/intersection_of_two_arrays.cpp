class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        map<int, int> hashmap;
        
        for(int i = 0; i < nums1.size(); i++) {
            if(hashmap.find(nums1[i]) == hashmap.end()) hashmap[nums1[i]] = 1; 
        }
        
        for(int j = 0; j < nums2.size(); j++) {
            if(hashmap.find(nums2[j]) != hashmap.end() && find(result.begin(), result.end(), nums2[j]) == result.end()) 
                result.push_back(nums2[j]); 
        }
        
        return result;
    }
};
