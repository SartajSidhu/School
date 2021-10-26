import java.util.Scanner;

/**
   This program demonstrates static methods
*/




public class Geometry
{
   public static void main(String[] args)
   {
      int choice;       // The user's choice
      double value = 0; // The method's return value
      char letter;      // The user's Y or N decision
      double radius;    // The radius of the circle
      double length;    // The length of the rectangle
      double width;     // The width of the rectangle
      double height;    // The height of the triangle
      double base;      // The base of the triangle
      double side1;     // The first side of the triangle
      double side2;     // The second side of the triangle
      double side3;     // The third side of the triangle

      // Create a scanner object to read from the keyboard
      Scanner keyboard = new Scanner(System.in);

      // The do loop allows the menu to be displayed first
      do
      {
         // TASK #1 Call the printMenu method
        printMenu();

         choice = keyboard.nextInt();

         switch(choice)
         {
            case 1:
               System.out.print("Enter the radius of " +
                                "the circle: ");
               radius = keyboard.nextDouble();

               // TASK #3 Call the circleArea method and
               // store the result in the value variable
               value = circleArea(radius);

               System.out.println("The area of the " +
                                  "circle is " + value);
               break;
            case 2:
               System.out.print("Enter the length of " +
                                "the rectangle: ");
               length = keyboard.nextDouble();
               System.out.print("Enter the width of " +
                                "the rectangle: ");
               width = keyboard.nextDouble();

               // TASK #3 Call the rectangleArea method and
               // store the result in the value variable
               value = rectangleArea(length,width);

               System.out.println("The area of the " +
                                  "rectangle is " + value);
               break;
            case 3:
               System.out.print("Enter the height of " +
                                "the triangle: ");
               height = keyboard.nextDouble();
               System.out.print("Enter the base of " +
                                "the triangle: ");
               base = keyboard.nextDouble();

               // TASK #3 Call the triangleArea method and
               // store the result in the value variable
               value = triangleArea(base,height);

               System.out.println("The area of the " +
                                  "triangle is " + value);
               break;
            case 4:
               System.out.print("Enter the radius of " +
                                "the circle: ");
               radius = keyboard.nextDouble();

               // TASK #3 Call the circumference method and
               // store the result in the value variable
               value = circleCircumference(radius);

               System.out.println("The circumference " +
                                  "of the circle is " +
                                  value);
               break;
            case 5:
               System.out.print("Enter the length of " +
                                "the rectangle: ");
               length = keyboard.nextDouble();
               System.out.print("Enter the width of " +
                                "the rectangle: ");
               width = keyboard.nextDouble();

               // TASK #3 Call the perimeter method and
               // store the result in the value variable
               value = rectanglePerimeter(length,width);

               System.out.println("The perimeter of " +
                                  "the rectangle is " +
                                  value);
               break;
            case 6:
               System.out.print("Enter the length of " +
                                "side 1 of the " +
                                "triangle: ");
               side1 = keyboard.nextDouble();
               System.out.print("Enter the length of " +
                                "side 2 of the " +
                                "triangle: ");
               side2 = keyboard.nextDouble();
               System.out.print("Enter the length of " +
                                "side 3 of the " +
                                "triangle: ");
               side3 = keyboard.nextDouble();

               // TASK #3 Call the perimeter method and
               // store the result in the value variable
               value = trianglePermiter(side1,side2,side3);

               System.out.println("The perimeter of " +
                                  "the triangle is " +
                                  value);
               break;
            default:
               System.out.println("You did not enter " +
                                  "a valid choice.");
         }
         keyboard.nextLine(); // Consume the new line

         System.out.println("Do you want to exit " +
                            "the program (Y/N)?: ");
         String answer = keyboard.nextLine();
         letter = answer.charAt(0);

      } while(letter != 'Y' && letter != 'y');
   }

   // TASK #1 Create the printMenu method here
   public static void printMenu(){
    System.out.println("This is a geometry calculator");
    System.out.println("Choose what you would like to calculate");
    System.out.println("1. Find the area of a circle");
    System.out.println("2. Find the area of a rectangle");
    System.out.println("3. Find the area of a triangle");
    System.out.println("4. Find the circumference of a circle");
    System.out.println("5. Find the perimeter of a rectangle");
    System.out.println("6. Find the perimeter of a triangle");
    System.out.print("Enter the number of your choice: ");
   }
   // TASK #2 Create the value-returning methods here
   /**
   calculates the area of a circle 
   needs a radius to operate and outputs the area
   @param r radius of the circle
   @return a double as the area of the circle
   */

   public static double circleArea(double r){
    return Math.PI*Math.pow(r,2);
   }

   /**
   calculates the area of a rectangle 
   needs length and width to operate and outputs the area
   @param l length of the rectangle
   @param w width of the rectangle
   @return a double as the area of the rectangle
   */
   public static double rectangleArea(double l, double w){
    return l*w;
   }

   /**
   calculates the area of a triangle
   needs a base and height to operate and outputs the area
   @param b base of the triangle
   @param H height of the triangle
   @return a double as the area of the triangle
   */
   public static double triangleArea(double b, double h){
    return 0.5*b*h;
   }

   /**
   calculates the circumfrence of a circle 
   needs a radius to operate and outputs the circumfrence
   @param r radius of the circle
   @return a double as the circumfrence of the circle
   */
   public static double circleCircumference(double r){
    return 2.0*Math.PI*r;
   }

   /**
   calculates the peremiter of a rectangle 
   needs a length and width to operate and outputs the perimter
   @param l length of the rectangle
   @param w width of the rectangle
   @return a double as the perimter of the rectangle
   */
   public static double rectanglePerimeter(double l, double w){
    return 2.0*l+2.0*w;
   }

   /**
   calculates the perimter of a triangale 
   needs a the lenght of all sides to operate and outputs the perimter
   @param l1 one side of the triangle
   @param l2 other side of the triangle
   @param l3 last side of the triangle
   @return a double as the peremiter of the triangle
   */
   public static double trianglePermiter(double l1, double l2, double l3){
    return l1+l2+l3;
   }
   // TASK #4 Write javadoc comments for each method
}
