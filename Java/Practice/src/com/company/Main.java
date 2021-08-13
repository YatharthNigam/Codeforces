package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();
        while(t--!=0)
        {
               int W= sc.nextInt();
               int H= sc.nextInt();
               int x1= sc.nextInt();
               int y1= sc.nextInt();
               int x2= sc.nextInt();
               int y2 = sc.nextInt();
               int w= sc.nextInt();
               int h= sc.nextInt();
               int ww= y2-y1;
               int hh=x2-x1;
               if (w+ww <= W || h+hh<=H)
                   System.out.println("Yes");
               else
                   System.out.println("No");
        }
    }
}