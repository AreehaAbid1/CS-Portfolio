import java.util.Scanner;
public class LeapYear {
   public static void main(String args[]){
    int year;
    System.out.print("Enter a year: ");
    Scanner y = new Scanner (System.in);
    year = y.nextInt();
    if(year%4==0 && year%100!=0 || year%400==0){
        System.out.println(year+" is a LEAP YEAR");
    }
    else{
        System.out.println(year+" is NOT a LEAP YEAR");
    }
    y.close();
   }
}
