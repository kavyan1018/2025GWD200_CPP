
import java.util.Scanner;

class Employee {

    String empname;
    double empsalary;

    void work() {
        System.out.println(empname + " is working");
    }
}

class Manager extends Employee {

    String department;

    void manageTeam() {

        System.out.println(empname + " is managing the" + department + "team.");

    }
}

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Manager m = new Manager();

        System.out.print("Enter employee name: ");
        m.empname = sc.nextLine();

        System.out.print("Enter employee salary: ");
        m.empsalary = sc.nextDouble();
        sc.nextLine(); // buffer clear

        System.out.print("Enter department: ");
        m.department = sc.nextLine();

        System.out.println("\n ---------Employee Details---------");

        System.out.println("Name: " + m.empname);
        System.out.println("Salary: " + m.empsalary);
        System.out.println("Department: " + m.department);

        m.work();
        m.manageTeam();

        sc.close();
    }

}
