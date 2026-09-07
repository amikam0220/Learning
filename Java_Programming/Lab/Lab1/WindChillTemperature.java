import java.util.Scanner;

public class WindChillTemperature {

    public static class WindChillTemperatureCalculator {
        private double outsideTemperature;
        private double speed;
        private double windChillTemperature;

        // conductor to initialize outside temperature and wind speed
        public WindChillTemperatureCalculator(double outsideTemperature, double speed) {
            this.outsideTemperature = outsideTemperature;
            this.speed = speed;
        }

        // get wind chill temperature
        public double getWindChillTemperature() {
            return windChillTemperature;
        }

        // calculate wind chill temperature
        public void calculateWindTemperature() {
            windChillTemperature = 35.74 + 0.6215 * outsideTemperature - 35.75 * Math.pow(speed, 0.16) + 0.4275 * outsideTemperature * Math.pow(speed,0.16);
        }

    }

    public static void main(String[] args) {
        // create a scanner object to read user input
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the temperature in Fahrenheit between -58°F and 41°F:");
        double outsideTemperature = input.nextDouble();
        System.out.println("Enter the wind speed (>= 2) in miles per hour:");
        double speed = input.nextDouble();

        // calculate wind chill temperature
        WindChillTemperatureCalculator result = new WindChillTemperatureCalculator(outsideTemperature, speed);
        result.calculateWindTemperature();
        System.out.printf("The wind chill index is %.5f",  result.getWindChillTemperature());

        input.close();
    }
    
}
