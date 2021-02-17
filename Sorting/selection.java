import java.util.*;
import java.io.*;

public class selection {
    public static void sort(int ar[])
    {
        int minIndex,temp;
        for(int i=0;i<5;i++)
        {
            minIndex = i;
            for (int j = i + 1; j < 5; j++) {
                if (ar[minIndex] > ar[j]) {
                    minIndex = j;
                }
            }
            temp = ar[i];
            ar[i] = ar[minIndex];
            ar[minIndex] = temp;

        }
        for (int i = 0; i < 5;i++)
        System.out.printf("%d ",ar[i]);
    }
    public static void main(String[] args) {
        int ar[] = new int[5];
        System.out.println("Enter the array elements");
        Scanner scan = new Scanner(System.in);
        for(int i =0;i<5;i++)
        {
            ar[i] = scan.nextInt();
        }
        sort(ar);
        scan.close();

    }
}