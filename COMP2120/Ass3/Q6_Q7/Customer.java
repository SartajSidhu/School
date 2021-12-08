public class Customer extends Person{
    private String customerNum;
    private boolean mail;

    public Customer(String n, String a, String p, String c, boolean m){
        super(n, a, p);
        customerNum = c;
        mail = m;
    }

    public String getCustomerNum() {
        return this.customerNum;
    }

    public void setCustomerNum(String customerNum) {
        this.customerNum = customerNum;
    }

    public boolean isMail() {
        return this.mail;
    }

    public String getMail() {
        if(mail == true){
            return "YES";
        }
        return "NO";
    }

    public void setMail(boolean mail) {
        this.mail = mail;
    }


    @Override
    public String toString() {
        return "Name: " + super.getName() + "\n" 
        + "Address: " + super.getAddress() + "\n"
        + "Telephone: " + super.getPhone() + "\n"
        + "Customer Number: " + getCustomerNum() + "\n" 
        + "Mailing List: " + getMail();
    }


    
}
