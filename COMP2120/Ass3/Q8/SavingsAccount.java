public class SavingsAccount extends BankAccount{
    private boolean status;

    public SavingsAccount(double b, double r){
        super(b, r);
        status = false;
        if(b>=25){
            status = true;
        }
    }

    public void withdraw(double w){
        if(status == true){
            super.withdraw(w);
            if(super.getBalance()<25){
                status = false;
            }
        }
        else{
            throw new IllegalArgumentException("Inactive Account!");
        }
    }

    public void deposit(double d){
        super.deposit(d);
        if(super.getBalance()>=25){
            status = true;
        }
    }

    public void monthlyProcess(){
        if(super.getWithdraws()>4){
            super.setCharges(super.getWithdraws()-4);
        }
        super.monthlyProcess();
        if(super.getBalance()<25){
            status = false;
        }
    }
    
}
