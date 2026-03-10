import java.util.*;

public class ArrayOperations{
    static int[] arr;
    static int size;
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args){
        System.out.print("Enter size of array: ");
        size = sc.nextInt();
        arr = new int[size];
        for(int i=0;i<size;i++){
            System.out.print("Enter element "+(i+1)+": ");
            arr[i]=sc.nextInt();
        }

        while(true){
            System.out.println("\n1.Insert at Start\n2.Insert at End\n3.Insert at Index\n4.Delete at Start\n5.Delete at End\n6.Delete at Index\n7.Display\n8.Exit");
            System.out.print("Enter choice: ");
            int ch=sc.nextInt();
            switch(ch){
                case 1: insertAtStart(); break;
                case 2: insertAtEnd(); break;
                case 3: insertAtIndex(); break;
                case 4: deleteAtStart(); break;
                case 5: deleteAtEnd(); break;
                case 6: deleteAtIndex(); break;
                case 7: display(); break;
                case 8: return;
                default: System.out.println("Invalid choice");
            }
        }
    }

    static void insertAtStart(){
        System.out.print("Enter element: ");
        int x=sc.nextInt();
        int[] newArr=new int[size+1];
        newArr[0]=x;
        for(int i=0;i<size;i++) newArr[i+1]=arr[i];
        arr=newArr;
        size++;
        display();
    }

    static void insertAtEnd(){
        System.out.print("Enter element: ");
        int x=sc.nextInt();
        int[] newArr=new int[size+1];
        for(int i=0;i<size;i++) newArr[i]=arr[i];
        newArr[size]=x;
        arr=newArr;
        size++;
        display();
    }

    static void insertAtIndex(){
        System.out.print("Enter index: ");
        int index=sc.nextInt();
        System.out.print("Enter element: ");
        int x=sc.nextInt();
        if(index<0||index>size){ System.out.println("Invalid index"); return;}
        int[] newArr=new int[size+1];
        for(int i=0;i<index;i++) newArr[i]=arr[i];
        newArr[index]=x;
        for(int i=index;i<size;i++) newArr[i+1]=arr[i];
        arr=newArr;
        size++;
        display();
    }

    static void deleteAtStart(){
        if(size==0){System.out.println("Empty array");return;}
        int[] newArr=new int[size-1];
        for(int i=1;i<size;i++) newArr[i-1]=arr[i];
        arr=newArr;
        size--;
        display();
    }

    static void deleteAtEnd(){
        if(size==0){System.out.println("Empty array");return;}
        int[] newArr=new int[size-1];
        for(int i=0;i<size-1;i++) newArr[i]=arr[i];
        arr=newArr;
        size--;
        display();
    }

    static void deleteAtIndex(){
        System.out.print("Enter index: ");
        int index=sc.nextInt();
        if(index<0||index>=size){ System.out.println("Invalid index"); return;}
        int[] newArr=new int[size-1];
        for(int i=0;i<index;i++) newArr[i]=arr[i];
        for(int i=index+1;i<size;i++) newArr[i-1]=arr[i];
        arr=newArr;
        size--;
        display();
    }

    static void display(){
        System.out.print("Array: ");
        for(int i=0;i<size;i++) System.out.print(arr[i]+" ");
        System.out.println();
    }
}