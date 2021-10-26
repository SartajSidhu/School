/**
   This program is a temperature class which takes farenheit temp
    and can change the temp and give it in celsius or kelvin
*/

public class Temperature{

  private double ftemp;
  public Temperature(double t){
  	ftemp = t;
  }
  public void setFarenheit(double newt){
    ftemp = newt;
  }
  public double getFahrenheit(){
  	return ftemp;
  }
  public double getCelsius(){
  	return (ftemp-32)*5.0/9.0;
  }
  public double getKelvin(){
  	return getCelsius()+273;
  }
}
