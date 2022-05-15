package com.example.chatbot;

import javafx.event.ActionEvent;
        import javafx.fxml.FXML;
        import javafx.scene.control.Button;
        import javafx.scene.control.TextArea;
        import javafx.scene.control.TextField;
        import javafx.scene.paint.Color;
        import javafx.scene.text.*;
        import javafx.stage.WindowEvent;

import java.io.IOException;
import java.net.URISyntaxException;
import java.util.List;
        import java.util.Scanner;


public class Controller {

    String User;
    private Bot bot = new Bot();


    @FXML
    private Button buttonInput;

    @FXML
    private TextArea textArea_dialogue;

    @FXML
    private TextField textField_input;







    public void button_click(ActionEvent actionEvent) throws URISyntaxException, IOException {
        /*
        Text text1 = new Text("Пример вот так странный пример");
        text1.setFill(Color.RED);
        text1.setFont(Font.font("Helvetica", FontPosture.ITALIC, 40));
        Text text2 = new Text("Малый жирный синий текст");
        text2.setFill(Color.BLUE);
        text2.setFont(Font.font("Helvetica", FontWeight.BOLD, 10));
        //Соединение этих двух кусков
        TextFlow textFlow = new TextFlow(text1, text2);
        System.out.println(text1.getText());
//        textArea_dialogue.setText(text1.);
         */

        //Читаем сообщение и очищаем строку
        String message = textField_input.getText();
        textField_input.clear();
//        DataBase dataBase = new DataBase();
//        dataBase.DB_clear();

        if (message.trim().length() > 0)    //Проверяем не пустая ли строка
        {
            //Печатаем наше сообщение в диалоговое окно
            textArea_dialogue.appendText(bot.getDate() + "\n" +
                    User + ": " + message + "\n\n");
            //И добавляем ответ бота
            textArea_dialogue.appendText(bot.getDate() + "\n" +
                    "Чаттер: " + bot.answer(message) + "\n\n");



        }

    }



}