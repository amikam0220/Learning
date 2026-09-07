public class ComputeCommissions {
    /**
     * Compute the commission based on the sales amount
     * @param salesAmount
     * @return the commission
     */
    public static double computeCommission(double salesAmount) {
        final double stg1 = 5000.0;
        final double stg2 = 10000.0;
        final double rt1 = 0.06;
        final double rt2 = 0.08;
        final double rt3 = 0.1;
        double commission = 0.0;
        if (salesAmount > 0.0 && salesAmount < stg1) {
            commission = salesAmount * rt1;
        } else if (salesAmount < stg2) {
            commission = stg1 * rt1 + (salesAmount - stg1)
                    * rt2;
        } else {
            commission = stg1 * rt1 + (stg2 - stg1) * rt2 + (salesAmount - stg2) * rt3;
        }

        return commission;
    }
    public static void main(String[] args) {
        // print the head of the table
        System.out.printf("%-15s %-20s\n", "Sales Amount", "Commission");

        //test the function with some sample sales amounts
        double[] salesAmount = {10000, 15000, 20000, 25000, 30000, 35000, 40000, 45000, 50000, 55000, 60000, 65000,
                70000, 75000, 80000, 85000, 90000, 95000, 100000 };

        // print the commission for each sales amount
        for (double ele : salesAmount) {
            System.out.printf("%-15.0f %-20.1f\n", ele, computeCommission(ele));
        }
    }
}
