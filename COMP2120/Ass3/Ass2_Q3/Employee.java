public class Employee extends Person {
    private int hiringYr;
    private double salary;
    private int vacDays;
    private int unusedVacDays;

    public Employee(String f, String l, String num, int b, int m, int h, double s, int v, int u){
        super(f, l, num, b, m);
        hiringYr = h;
        salary = s;
        vacDays = v;
        unusedVacDays = u;
    }
    
    public int getHiringYr() {
        return hiringYr;
    }

    public void setHiringYr(int h) {
        hiringYr = h;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double s) {
        salary = s;
    }

    public int getVacDays() {
        return vacDays;
    }

    public void setVacDays(int v) {
        vacDays = v;
    }

    public int getUnusedVacDays() {
        return unusedVacDays;
    }

    public void setUnusedVacDays(int u) {
        unusedVacDays = u;
    }
}
