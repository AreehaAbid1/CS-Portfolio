public class RemoveDuplicateValues{
    public static void main(String[] args){
        int arr[]={2,4,5,2,3,4,7,2,5};
        int n=arr.length;
        System.out.print("Original array: ");
        for(int i=0;i<n;i++) System.out.print(arr[i]+" ");

        int newArr[]=new int[n];
        int size=0;
        boolean dup;

        for(int i=0;i<n;i++){
            dup=false;
            for(int j=0;j<size;j++){
                if(arr[i]==newArr[j]){
                    dup=true;
                    break;
                }
            }
            if(!dup){
                newArr[size]=arr[i];
                size++;
            }
        }

        System.out.print("\nArray after removing duplicates: ");
        for(int i=0;i<size;i++) System.out.print(newArr[i]+" ");

        System.out.println("\nSize of original array: "+n);
        System.out.println("Size of new array: "+size);
    }
}