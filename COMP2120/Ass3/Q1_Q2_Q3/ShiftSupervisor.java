public class ShiftSupervisor extends Employee {
    private double salary;
    private double bonus;

    public ShiftSupervisor(String name, String num, String d, double s, double b){
        super(name, num, d);
        salary = s;
        bonus = b;
    }

    public ShiftSupervisor(Employee e, double s, double b){
        super(e.getName(), e.getNum(), e.getDate());
        salary = s;
        bonus = b;
    }


    public double getSalary() {
        return this.salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public double getBonus() {
        return this.bonus;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }


    @Override
    public String toString() {
        return "Name: "+ super.getName() + "\n"
        +  "Employee Number: "+ super.getNum() + "\n"
        +  "Hire Date: "+ super.getDate() + "\n" 
        + "Annual Salary: " + "$" + String.format("%.2f",getSalary()) + "\n" 
        + "Production Bonus: " + "$" + String.format("%.2f",getBonus());
    }


    
}
