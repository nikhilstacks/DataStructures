import java.util.*;
import java.util.Collections;
import java.text.*;

public class Collection {

    public void getData() {
        Scanner s = new Scanner(System.in);
        Date date = null;
        SimpleDateFormat sdf = new SimpleDateFormat("dd-mm-yyyy");
        ArrayList<Date> dList = new ArrayList<Date>();
        int n = s.nextInt();
        for (int i = 0; i < n; i++) {
            try {
                date = sdf.parse(s.next());
                dList.add(date);

            } catch (ParseException e) {
                e.printStackTrace();
            }
        }

        Collections.sort(dList);

        for (Date tmp : dList) {
            System.out.println(sdf.format(tmp));
        }
        s.close();
    }

    public static void main(String[] args) {
        Collection c = new Collection();
        c.getData();
    }
}