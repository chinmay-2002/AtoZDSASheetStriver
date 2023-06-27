public class RotateArrayByKplaces {



  // TLE

  // void leftRotate(long arr[], int k,int n)
  //   {
  //       k = k % n;
  //       long arr2[] = new long[n];
  //       int j = 0;
  //       for(int i=k; i<n; i++){
  //           arr2[j++] = arr[i];
  //       }
        
  //       for(int i=0; i<k; i++){
  //           arr2[j++] = arr[i];
  //       }
        
  //       for(int i=0; i<n; i++){
  //           arr[i] = arr2[i];
  //       }
        
  //   }


    //  TLE

    // public static void reverse(long arr[],int k, int n){
    //     int i = k;
    //     int j = n;
    //     while(i<=j){
    //         long temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //         i++;j--;
    //     }
    // }
    // void leftRotate(long arr[], int k,int n)
    // {
    //     if (k==0) return;
    //     k = k % n;
    //     reverse(arr, 0, k-1);
    //     reverse(arr, k, n-1);
    //     reverse(arr, 0, n-1);
        
    // }


    // CPP COde 
    // Many times java gives TLE for code

  //   	void leftRotate(int arr[], int k, int n) 
	// { 
	//    // Your code goes here
	 
  //   k=k%n;
  //      int temp[n];
  //      int res=0;
  //      for(int i=k; i<n; i++)
  //      {
  //          temp[res]=arr[i];
  //          res++;
  //      }
  //      for(int i=0; i<k; i++)
  //      {
  //          temp[res]=arr[i];
  //          res++;
  //      }
  //      for(int i=0;i<n; i++)
  //      {
  //          arr[i]=temp[i];
  //      }
    
	   
	// } 

		//  My Leetcode Submission in CPP

//     class Solution {
// public:
    
//     void reverse(vector<int>& nums, int a, int n){
//         while(a<n){
//             int temp = nums[a];
//             nums[a] = nums[n];
//             nums[n] = temp;
//             a++;
//             n--;
//         }
//     }
    
//     void rotate(vector<int>& nums, int k) {
//         k = k % nums.size() ;
//         reverse(nums,nums.size()-k,nums.size()-1);
        
//         reverse(nums,0,nums.size()-k-1);
        
//         reverse(nums,0,nums.size()-1);
        
//     }
// };


}
