import java.util.*;

public class MergeSort {
    public static int[] merge(int[]nums1 , int[]nums2){
        int m = nums1.length , n = nums2.length;
        int[] res = new int[m+n];
        int i = 0 , j = 0 , k = 0 ;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                res[k] = nums2[j];
                j++;
            }else{
               res[k] = nums1[i];
               i++;
            }
            k++;
        }
        while (i<m) {
            res[k] = nums1[i];
            i++;k++;
        }
        while (j<n) {
            res[k] = nums2[j];
            j++;k++;
        }
return res;
    }
    public static int[] mergeSort(int[]nums) {
    //Base case 
    if(nums.length<=1)return nums;
    int mid = nums.length/2;
    int[] left = mergeSort(Arrays.copyOfRange(nums , 0 , mid));
    int[] right = mergeSort(Arrays.copyOfRange(nums , mid , nums.length));
      return merge(left, right); 
    }
    public static void main(String[]args){
        int[] array1 = {1,3,7,8};
        int[] array2 = {2,4,5,6};

        System.out.println( Arrays.toString( merge(array1, array2) ) );
    }
}
