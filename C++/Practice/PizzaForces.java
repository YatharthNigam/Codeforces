

import java.util.Scanner;

public class PizzaForces {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t!=0){
            t-=1;
            long n = sc.nextLong();
            while(n<6 || n%2!=0) n++;
            System.out.println(n/2*5);
        }
    }
}