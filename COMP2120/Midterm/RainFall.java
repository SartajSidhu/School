/**
   This program is a class for keeping track of total rainfall during the year
   Sartaj Sidhu 2021-10-30
*/


public class RainFall{
	private double[] months = new double[12];

/**
   This is the constuctor method to create a new rainfall obj
   @param m will be set to the months arraylist
*/
	public RainFall(double[] m){
	months = m ;
	}

/**
   This is an accessor method to return the total rain
   @return a double holding totalrain
*/

	public double getTotal(){
		double tot = 0;
		for (int i =0;i<12;i++){
				tot+=months[i];
		}
		return tot;
	}

/**
   This is an accessor method to return the average rainfall
   @return a double holding avg rainfall per month
*/

	public double getAvg(){
			double tot = 0;
		for (int i =0;i<12;i++){
				tot+=months[i];
		}
		return tot/12.0;
	}

/**
   This is an accessor method to return the month with most rain 
   @return a int telling what month 
*/

	public int getMost(){
		double m = months[0];
		int pos = 0;
		for (int i =0;i<12;i++){
				if(m<months[i]){
					m=months[i];	
					pos = i;
				}
		}
		return pos;
	}

/**
   This is an accessor method to return the month with least rain 
   @return a int telling what month 
*/

	public int getLeast(){
		double l = months[0];
		int pos = 0;
		for (int i =0;i<12;i++){
				if(l>months[i]){
					l=months[i];
					pos = i;	
				}
		}
		return pos;
	}
}

