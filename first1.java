import java.util.*;
import java.io.*;
public class Solutioon
{
    public static void main(String ar[])throws Exception
    {
         int n,temp;
         Scanner sc=new Scanner(System.in);
         n=sc.nextInt();
         int arr[]=new int[n];
         for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
         for(int i=0;i<n;i++)
         {
           for(int j=i+1;j<n;j++)
          {
            if(arr[i]>arr[j])
           {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
           }
        }
      }
      for(int i=0;i<n-1;i++)
      {
          if(arr[i]==arr[i+1])
         {
               i++;
               continue;
         }
        else
          System.out.println(arr[i]);
     }
  }
}