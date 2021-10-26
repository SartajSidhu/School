/**
   This program is a class for modeling a television
   Sartaj Sidhu 2021-10-26
*/
public class Television{
	private static String manufacturer; //holds the brand name 
	private static int screenSize; //holds the screen size
	private boolean powerOn; //true if power is on false if pwoer is off
	private int channel; // channel number
	private int volume; //volume if 0 its silent
/**
   This is the constuctor method to create a new television obj
   @param brand will be set to manufacturer of the tv obj
   @param size will be set to screensize of the tv obj
*/
	public Television(String brand, int size){
		manufacturer = brand;
		screenSize = size;
		powerOn = false;
		volume = 20;
		channel = 2;
	}
/**
   This is an accessor method to return the volume
   @return an integer holding volume
*/
	public int getVolume(){
		return volume;
	}
/**
   This is an accessor method to return the channel
   @return an integer holding the channel number
*/
	public int getChannel(){
		return channel;
	}
/**
   This is an accessor method to return the manufacturer
   @return a string holding the brand name 
*/
	public String getManufacturer(){
		return manufacturer;
	}
/**
   This is an accessor method to return the screensize
   @return an integer holding the screensize in inches
*/
	public int getScreenSize(){
		return screenSize;
	}

/**
   This is a method to change the channel
   @param c is an integer holding the channel number
*/
	public void setChannel(int c){
		channel = c;
	}	

/**
   This is a method to turn on or off the tv
*/
   public void power(){
   	powerOn = !powerOn;
   }

/**
   This is a method to increase the volume
*/
   public void increaseVolume(){
   	volume+=1;
   }

/**
   This is a method to decrease the volume
*/
   public void decreaseVolume(){
   	volume-=1;
   }




}