package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class MaximumMedian {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int k = in.nextInt();

        int[] arr;
        arr = new int[n];
        for(int i=0;i<n;i++) {
            arr[i] = in.nextInt();
        }

        Arrays.sort(arr);

        int[] A = new int[(n+1)/2];
        for(int i=((n+1)/2)-1; i<n;i++)
        {
            A[i-((n+1)/2)-1]= arr[((n+1)/2)-1];
        }

        int temp = 0;
        for(int i=0;i<((n+1)/2);i++)
        {
            temp+=arr[n-1]-A[i];

        }
        if(temp == k)
        {
            System.out.println(arr[n-1]);
        }
        else if (temp>k)
        {
            System.out.println(A[0]);
        }
        else
        {
            int ans = arr[n-1];
            k-=temp;
            while(k>=arr.length)
            {
                k=k%arr.length;
                ans++;
            }
            System.out.println(ans);
        }


    }

}
