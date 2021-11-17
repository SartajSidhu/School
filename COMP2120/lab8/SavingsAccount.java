public class SavingsAccount extends BankAccount {
    private double rate = 2.5;
    private int savingsNumber = 0;
    private String accountNumber;

    public SavingsAccount(String name, double amount){
        super(name,amount);
        accountNumber = super.getAccountNumber()+"-"+savingsNumber;
        System.out.println(accountNumber);
    }

    public void postInterest(){
        setBalance(getBalance()+getBalance()*rate);
    }

    @Override
    public String getAccountNumber(){
        return accountNumber;
    }

    public SavingsAccount(BankAccount oldAccount,double amount){
        super(oldAccount,amount);
        savingsNumber++;
        accountNumber = super.getAccountNumber()+"-"+savingsNumber;
    }
}
