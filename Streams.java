import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.ArrayList;

class Stud implements Serializable {
    private int code;
    private String name;

    public int getCode() {
        return code;
    }

    public void setCode(int code) {
        this.code = code;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Stud(int code, String name) {
        super();
        this.code = code;
        this.name = name;
    }

    public String toString() {
        return "Stud [code=" + code + ", name=" + name + "]";
    }

}

public class Streams {
    public static void main(String[] args) {
        ArrayList<Stud> list = new ArrayList();
        list.add(new Stud(1, "Nikhil"));
        list.add(new Stud(2, "Neeraj"));
        list.add(new Stud(3, "Mansi"));
        list.add(new Stud(4, "Mayank"));

        for (Stud s : list)
            System.out.println(s);

        // --------------------Serialization---------//
        File file = new File("Stud.ser");
        try {
            FileOutputStream fos = new FileOutputStream(file);
            ObjectOutputStream oos = new ObjectOutputStream(fos);
            oos.writeObject(list);
            oos.close();
            System.out.println("Sirialization done...");

            // ----------------Desirialization---------//
            FileInputStream fis = new FileInputStream(file);
            ObjectInputStream ois = new ObjectInputStream(fis);

            ArrayList<Stud> tmp = (ArrayList<Stud>) ois.readObject();

            for (Stud t : tmp)
                System.out.println(t);

            ois.close(); // ois streams

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

    }
}
