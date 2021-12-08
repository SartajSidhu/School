import java.util.ArrayList;

public class Manager extends Employee {
    private double monthlyBonus;
    private ArrayList<Employee> employees;
    
    public Manager(String f, String l, String num, int b, int m, int h, double s, int v, int u, double mb, ArrayList<Employee> e){
        super(f, l, num, b, m, h, s, v, u);
        monthlyBonus = mb;
        employees = e;
    }

    public double getMonthlyBonus() {
        return monthlyBonus;
    }

    public void setMonthlyBonus(double mb) {
        monthlyBonus = mb;
    }

    public ArrayList<Employee> getEmployees() {
        return employees;
    }

    public void setEmployees(ArrayList<Employee> e) {
        employees = e;
    }
}