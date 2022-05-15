package com.company;


public class Energy {

    private String Brand;       //Бренд

    private String Taste;       //
    private String Name;
    private double EnergyValue, Сaffeine, Taurine, Price, Volume;

    Energy() {
        this.Brand = "black monster";
        this.EnergyValue = 325;
        this.Name = "ultra";
        this.Price = 565;
        this.Taste = "coconut and fructs";
        this.Taurine = 56;
        this.Volume = 0.5;
        this.Сaffeine = 56;
    }
////////////////////////////////////////////


    public String getBrand() {
        return Brand;
    }

    public void setBrand(String brand) {
        Brand = brand;
    }

    public String getTaste() {
        return Taste;
    }

    public void setTaste(String taste) {
        Taste = taste;
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public double getEnergyValue() {
        return EnergyValue;
    }

    public void setEnergyValue(double energyValue) {
        EnergyValue = energyValue;
    }

    public double getСaffeine() {
        return Сaffeine;
    }

    public void setСaffeine(double сaffeine) {
        Сaffeine = сaffeine;
    }

    public double getTaurine() {
        return Taurine;
    }

    public void setTaurine(double taurine) {
        Taurine = taurine;
    }

    public double getPrice() {
        return Price;
    }

    /**
     * @param price
     */
    public void setPrice(double price) {
        Price = price;
    }

    /**
     * @return
     */
    public double getVolume() {
        return Volume;
    }

    /**
     * dasdsadasdasd
     *
     * @param volume dsadsa
     */
    public void setVolume(double volume) {
        Volume = volume;
    }

    ////

    public String AllInformation() {
        String information = "Information about Energy drink:\n";
        information +=
                "\tBrand: " + Brand + "\n" +
                        "\tName: " + Name + "\n" +
                        "\tTaste: " + Taste + "\n" +
                        "\tEnergyValue: " + EnergyValue + "\n" +
                        "\tCaffeine: " + Сaffeine + "\n" +
                        "\tTaurine: " + Taurine + "\n" +
                        "\tPrice: " + Price + "\n" +
                        "\tVolume: " + Volume + "\n";
        return information;

    }


}
