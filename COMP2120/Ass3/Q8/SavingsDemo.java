public class SavingsDemo {
    public static void main(String[] args) {
        SavingsAccount one = new SavingsAccount(100, 0);
        SavingsAccount two = new SavingsAccount(100, 0);
        SavingsAccount three = new SavingsAccount(100, 0);
        SavingsAccount four = new SavingsAccount(100, 198.48);

        two.deposit(20);
        two.deposit(20);
        two.deposit(30);
        
        three.deposit(10);
        three.deposit(10);
        three.deposit(10);
        three.withdraw(100);
        three.withdraw(10);
  
        four.deposit(1);
        four.withdraw(100);
        four.monthlyProcess();
        
        System.out.println(one);
        System.out.println(two);
        System.out.println(three);
        System.out.println(four);
    }
}
