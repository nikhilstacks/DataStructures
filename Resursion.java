import java.util.Scanner;

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
        Scanner s = new Scanner(System.in);
        int num = s.nextInt();
        System.out.println(r.factorial(num));
        s.close();
    }
}
