//This program takes 2 inputs from the user, and outputs their mileage. Sartaj Sidhu. 2021-09-06.
import java.util.Scanner;
public class Mileage
{
public static void main(String[] args)
{
// Add your declaration and code here.
	Scanner keyboard = new Scanner(System.in); // scanner to read inputs

	double miles; //stores miles given by user
	double gallons; // stores gallons given by user
	double mileage; // will be used to store calculated mileage

	System.out.print("Welcome this program will calculate your Mileage!\n");
	System.out.print("How many miles driven?: ");
	miles = keyboard.nextDouble();
	// set miles to user input
	System.out.print("How many gallons used?: ");
	gallons = keyboard.nextDouble();
	//set gallons to user input
	mileage = miles/gallons;
	// calculate miles per gallon and set it to mileage
	System.out.printf("Your mileage is : %.2fMPG\n",mileage);
	// print for user what their mileage is
}
}
