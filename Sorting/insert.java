import java.util.*;

public class insert {
    public static void insert(int arr[])
    {
        int j, k, temp;
        for(int i = 1;i<5;i++)
        {
            j = i - 1;
            k = i;
            while (arr[k] < arr[j]) {
                temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
                k -= 1;
                j -= 1;
            }
        }
        for (int i = 0; i < 5;i++)
        System.out.printf("%d ",arr[i]);
    }
    public static void main(String[] args) {
        int arr[] = new int[5];
        Scanner scan = new Scanner(System.in);
        for(int i=0;i<5;i++)
        {
            arr[i] = scan.nextInt();
        }
        insert(arr);
        scan.close();
    }
}
