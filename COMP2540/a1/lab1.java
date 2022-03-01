//Sartaj Sidhu, 110039107
public class lab1 {
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
}
// plotting done in PlotSomeData.