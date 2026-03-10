import java.util.Scanner;
public class WordAndCharCount {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any string: ");
        String str = sc.nextLine();
        int chars = str.length();
        String[] words = str.trim().split("\\s+");
        int wordCount = words.length;
        System.out.println("Total words: " + wordCount);
        System.out.println("Total characters: " + chars);
        sc.close();
    }
}