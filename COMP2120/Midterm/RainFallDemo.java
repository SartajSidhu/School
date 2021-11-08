

public class RainFallDemo{
	public static void main(String[] args){

		double[] test = {1.6,2.1,1.7,3.5,-2.6,3.7,3.9,2.6,2.9,4.3,2.4,3.7};



		RainFall mons = new RainFall(test);

		System.out.printf("The total rainfall for this year is %f\n",mons.getTotal());
		System.out.printf("The average rainfall for this year is %f\n",mons.getAvg());
		System.out.printf("The month with the highest amount of rain is %d with %f\n",mons.getMost(),test[mons.getMost()]);
		System.out.printf("The month with the highest amount of rain is %d with %f\n",mons.getLeast(),test[mons.getLeast()]);

	}
}