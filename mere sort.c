#include <stdio.h>
void merge(int* nums1, int m, int* nums2, int n) {
    int p1 = m - 1;
    int p2 = n - 1;
    int p3 = m + n - 1; 
    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] > nums2[p2]) {
            nums1[p3] = nums1[p1];
            p1--;
        } else {
            nums1[p3] = nums2[p2];
            p2--;
        }
        p3--;
    }   
    while (p2 >= 0) {
        nums1[p3] = nums2[p2];
        p2--;
        p3--;
    }
}
int main() {
    // Example usage
    int nums1[100]; // Assuming nums1 has enough space to accommodate elements from nums2
    int nums2[100];
    int m,n,x,y,i; // Size of nums1 array // Size of nums2 array
    printf("Enter the number of elements : ");
    scanf("%d", &x);
    for (i = 0; i < x; ++i) {
        printf("Enter number%d: ", i + 1);
		scanf("%d", &nums1[i]);
	}
	printf("Enter the number of elements : ");
    scanf("%d", &y);
    for (i = 0; i < y; ++i) {
        printf("Enter number%d: ", i + 1);
		scanf("%d", &nums2[i]);
		}
    printf("enter value of M =  ");
    scanf("%d",&m);
    printf("enter value of N = ");
    scanf("%d",&n);  
    merge(nums1, m, nums2, n);
    printf("Merged array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");   
    return 0;
}

