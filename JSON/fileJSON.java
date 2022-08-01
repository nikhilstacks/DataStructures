package JSON;

import java.io.FileWriter;
import java.io.IOException;

import org.json.simple.JSONArray;
import org.json.simple.JSONObject;

public class fileJSON {
    public static void main(String[] args) {
        JSONObject obj = new JSONObject();
        obj.put("age", new Integer(22));
        obj.put("name", "nikhil");
        JSONArray list = new JSONArray();
        list.add("msg1");
        list.add("msg2");
        list.add("msg3");

        obj.put("messages", list);

        System.out.println(obj);

        try (FileWriter file = new FileWriter("d:\\test.json")) {
            file.write(obj.toJSONString());
            file.flush();

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
