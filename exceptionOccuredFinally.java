
public class exceptionOccuredFinally {
    public static void main(String[] args) {
        try {
            int data = 25 / 0;
            System.out.println(data);
            int[] arr = null;
            System.out.println(arr);
        } catch (NullPointerException e) {
            System.out.println(e);
        } catch (ArithmeticException e) {
            System.out.println(e);
        } finally {
            System.out.println("This is inside the final block...");
        }

        System.out.println("rest of the code...");
    }
}
