import java.util.Scanner;  // Needed for the Scanner class
/**
   This program allows the user to enter a temp
   then gives the celsius and kelvin of that temp
*/

public class TemperatureDemo{
   public static void main(String[] args){
   	
      // Create a Scanner object to read input.
      Scanner keyboard = new Scanner (System.in);
      double temp; 


   	System.out.printf("Enter the Fahrenheit temperature: ");
      temp = keyboard.nextDouble();

      Temperature input = new Temperature(temp);


   	System.out.printf("Celsius %.2f\n",input.getCelsius());
   	System.out.printf("Kelvin: %.2f\n",input.getKelvin());
   }
}