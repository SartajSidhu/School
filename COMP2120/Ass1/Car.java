
/**
   This program is a car class so a car obj can be created and accesed and change speeds
*/
public class Car{

  private int yrmodel; // year model
  private int speed;
  private String make;
  public Car(int ym, String mk){ // int for year model and string for make
  	yrmodel = ym;
  	make = mk; // set vars
  	speed = 0;
  }
  public int getYM(){ 
  	return yrmodel;
  }
  public int getSPD(){
  	return speed;
  }
  public String getMK(){
  	return make;
  }
  public void accelerate(){
  	speed+=5;
  }
  public void brake(){
  	if(speed>0){
  		speed-=5;	
  	}
  }
}
