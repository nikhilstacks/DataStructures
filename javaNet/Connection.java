package javaNet;

import java.io.IOException;
import java.io.InputStream;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;
import java.sql.Date;
import java.util.Scanner;

public class Connection {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            URL obj = new URL(sc.nextLine());
            try {
                URLConnection conn = obj.openConnection();

                System.out.println("Date: " + new Date(conn.getDate()));
                System.out.println("Content-type: " + conn.getContentType());
                System.out.println("Expiry: " + conn.getExpiration());
                System.out.println("Last modified: " + new Date(conn.getLastModified()));

                int l = conn.getContentLength();
                if (l == 0) {
                    System.out.println("content is not available...");
                    return;
                } else {
                    System.out.println("------Streaming--------");
                    int ch;
                    InputStream in = conn.getInputStream();
                    while ((ch = in.read()) != -1) {
                        System.out.print((char) ch);
                    }
                }
            } catch (IOException e) {
                e.printStackTrace();
            }

        } catch (MalformedURLException e) {
            e.printStackTrace();
        }
    }
}
