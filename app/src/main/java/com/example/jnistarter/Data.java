package com.example.jnistarter;

public class Data {

    public Data(int age, String name) {
        this.age = age;
        this.name = name;
        //
    }

    private int age;

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
        // // 1

    }

    public String getName() {
        return name;
    } //2

    public void setName(String name) {
        this.name = name;
    }

    private String name;
}
