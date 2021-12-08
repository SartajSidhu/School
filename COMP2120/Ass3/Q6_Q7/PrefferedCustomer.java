public class PrefferedCustomer extends Customer{
    private double purchases;
    private double discount;

    public PrefferedCustomer(String n, String a, String p, String c, boolean m, double pur){
        super(n, a, p, c, m);
        purchases = pur;
        discount = 0;
        if(purchases >=500){
            discount = 0.05;
        }
        if(purchases >=1000){
            discount = 0.06;
        }
        if(purchases >=1500){
            discount = 0.07;
        }
        if(purchases >=2000){
            discount = 0.10;
        }
    }

    public double getPurchases() {
        return this.purchases;
    }

    public void setPurchases(double purchases) {
        this.purchases = purchases;
    }

    public double getDiscount() {
        return this.discount;
    }

    public void setDiscount(double discount) {
        this.discount = discount;
    }

    @Override
    public String toString() {
        return "Name: " + super.getName() + "\n" 
        + "Address: " + super.getAddress() + "\n"
        + "Telephone: " + super.getPhone() + "\n"
        + "Customer Number: " + super.getCustomerNum() + "\n" 
        + "Mailing List: " + super.getMail() + "\n"
        + "Purchases: $" + getPurchases() + "\n"
        + "Discount Level: " + getDiscount(); 
    }

}
