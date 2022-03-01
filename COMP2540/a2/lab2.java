import java.awt.*;
import java.io.IOException;
import java.util.Random;

//Sartaj Sidhu, 110039017
public class lab2{
    public int mcsBrute(int [] a){
        int n = a.length;
        int maxSum = 0;
        int start = 0;
        int end = 0;
        int count = 0; //counts iterations 
        for(int i=1; i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                sum = sum + a[j];
                if(sum>maxSum){
                    maxSum = sum;
                    start = i;
                    end = j;
                }
                count+=1;
            }
        }
        String seq = "";
        if(start!=0){
            for(int x = start; x<end; x++){
                seq=seq+a[x]+",";
            }
            seq+=a[end];
        }
        else{
            seq = "Value 0 by definition";
        }
        //System.out.printf("Start: %d, End: %d, maxSum: %d MCS: %s, Iterations: %d\n",start,end,maxSum,seq,count); 
        return count; 
    }
    public int mcsImproved(int [] a){
        int n = a.length;
        int maxSum = 0;
        int sum = 0;
        int start = -1;
        int end = -1;
        int i = 1;
        int count =0; //counts iterations
        for(int j=1; j<n; j++){
            sum = sum +a[j];
            if(sum>maxSum){
                maxSum = sum;
                start = i;
                end = j;
            }
            if(sum < 0){
                i = j+1;
                sum = 0;
            }
            count+=1;
        }
        String seq = "";
        if(start!=-1){
            for(int x = start; x<end; x++){
                seq=seq+a[x]+",";
            }
            seq+=a[end];
        }
        else{
            seq = "Value 0 by definition";
        }
        //System.out.printf("Start: %d, End: %d, maxSum: %d MCS: %s, Iterations: %d\n",start,end,maxSum,seq,count); 
        return count;
    }

    public static void main(String[] args) throws IOException {
        lab2 test = new lab2();
        int[] b = {-1,-2,-3,-4,-5,-6};
        int[] c = {-1, 1, -1, 1, -1, 1};
        int[] d = {-1, 2, 3, -3, 2 };
        int[] e = {1, -5, 2, -1, 3};
        int[] f = {-2, 2, -2, -2, 3, 2};
        test.mcsBrute(b);
        test.mcsImproved(b);
        
        test.mcsBrute(c);
        test.mcsImproved(c);
        
        test.mcsBrute(d);
        test.mcsImproved(d);
        
        test.mcsBrute(e);
        test.mcsImproved(e);
        
        test.mcsBrute(f);
        test.mcsImproved(f);
       
        Random r = new Random();
        int[] impIterations = new int[11];
        int[] bruteIterations = new int[11];
        for(int x = 5; x<=15; x++){
            for(int y = 0; y<10; y++){
                int[] arr = new int[x]; 
                for(int z =0; z<x; z++){
                    arr[z] = r.nextInt(10) - 20;
                }
                if(test.mcsBrute(arr)>bruteIterations[x-5]){
                    bruteIterations[x-5] = test.mcsBrute(arr);
                }
                if(test.mcsImproved(arr)>impIterations[x-5]){
                    impIterations[x-5] = test.mcsImproved(arr);
                }
            }
        }
        


        
        Plot.Data curve1 = Plot.data();
        Plot.Data curve2 = Plot.data();

        

        for (int x=0; x<11; x++)
        {
            curve1.xy(x,x); 
            curve2.xy(x,impIterations[x]);    
        }

        Plot plot = Plot.plot(Plot.plotOpts().
                title("Improved data").
                legend(Plot.LegendFormat.BOTTOM)).
                    xAxis("x", Plot.axisOpts().range(0, 11)).
                    yAxis("y", Plot.axisOpts().range(0, 20)).

                series("y=n", curve1, Plot.seriesOpts().color(Color.BLACK)).
                series("y=improvedIterations[n])", curve2, Plot.seriesOpts().color(Color.BLUE));

        plot.save("impData", "png");
    }
}