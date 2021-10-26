/**
   This program is a savings account class makes a saving accout  obj
   changes the balance of tbhe account with deposits and withdrawals
*/
public class SavingsAccount{
	private double balance;
	private double air;// annual interest rate
	private double totalD;
	private double totalW;
	private double totalI;

	public SavingsAccount(double b, double r){
		balance = b;
		air = r;
	}
	public void withdrawal(double w){
		balance-=w;
		totalW+=w;
	}
	public void deposit(double d){
		balance+=d;
		totalD+=d;
	}
	public void monthlyInterest(){
		totalI+=air/12*balance;
		balance=balance + air/12*balance;
	}
	public double getBal(){
		return balance;
	}
	public double getTotW(){
		return totalW;
	}
	public double getTotD(){
		return totalD;
	}
	public double getTotI(){
		return totalI;
	}
}