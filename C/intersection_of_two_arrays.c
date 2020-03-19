/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int find(int* array, int x, int size){
    if(size == 0) return 0;
    for(int i = 0; i < size; i++){
        if(*(array+i) == x) return 1;
    }
    return 0;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    *returnSize = 0;
    int tmpSize;
    if(nums1Size > nums2Size) tmpSize = nums1Size;
    else tmpSize = nums2Size;
    
    int* result = malloc(tmpSize * sizeof(int));
    int* storage = malloc(tmpSize * sizeof(int));
    int index = 0;
    
    for(int i = 0; i < nums1Size; i++){
        if(find(storage, *(nums1+i), tmpSize) == 0){ 
            *(storage+index) = *(nums1+i);
            index ++;
        }
    }
    
    index = 0;
    for(int j = 0; j < nums2Size; j++){
        if(find(storage, *(nums2+j), tmpSize) == 1 && find(result, *(nums2+j), tmpSize) == 0){ 
            *(result+index) = *(nums2+j);
            index ++;
            *returnSize = *returnSize + 1;
        }
    }
        
    return result;

}
