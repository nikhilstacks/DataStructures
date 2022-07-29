import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Student { // Student class
    int roll;
    String name;

    public int getRoll() {
        return roll;
    }

    public void setRoll(int roll) {
        this.roll = roll;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Student(int roll, String name) {
        super();
        this.roll = roll;
        this.name = name;
    }

    public String toString() {
        return "Student" + " " + this.roll + " " + this.name;
    }

}

class CodeComparator implements Comparator<Student> {

    @Override
    public int compare(Student o1, Student o2) {

        return o1.getRoll() - o2.getRoll();
    }

}

public class Arra {
    public static void main(String[] args) {
        ArrayList<Student> list = new ArrayList<Student>();
        list.add(new Student(1, "ram"));
        list.add(new Student(22, "sita"));
        list.add(new Student(3, "nikhil"));

        for (Student s : list)
            System.out.println(s);

        Collections.sort(list, new CodeComparator());
        System.out.println("-----------------");
        for (Student s : list)
            System.out.println(s);
    }
}
