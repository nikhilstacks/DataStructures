
public class TestFinally {
    public static void main(String[] args) {
        try {
            int data = 25 / 5;
            System.out.println(data);
        } catch (NullPointerException e) {
            System.out.println(e);
        } finally {
            System.out.println("This is inside the final block...");
        }

        System.out.println("rest of the code...");
    }
}
