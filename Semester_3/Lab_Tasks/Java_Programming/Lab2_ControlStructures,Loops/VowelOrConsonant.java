import java.util.Scanner;
public class VowelOrConsonant {
    public static void main(String[] args) {
        char letter;
        System.out.print("Enter a character: ");
        Scanner c = new Scanner(System.in);
        letter = c.next().charAt(0);
        switch (letter){
            case 'a' : case 'A':
            System.out.println("Vowel");
            break;

            case 'e' : case 'E':
            System.out.println("Vowel");
            break;

            case 'i' : case 'I':
            System.out.println("Vowel");
            break;

            case 'o' : case 'O':
            System.out.println("Vowel");
            break;

            case 'u' : case 'U':
            System.out.println("Vowel");
            break;

            default:
            System.out.println(letter+" is a Consonant");
        }
        c.close();
    }
}
