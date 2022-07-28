import java.util.ArrayList;
import java.util.Scanner;

class Data {
    int data;
    String name;

    public int getData() {
        return data;
    }

    public void setData(int data) {
        this.data = data;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Data(int data, String name) {
        super();
        this.data = data;
        this.name = name;
    }

    @Override
    public String toString() {
        return "Data [data=" + data + ", name=" + name + "]";
    }

}

class methods {
    public void insert(ArrayList a) {
        System.out.println("insert...");
    }

    public void update(ArrayList a) {
        System.out.println("update...");
    }

    public void delete(ArrayList a, int index) {
        System.out.println("Delete...");
    }

    public void showData(ArrayList<Data> a) {
        for (Data d : a) {
            System.out.println("[" + a + "]");
        }
    }
}

public class Query {
    public static void main(String[] args) {
        ArrayList<Data> a = new ArrayList<Data>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your choice... 1 for insert.. 2 for update.. 3 for delete.");
        // int input = sc.nextInt();
        a.add(new Data(1, "This is nix..."));
        methods m = new methods();
        m.showData(a);

    }
}
