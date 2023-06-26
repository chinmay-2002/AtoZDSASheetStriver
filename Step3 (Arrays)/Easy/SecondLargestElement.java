
//  Problem : https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/

class Solution {
    int print2largest(int arr[], int n) {
        // code here
        int large = arr[0];
	    int SecondLarge = -1;
	    for(int i=0; i<n; i++){
	        if(arr[i]>large){
	            SecondLarge = large;
	            large = arr[i];
	        }
	        else if(arr[i]>SecondLarge && arr[i]!=large){
	            SecondLarge = arr[i];
	        }
	    }
	    return SecondLarge;
    }
}