package ExceptionHandling;

import java.util.Scanner;

//Custom UD Checked Exception
class NotProperNameException extends Exception {
    NotProperNameException(String msg) {
        super(msg);
    }
}

class CheckedException {
    private String name;
    private int age;

    public static boolean containsAlphabet(String name) {
        for (int i = 0; i < name.length(); i++) {
            char ch = name.charAt(i);
            if (!(ch >= 'a' && ch <= 'z')) {
                return false;
            }
        }
        return true;
    }

    public CheckedException(String name, int age) throws NotProperNameException {
        if (!containsAlphabet(name) && name != null) {
            String msg = "Improper name(Should contain only characters" + "b/w a to z (all small)";

            NotProperNameException exName = new NotProperNameException(msg);
            throw exName;

        }
        this.name = name;
        this.age = age;
    }

    public void display() {
        System.out.println("Name of the student:" + this.name);
        System.out.println("Age of the Student" + this.age);
    }
}

public class customHandeling {

    public static void main(String args[]) throws NotProperNameException {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of the person.");
        String name = sc.next();

        System.out.println("Enter the age of the person.");
        int age = sc.nextInt();

        CheckedException obj = new CheckedException(name, age);
        obj.display();
    }

}