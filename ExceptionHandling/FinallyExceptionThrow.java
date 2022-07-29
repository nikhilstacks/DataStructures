package ExceptionHandling;

public class FinallyExceptionThrow {
    public static void main(String[] args) {
        try {
            check();
        } catch (Exception x) {
            x.printStackTrace();
        }
    }

    private static void check() {
        try {
            int res = 10 / 0;
            System.out.println(res);
        } finally {
            throw new ArithmeticException("Inside finally exception...");
        }
    }
}
