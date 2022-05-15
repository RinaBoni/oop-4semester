module com.example.energyinterface {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.energyinterface to javafx.fxml;
    exports com.example.energyinterface;
}