import java.util.Scanner; 

// ---------------- PET NODE ----------------
class Pet {
    int id;
    String name;
    String type;
    String status;
    Pet next;

    Pet(int id, String name, String type) {
        this.id = id;
        this.name = name;
        this.type = type;
        this.status = "AVAILABLE";
        this.next = null;
    }
}

// ---------------- LINKED LIST ----------------
class PetLinkedList {
    Pet head;

    void addPet(Pet pet) {
        if (head == null) {
            head = pet;
        } else {
            Pet temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = pet;
        }
    }

    void displayPets() {
        if (head == null) {
            System.out.println("No pets available.");
            return;
        }

        Pet temp = head;
        while (temp != null) {
            System.out.println(
                "ID: " + temp.id +
                ", Name: " + temp.name +
                ", Type: " + temp.type +
                ", Status: " + temp.status
            );
            temp = temp.next;
        }
    }
}

// ---------------- QUEUE ----------------
class AdoptionQueue {
    Pet front, rear;

    void enqueue(Pet pet) {
        if (rear == null) {
            front = rear = pet;
        } else {
            rear.next = pet;
            rear = pet;
        }
    }

    Pet dequeue() {
        if (front == null) return null;
        Pet temp = front;
        front = front.next;
        if (front == null) rear = null;
        temp.next = null;
        return temp;
    }

    boolean isEmpty() {
        return front == null;
    }
}

// ---------------- STACK ----------------
class ActionStack {
    ActionNode top;

    class ActionNode {
        String action;
        ActionNode next;

        ActionNode(String action) {
            this.action = action;
        }
    }

    void push(String action) {
        ActionNode newNode = new ActionNode(action);
        newNode.next = top;
        top = newNode;
    }

    String pop() {
        if (top == null) return null;
        String action = top.action;
        top = top.next;
        return action;
    }

    boolean isEmpty() {
        return top == null;
    }
}

// ---------------- MAIN CLASS ----------------
public class PetFinderSystem {

    static Scanner sc = new Scanner(System.in);

    static PetLinkedList petList = new PetLinkedList();
    static AdoptionQueue adoptionQueue = new AdoptionQueue();
    static ActionStack actionStack = new ActionStack();

    static Pet[] petArray = new Pet[100];
    static int nextId = 1;

    public static void main(String[] args) {

        int choice;
        do {
            System.out.println("\n=== PET FINDER SYSTEM ===");
            System.out.println("1. Add Pet");
            System.out.println("2. Mark Pet Lost");
            System.out.println("3. Enqueue for Adoption");
            System.out.println("4. Adopt Pet");
            System.out.println("5. Undo Last Action");
            System.out.println("6. Display All Pets");
            System.out.println("0. Exit");
            System.out.print("Choose: ");
            choice = sc.nextInt();
            sc.nextLine(); // clear buffer

            switch (choice) {
                case 1 -> addPet();
                case 2 -> markLost();
                case 3 -> enqueueAdoption();
                case 4 -> adoptPet();
                case 5 -> undoAction();
                case 6 -> petList.displayPets();
                case 0 -> System.out.println("Exiting system...");
                default -> System.out.println("Invalid choice.");
            }

        } while (choice != 0);
    }

    // ---------------- FUNCTIONS ----------------
    static void addPet() {
        System.out.print("Enter pet name: ");
        String name = sc.nextLine();
        System.out.print("Enter pet type: ");
        String type = sc.nextLine();

        Pet pet = new Pet(nextId, name, type);
        petList.addPet(pet);
        petArray[nextId] = pet;

        actionStack.push("ADD:" + nextId);
        System.out.println("Pet added with ID: " + nextId);
        nextId++;
    }

    static void markLost() {
        System.out.print("Enter pet ID: ");
        int id = sc.nextInt();

        if (petArray[id] != null) {
            petArray[id].status = "LOST";
            actionStack.push("LOST:" + id);
            System.out.println("Pet marked as LOST.");
        } else {
            System.out.println("Pet not found.");
        }
    }

    static void enqueueAdoption() {
        System.out.print("Enter pet ID: ");
        int id = sc.nextInt();

        Pet pet = petArray[id];
        if (pet != null && pet.status.equals("AVAILABLE")) {
            adoptionQueue.enqueue(pet);
            actionStack.push("ENQUEUE:" + id);
            System.out.println("Pet added to adoption queue.");
        } else {
            System.out.println("Pet not available.");
        }
    }

    static void adoptPet() {
        Pet pet = adoptionQueue.dequeue();
        if (pet != null) {
            pet.status = "ADOPTED";
            actionStack.push("ADOPT:" + pet.id);
            System.out.println("Pet adopted successfully.");
        } else {
            System.out.println("No pets in adoption queue.");
        }
    }

    static void undoAction() {
        if (actionStack.isEmpty()) {
            System.out.println("Nothing to undo.");
            return;
        }

        String action = actionStack.pop();
        String[] parts = action.split(":");
        int id = Integer.parseInt(parts[1]);

        if (parts[0].equals("ADOPT") || parts[0].equals("LOST")) {
            petArray[id].status = "AVAILABLE";
            System.out.println("Last action undone.");
        }
    }
}
