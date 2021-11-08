/**
   This program is a class for questions in the trivia game
   Sartaj Sidhu 2021-10-30
*/
public class Question{
	private String q = "h";
	private String ans1= "h";
	private String ans2= "h";
	private String ans3= "h";
	private String ans4= "h";
	private String correct;
	//public Question(String ques, String a1, String a2, String, a3, String a4, String c){
	public Question(){
		//q = ques;
		//ans1 = a1;
		//ans2 = a2;
		//ans3 = a3;
		//ans4 = a4;
		//correct = c;
	}
	public String getQ(){
		return q;
	}
	public String getA1(){
		return ans1;
	}
	public String getA2(){
		return ans2;
	}
	public String getA3(){
		return ans3;
	}
	public String getA4(){
		return ans4;
	}
	public String getC(){
		return correct;
	}


	public void setQ(String s){
		q = s;
	}
	public void setA1(String s){
		ans1 = s;
	}
	public void setA2(String s){
		ans2 = s;
	}
	public void setA3(String s){
		ans3 = s;
	}
	public void setA4(String s){
		ans4 = s;
	}
	public void setC(String s){
		correct = s;
	}
}