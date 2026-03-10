import java.util.*;

public class OperationsOn1DArray{
    static int[] arr = new int[10];
    static int size = 0;
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args){
        System.out.print("How many elements you want to enter (max 10): ");
        size = sc.nextInt();
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
        if(size==arr.length){System.out.println("Array full!");return;}
        System.out.print("Enter element: ");
        int x=sc.nextInt();
        for(int i=size;i>0;i--) arr[i]=arr[i-1];
        arr[0]=x;
        size++;
        display();
    }

    static void insertAtEnd(){
        if(size==arr.length){System.out.println("Array full!");return;}
        System.out.print("Enter element: ");
        int x=sc.nextInt();
        arr[size]=x;
        size++;
        display();
    }

    static void insertAtIndex(){
        if(size==arr.length){System.out.println("Array full!");return;}
        System.out.print("Enter index: ");
        int index=sc.nextInt();
        if(index<0||index>size){System.out.println("Invalid index");return;}
        System.out.print("Enter element: ");
        int x=sc.nextInt();
        for(int i=size;i>index;i--) arr[i]=arr[i-1];
        arr[index]=x;
        size++;
        display();
    }

    static void deleteAtStart(){
        if(size==0){System.out.println("Array empty!");return;}
        for(int i=0;i<size-1;i++) arr[i]=arr[i+1];
        size--;
        display();
    }

    static void deleteAtEnd(){
        if(size==0){System.out.println("Array empty!");return;}
        size--;
        display();
    }

    static void deleteAtIndex(){
        if(size==0){System.out.println("Array empty!");return;}
        System.out.print("Enter index: ");
        int index=sc.nextInt();
        if(index<0||index>=size){System.out.println("Invalid index");return;}
        for(int i=index;i<size-1;i++) arr[i]=arr[i+1];
        size--;
        display();
    }

    static void display(){
        System.out.print("Array: ");
        for(int i=0;i<size;i++) System.out.print(arr[i]+" ");
        System.out.println();
    }
}
