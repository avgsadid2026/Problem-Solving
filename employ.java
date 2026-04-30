 public class employ {
    String name;
    int id;
    double salary;

    employ(String name, int id, double salary) {
        name = name;
        id = id;
        salary = salary;
    }
    void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("Salary: " + salary);
    }
}
class manager extends employ {
    double bonus;
    manager(String name, int id, double salary, double bonus) {
        super(name, id, salary);//constructor er vitore constructor use korte Super use kora hoy
        bonus = bonus;
    }

    void displayTotalSalary() {
        System.out.println("Total Salary: " + (salary + bonus));
    }
}
class Main {
    public static void main(String[] args) {
        manager m = new manager("sadid", 25, 900000, 10000);
        m.displayInfo();
        m.displayTotalSalary();
    }
} 
    

