import java.awt.*;
import java.io.IOException;
//Sartaj Sidhu, 110039017
public class PlotSomeData
{
    public int gcd(int m, int n){
        while(m%n!=0){
            int r = m%n;
            m = n;
            n = r;
        }
        return n;
    }

    public int gcdIterations(int m, int n){
        int count=0;
        while(m%n!=0){
            int r = m%n;
            m = n;
            n = r;
            count+=1;
        }
        return count;
    }

    public static void main(String[] args) throws IOException
    {
        PlotSomeData v = new PlotSomeData();

        System.out.println(v.gcd(14, 21));
        System.out.println(v.gcd(56, 32));
        System.out.println(v.gcd(63, 99));
        System.out.println(v.gcd(210, 54));
        System.out.println(v.gcd(1240, 735));


        int[] maxIterations = new int[101];
        
        for(int m=1;m<101;m++){
            for(int n=1;n<=m;n++)
                maxIterations[n]=Math.max(maxIterations[n], v.gcdIterations(m, n));
        }

        Plot.Data curve1 = Plot.data();
        Plot.Data curve2 = Plot.data();

        

        for (int x=1; x<101; x++)
        {
            curve1.xy(x,maxIterations[x]); 
            curve2.xy(x,2*Math.ceil(Math.log(x)));    
        }

        Plot plot = Plot.plot(Plot.plotOpts().
                title("GCD data").
                legend(Plot.LegendFormat.BOTTOM)).
                    xAxis("x", Plot.axisOpts().range(1, 100)).
                    yAxis("y", Plot.axisOpts().range(0, 20)).

                series("y=maxIterations(n)", curve1, Plot.seriesOpts().color(Color.BLACK)).
                series("y=2log(n)", curve2, Plot.seriesOpts().color(Color.BLUE));

        plot.save("SomeData", "png");
    }
}