import java.util.Scanner;
public class WordSearchAndReplace
 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String str = sc.nextLine();
        System.out.print("Enter word to find: ");
        String find = sc.nextLine();
        System.out.print("Enter word to replace it with: ");
        String rep = sc.nextLine();
        String result = str.replace(find, rep);
        System.out.println("Modified sentence: " + result);
        sc.close();
    }
}