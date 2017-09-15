import java.util.*;
import java.io.*;
class CKH37_Removing_Char_Palindrome
{
  public static void main(String[] args)
  {
    System.out.println("ENTER THE STRING");
    Scanner s=new Scanner(System.in);
    String original=s.nextLine();
    //char[] c=original.toCharArray();
    for(int i=0;i<original.length();i++)
    {  String temp="";
       for(int j=0;j<original.length();j++)
       {
         if(i!=j)
         {
           temp=temp+original.charAt(j);
         }
       }
       //System.out.println(temp);
       String reverse=rev(temp);
       if(temp.equals(reverse))
         {
          System.out.println("AFTER REMOVING << "+original.charAt(i)+" >> THE STRING << "+original+" >> BECOMES << "+temp+" >> THAT IS PALINDROME\n");
         }
     }
  }
  static String rev(String r)
   {
      String x="";
    for(int i=(r.length())-1;i>=0;i--)
     {
        x=x+r.charAt(i);
     }
    return x;
   } 
}