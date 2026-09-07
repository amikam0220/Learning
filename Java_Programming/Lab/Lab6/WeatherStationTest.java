package Lab6;

public class WeatherStationTest {
    public static class WeatherStation {

        private double temperature;
        private double pressure;

        // no-arg constructor
        public WeatherStation() {
            temperature = 0;
            pressure = 1;
        }

        // constructor with temperature and pressure
        public WeatherStation(double temperature, double pressure) {
            this.temperature = temperature;
            this.pressure = pressure;
        }

        // static method to construct WeatherStation
        public static WeatherStation ImperialUnitConstructor(double temperature, double pressure) {
            double temp = temperature * 9 / 5 + 32;
            double pres = pressure / 14.5037738;
            return new WeatherStation(temp, pres);
        }

        // Metric getters
        public double getTemperature() {
            return temperature;
        }

        public double getPressure() {
            return pressure;
        }

        // Imperial getters
        public double getTemperatureFahrenheit() {
            return temperature * 9 / 5 + 32;
        }

        public double getPressurePSI() {
            return pressure * 14.5037738;
        }

        // Metric setters
        public void setTemperature(double temperature) {
            this.temperature = temperature;
        }

        public void setPressure(double pressure) {
            this.pressure = pressure;
        }

        // Imperial setters
        public void setTemperatureFahrenheit(double temperature) {
            this.temperature = (temperature - 32) * 5.0 / 9.0;
        }

        public void setPressurePSI(double pressure) {
            this.pressure = pressure / 14.5037738;
        }
    }

    /**
     * display the data of WeatherStation
     * @param1 
     * @param2 the object 
     */
    public static void DisplayWeatherStaton(WeatherStation station) {
        System.out.printf("Metric: %.2f, %.4f\n",
                station.getTemperature(), station.getPressure());
        System.out.printf("Imperial: %.2f, %.2f\n",
                station.getTemperatureFahrenheit(), station.getPressurePSI());
        System.out.println();
    }
    public static void main(String[] args) {
        WeatherStation station1 = new WeatherStation();
        WeatherStation station2 = new WeatherStation(35, 0.5);
        WeatherStation station3 = WeatherStation.ImperialUnitConstructor(68, 21);

        System.out.println("The data of these stations are:");
        System.out.println("Station 1:");
        DisplayWeatherStaton(station1);
        System.out.println("Station 2:");
        DisplayWeatherStaton(station2);
        System.out.println("Station 3:");
        DisplayWeatherStaton(station3);
    }
}
