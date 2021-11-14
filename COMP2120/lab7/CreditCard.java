public class CreditCard {
    private Money balance;
    private Money creditLimit;
    private Person owner;

    
    public CreditCard(Person newH, Money limit){
        owner = newH;
        creditLimit = limit;
        balance = new Money(0);
    }

    public Money getBalance() {
        Money secure = new Money(balance);
        return secure;
    }

    public Money getCreditLimit() {
        Money secure = new Money(creditLimit);
        return secure;
    }

    public String getPersonals() {
        return owner.toString();
    }

    public void charge(Money amount){
        if(creditLimit.compareTo(amount.add(balance)) == -1){
            System.out.println("Exceeds credit limit");
        }
        else{
            balance = balance.add(amount);
        }
    }

    public void payment(Money amount){
        balance = balance.subtract(amount);
    }




}
