import java.util.Scanner;  // Needed for the Scanner class
import java.io.*;
import java.util.ArrayList; // import the ArrayList class

public class DepositAndWithdrawFiles{

	public static void main(String[] args) throws IOException{
		// Create a Scanner object to read input.
		Scanner keyboard = new Scanner (System.in);
		double rate;
		double val; // holds deposit or withdrawal amounts 
		String line; // for reading the files
		ArrayList<Double> deposits = new ArrayList<Double>();
		ArrayList<Double> withdrawals = new ArrayList<Double>();


		System.out.printf("Enter the savings account's annual interest rate: ");
		rate = keyboard.nextDouble();
		SavingsAccount user = new SavingsAccount(500.0,rate);

		FileReader fr = new FileReader("deposits.txt"); // reads deposits
      	BufferedReader be = new BufferedReader(fr);
      	Scanner ss = new Scanner(fr);
      	line = ss.nextLine();
      	while(ss.hasNext()){
        	deposits.add(Double.valueOf(line)); // adds to the array list
        	line = ss.nextLine();
      	}
        deposits.add(Double.valueOf(line)); // last entry
      	fr.close();
      	FileReader fr2 = new FileReader("withdrawals.txt"); // reads withdrawals
      	BufferedReader be2 = new BufferedReader(fr2);
      	Scanner ss2 = new Scanner(fr2);
      	line = ss2.nextLine();
      	while(ss2.hasNext()){
        	withdrawals.add(Double.valueOf(line)); // adds to the array list
        	line = ss2.nextLine();
      	}
        withdrawals.add(Double.valueOf(line)); // // last entry 
      	fr2.close();

      	for(int i = 0; i<deposits.size();i++){ // deposits all in the array list
      		user.deposit(deposits.get(i));
      	}
      	for(int i = 0; i<withdrawals.size();i++){ // withdraws all in the array list
      		user.withdrawal(withdrawals.get(i));
      	}
      	user.monthlyInterest();
		System.out.printf("Interest earned: %.2f\n",user.getTotI());
		System.out.printf("Ending Balance: %.2f\n",user.getBal());
	}
}
