package ExceptionHandling;

public class TryReturn {
    public static void main(String[] args) {
        try {
            System.out.println(check());
        } catch (Exception x) {
            x.printStackTrace();

            System.out.println("rest of the code...");
        }
    }

    private static int check() {
        try {
            int res = 10 / 2;
            if (res == 5) {
                System.out.println("done...");
                return res;
            }
        } finally {
            System.out.println("finally");
            return 10;
        }
    }
}
