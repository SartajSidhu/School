import java.util.ArrayList;

public class Company {
    private String compName;
    private int startYr;
    private ArrayList<Object> workers;


    public Company(String c, int s, ArrayList<Object> w){
        compName = c;
        startYr = s;
        workers = w;
    }

    public String getCompName() {
        return compName;
    }

    public void setCompName(String c) {
        this.compName = c;
    }

    public int getStartYr() {
        return this.startYr;
    }

    public void setStartYr(int s) {
        startYr = s;
    }

    public ArrayList<Object> getWorkers() {
        return workers;
    }

    public void setWorkers(ArrayList<Object> w) {
        workers = w;
    }
}
