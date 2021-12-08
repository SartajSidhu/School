public abstract class BankAccount{
    private double balance;
    private int deposits;
    private int withdraws;
    private double rate;
    private double charges;
    
    public BankAccount(double b, double r){
        balance = b;
        rate = r;
    }

    public void deposit(double d){
        balance+=d;
        deposits+=1;
    }

    public void withdraw(double w){
        balance-=w;
        withdraws+=1;
    }

    public void calcInterest(){
        double monthly = rate/12;
        monthly*=balance;
        balance+=monthly;
    }

    public void monthlyProcess(){
        balance-=charges;
        calcInterest();
        deposits = 0;
        withdraws = 0;
        charges = 0;
    }

    public double getBalance() {
        return this.balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public int getDeposits() {
        return this.deposits;
    }

    public void setDeposits(int deposits) {
        this.deposits = deposits;
    }

    public int getWithdraws() {
        return this.withdraws;
    }

    public void setWithdraws(int withdraws) {
        this.withdraws = withdraws;
    }

    public double getRate() {
        return this.rate;
    }

    public void setRate(double rate) {
        this.rate = rate;
    }

    public double getCharges() {
        return this.charges;
    }

    public void setCharges(double charges) {
        this.charges = charges;
    }
    @Override
    public String toString(){
        return "Balance: $" + getBalance() + "\n"
        + "Number of deposits: " + getDeposits() +"\n"
        + "Number of withdrawals: " + getWithdraws()+ "\n";
    }

}