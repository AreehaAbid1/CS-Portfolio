import java.util.Scanner;
public class NumberComparison {
    public static void main(String args[]){
        float v1, v2, v3;
        System.out.print("Enter three numbers: ");
        Scanner i1 = new Scanner (System.in);
        v1 = i1.nextFloat();
        Scanner i2 = new Scanner (System.in);
        v2 = i2.nextFloat();
        Scanner i3 = new Scanner (System.in);
        v3 = i3.nextFloat();
        if(v1==v2 && v2 == v3){
            System.out.println("All are EQUAL");
        }
        else if(v1>v2 && v1>v3){
            System.out.println(v1+" is BIGGEST");
        }
        else if(v2>v1 && v2>v3){
            System.out.println(v2+" is BIGGEST");
        }
        else{
            System.out.println(v3+" is BIGGEST");
        }
        i1.close();
        i2.close();
        i3.close();
    }
}
