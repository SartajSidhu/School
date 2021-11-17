public class CheckingAccount extends BankAccount {
    private static double fee = 0.15;

    public CheckingAccount(String name, double amount){
        super(name,amount);
        super.setAccountNumber(getAccountNumber()+"-10");
    }

    @Override
    public boolean withdraw(double amount){
        amount +=fee;
        return super.withdraw(amount);
    }
    
}
