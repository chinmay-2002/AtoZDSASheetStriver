class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        long int i=0;
        sort(array.begin(),array.end());
        for(i=0; i<n-1; i++){
            if(array[i]!=i+1){
                break;
            }
        }
        return i+1;
    }
};