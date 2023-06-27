class Count{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0;
        int n = N;
        while(n!=0){
            int rem = n % 10;
            n = n / 10;
            if(rem ==0){
                continue;
            }
            if(N % rem ==0){
                count++;
            }
            
        }
        return count;
        
        
        // int n = N;
        // int count = 0;
        // while(n!=0){
        //     int rem = n%10;
        //     n = n/10;
        //     if(rem==0){
        //         continue;
        //     }
        //     if(N%rem==0){
        //         count++;
        //     }
            
        // }
        // return count;
        




        
    }
};