import java.util.*;  // Needed for the Scanner class
/**
   This program uses the savings account class and creates an obj
   then deposits to it abnd withdraws and calculates the interest for each month
   given by the user
*/

public class SavingsAccountDemo{
	public static void main(String[] args){ 
		// Create a Scanner object to read input.
		Scanner keyboard = new Scanner (System.in);
		double bal;
		double rate;
		int months;
		double val; // holds deposit or withdrawal amounts for forloop
		System.out.printf("Enter the starting balance: ");
		bal = keyboard.nextDouble();
		System.out.printf("Enter the annual interest rate: ");
		rate = keyboard.nextDouble();
		System.out.printf("How many months have passed since the account was established? : ");
		months = keyboard.nextInt();

		SavingsAccount user = new SavingsAccount(bal,rate);


		for(int i = 1;i<months+1;i++){ // loops from month 1 until months +1 since we didnt start at 0
			System.out.printf("Enter the amount deposited in month %d? :",i);
			val = keyboard.nextDouble();
			user.deposit(val);
			System.out.printf("Enter the amount withdrawn in month %d? :",i);
			val = keyboard.nextDouble();
			user.withdrawal(val);
			user.monthlyInterest();
		}
		System.out.printf("Total deposited: %.2f\n",user.getTotD());
		System.out.printf("Total withdrawn: %.2f\n",user.getTotW());
		System.out.printf("Interest earned: %.2f\n",user.getTotI());
		System.out.printf("Ending Balance: %.2f\n",user.getBal());
	}
}