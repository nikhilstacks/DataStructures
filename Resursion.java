class recur {
    public int factorial(int num) {
        if (num == 0 || num == 1) {
            return 1;
        } else
            return num * factorial(num - 1);
    }
}

public class Resursion {
    public static void main(String[] args) {
        recur r = new recur();
        System.out.println(r.factorial(5));
    }
}
