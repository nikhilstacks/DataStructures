package javaNet;

import java.net.InetAddress;
import java.net.UnknownHostException;
import java.util.Scanner;

public class IP {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String site;
        System.out.println("Enter your site name: ");
        site = sc.next();

        InetAddress ip = null;
        try {
            ip = InetAddress.getByName(site);
        } catch (UnknownHostException e) {
            e.printStackTrace();
        }
        System.out.println("IP address: " + ip);
        System.out.println("rest of the code...");
        sc.close();
    }
}
