//merge sorted array 
//difficulty: easy
//language : C
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i, a = m + n, j = 0, temp, flag;
    for (i = m; i < a; i++) {
        nums1[i] = nums2[j];
        j++;
    }
    for (i = 0; i < a - 1; i++) {
        for (j = 0; j < a - 1 - i; j++) {
            if (nums1[j] > nums1[j + 1]) {
                temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }
}    
