public class TeamLeader extends ProductionWorker{
    private double monthlyB;
    private double required;
    private double attended;

    public TeamLeader(String name, String num, String d, int s, double r, double m, double req, double a){
        super(name, num, d, s, r);
        monthlyB = m;
        required = req;
        attended = a;
    }

    public double getMonthlyB() {
        return this.monthlyB;
    }

    public void setMonthlyB(double monthlyB) {
        this.monthlyB = monthlyB;
    }

    public double getRequired() {
        return this.required;
    }

    public void setRequired(double required) {
        this.required = required;
    }

    public double getAttended() {
        return this.attended;
    }

    public void setAttended(double attended) {
        this.attended = attended;
    }

    @Override
    public String toString() {
        return "Name: "+ super.getName() + "\n"
            +  "Employee Number: "+ super.getNum() + "\n"
            +  "Hire Date: "+ super.getDate() + "\n"
            +  "Shift: "+ super.getShift() + "\n"
            +  "Hourly Pay Rate: "+ "$" + String.format("%.2f", super.getRate()) + "\n"
            +  "Monthly Bonus: "+ "$" + String.format("%.2f",getMonthlyB()) + "\n"
            +  "Required Training Hours: "+  getRequired() + "\n"
            +  "Training Hours Attended: "+  getAttended() + "\n";
    }
}
