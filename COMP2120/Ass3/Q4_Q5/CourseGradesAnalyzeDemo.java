public class CourseGradesAnalyzeDemo {
    public static void main(String[] args) {
        GradedActivity l = new GradedActivity(85.0);
        PassFailExam p = new PassFailExam(100,15);
        GradedActivity e = new GradedActivity(80.0);
        FinalExam f = new FinalExam(10, 2);
 
        CourseGrades sartaj = new CourseGrades();
        sartaj.setLab(l);
        sartaj.setPassFailExam(p);
        sartaj.setEssay(e);
        sartaj.setFinalExam(f);
 
        System.out.println(sartaj);
        System.out.println("Average Score: "+ sartaj.getAverage());
        System.out.println("Highest Score: "+ sartaj.getHighest().getScore());
        System.out.println("Lowest Score: "+ sartaj.getLowest().getScore());

    }
}
