/**
   This program uses the car class and gives outputs about the car also speeds it up and stops it
*/
public class CarDemo{
   public static void main(String[] args){
   	// create a car obj
   	Car bimmer = new Car(2002,"BMW");
   	System.out.printf("Current status of the car:\n");
   	System.out.printf("Year model: %d\n",bimmer.getYM());
   	System.out.printf("Make: %s\n",bimmer.getMK());
   	System.out.printf("Speed: %d\n",bimmer.getSPD());
   	System.out.printf("Accelerating...\n");
   	for(int i = 0;i<5;i++){
   		bimmer.accelerate();
   	}
   	System.out.printf("Now the speed is: %d\n",bimmer.getSPD());
   	System.out.printf("Braking...\n");
   	for(int i = 0;i<5;i++){
   		bimmer.brake();
   	}
   	System.out.printf("Now the speed is: %d\n",bimmer.getSPD());
   }
}