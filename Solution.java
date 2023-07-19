
import java.util.*;

class Solution{


  public static void main(String args[]){


    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();

    int temperatures[] = new int[n]; // all the temperatures

    for(int i=0; i<n; i++){
      temperatures[i] = sc.nextInt();
    }

    // [23,45,65,22,23,22,26,34,35,35]

    // ArrayList<Integer> arr = new ArrayList<>();
    int temperaturescount30 = 0; 
    int temperaturescount25 = 0; 
    int heatwavedays = 0;

    for (int i = 0; i < temperatures.length; i++) {
      if(temperatures[i]>25){
        temperaturescount25++;  
      }
      
      if(temperatures[i]>30){
        temperaturescount30++;
      }

      if(temperatures[i]<25){

        if(temperaturescount25 >=5 && temperaturescount30>=3){
          heatwavedays += temperaturescount25;
        }

        temperaturescount25 = 0;
        temperaturescount30 = 0;

      }

    }



    















  }
}