// Problem : https://takeuforward.org/data-structure/find-the-largest-element-in-an-array/

class LargestElement {
    
    public int largest(int arr[], int n)
    {
        int large = -1;
        for(int i=0; i<n; i++){
            large = Math.max(large, arr[i]);
        }
        return large;
        
    }
}