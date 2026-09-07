public class PopulationProjection {
    // model of population question
    public static class PopulationModel {
        private long popu;
        private double increRate;
        private double decreRate;
        private double time;

        // conductor to initialize population
        public PopulationModel(long iniPopu) {
            popu = iniPopu;
        }

        // get Popu
        public long getPopu() {
            return popu;
        }

        // compute increasing rate
        public void setIncreRate(double birthRate, double immiRate) {
            increRate = birthRate + immiRate;
        }

        // compute decrease rate
        public void setDecreRate(double deathRate) {
            decreRate = deathRate;
        }

        // set certain time(seconds)
        public void setTime(double time) {
            this.time = time;
        }

        // compute the population after certain time(seconds)
        public void computePopu() {
            popu = (long) (popu + ((increRate - decreRate) * time));
        }
    }

    public static void main(String[] args) {
        // initialize the model
        long iniPop = 312_032_486;
        double birthRate = 1.0 / 7;
        double deathRate = 1.0 / 13;
        double immiRate = 1.0 / 45;
        long gap = 365 * 24 * 60 * 60;
        PopulationModel USPopulation = new PopulationModel(iniPop);
        USPopulation.setIncreRate(birthRate, immiRate);
        USPopulation.setDecreRate(deathRate);

        // compute the poplation of each year in next five years
        for (int years = 1; years <= 5; years++) {
            USPopulation.setTime(gap);
            USPopulation.computePopu();
            System.out.println("The population after "
                    + years
                    + " years is :"
                    + USPopulation.getPopu());
        }
    }
}