package com.example.energyinterface;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;

public class Controller {

    Energy energy;

    @FXML
    private Button button_add;

    @FXML
    private TextArea textArea;

    @FXML
    private TextField textField_Brand;

    @FXML
    private TextField textField_EnergyValue;

    @FXML
    private TextField textField_Name;

    @FXML
    private TextField textField_Price;

    @FXML
    private TextField textField_Taste;

    @FXML
    private TextField textField_Taurine;

    @FXML
    private TextField textField_Volume;

    @FXML
    private TextField textField_Сaffeine;

    public void button_add_clicked() {
        energy = new Energy();
        energy.setBrand(textField_Brand.getText()); //Задали бренд

        energy.setName(textField_Name.getText()); //Задали имя

        energy.setTaste(textField_Taste.getText()); //Задали вкус

        energy.setPrice(Double.parseDouble(textField_Price.getText())); //Задали цену

        energy.setEnergyValue(Double.parseDouble(textField_EnergyValue.getText())); //Задали калорийность

        energy.setСaffeine(Double.parseDouble(textField_Сaffeine.getText())); //Задали цену

        energy.setTaurine(Double.parseDouble(textField_Taurine.getText())); //Задали цену

        energy.setVolume(Double.parseDouble(textField_Volume.getText())); //Задали цену

        textArea.appendText(energy.AllInformation());
    }


}
