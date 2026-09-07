package Lab6;

import java.util.Date;

public class Account {
    private int id = 0;
    private double balance = 0;
    private double annualInterestRate = 0;
    private Date dateCreated;

    // no-arg constructor
    public Account() {
        id = 0;
        balance = 0;
        annualInterestRate = 0;
        dateCreated = new Date();
    }

    // constructor with specific id and initial balance
    public Account(int id, double balance) {
        this.id = id;
        this.balance = balance;
        this.dateCreated = new Date();
    }

    // accessors
    public int getID() {
        return id;
    }

    public double getBalance() {
        return balance;
    }

    public double getAnnualInterestRate() {
        return annualInterestRate;
    }

    public Date getDateCreated() {
        return dateCreated;
    }

    // mutators
    public void setID(int id) {
        this.id = id;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }

    // return the monthly interest
    public double getMonthlyInterestRate() {
        return annualInterestRate / 12;
    }

    // return the monthly interest
    public double getMonthlyInterest() {
        double monthlyInterestRate = getMonthlyInterestRate();
        return balance * monthlyInterestRate / 100;
    }

    // withdraws a specified amount, return the account after withdrawing
    public double withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return balance;
        } else {
            throw new IllegalArgumentException("No enough balance");
        }
    }

    // deposit a specified amount, return the account after deposit
    public double deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            return balance;
        } else {
            throw new IllegalArgumentException("Error deposit amount");
        }
    }
}
