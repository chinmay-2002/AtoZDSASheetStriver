string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        sort(arr, arr+n);
        string s = "";
        string f = arr[0];
        string e = arr[n-1];
        for(int i=0; i<min(f.length(), e.length()); i++){
            if(arr[n-1][i]==arr[0][i]){
                s = s+arr[0][i];
            }
            else{
                break;
            }
        }
        if(s[0]!=e[0]){
            return "-1";
        }
        else{
            return s;
        }
    }