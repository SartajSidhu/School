/**
   This program is a class for player in the trivia game
   Sartaj Sidhu 2021-10-30
*/
public class Player{
	private int points;
	public Player(int p){
	points = p;	
	}
	public int getPoints(){
		return points;
	}
	public void addPoint(){
		points+=1;
	}
}