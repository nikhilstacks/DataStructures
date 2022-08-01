package ExceptionHandling;

public class TestingThrow {
    public static void validate(int age) {
        if (age < 18) {
            throw new ArithmeticException("enter the valid value...");
        } else {
            System.out.println("Entered value is valid...");
        }
    }

    public static void main(String[] args) {
        validate(13);
        System.out.println("rest of the code...");
    }
}
