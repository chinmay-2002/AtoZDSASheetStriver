// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// https://bit.ly/3w7b6ck

public class RemoveDuplicatesI {
    public int removeDuplicates(int[] arr) {
        
        int j = 0;
        for(int i=1; i<arr.length; i++){
            if(arr[i]!=arr[j]){
                arr[++j] = arr[i]; 
            }
        }
        return j+1;
        
    }

}
