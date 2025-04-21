// File: AccessSpecifierDemo.java
class Person {
    private String name = "Deep Mandal";
    int roll = 063;
    protected String city = "Noida";

    public String country = "India";


    public void showName() {
        System.out.println("Name: " + name);
    }
}

public class AccessSpecifierDemo {
    public static void main(String[] args) {
        Person p = new Person();

        p.showName(); 
        System.out.println("Roll: " + p.roll);
        System.out.println("City: " + p.city);

        System.out.println("Country: " + p.country);
    }
}