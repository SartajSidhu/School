public class ProductionWorker extends Employee{
    private int shift;
    private double rate;

    public ProductionWorker(String name, String num, String d, int s, double r){
        super(name, num, d);
        shift = s;
        rate = r;
    }

    public String getShift() {
        if (shift == 1){
            return "Day";
        }
        else if(shift ==2){
            return "Night";
        }
        return "Invalid Shift number";
    }

    public void setShift(int shift) {
        this.shift = shift;
    }

    public double getRate() {
        return this.rate;
    }

    public void setRate(double rate) {
        this.rate = rate;
    }

    

    @Override
    public String toString() {
        return "Name: "+ super.getName() + "\n"
            +  "Employee Number: "+ super.getNum() + "\n"
            +  "Hire Date: "+ super.getDate() + "\n"
            +  "Shift: "+ getShift() + "\n"
            +  "Hourly Pay Rate: "+ "$" + String.format("%.2f",getRate()) + "\n";
    }

}
