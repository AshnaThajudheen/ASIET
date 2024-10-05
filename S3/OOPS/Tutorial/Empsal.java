import java.util.Scanner;

class Employee {
    int salary;

    void display() {
        System.out.println("Name of the class is Employee");
    }

    void calcSalary() {
        System.out.println("Salary of employee is " + salary);
    }
}

class Engineer extends Employee { 
}

class Empsal {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        Employee a = new Employee();
        Engineer b = new Engineer();

        System.out.println("Enter the salary of the employee:");
        a.salary = s.nextInt();
        a.display();
        a.calcSalary();

        System.out.println("Enter the salary of the Engineer:");
        b.salary = s.nextInt();
        b.display();
        b.calcSalary();

        s.close();
    }
}

