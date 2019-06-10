package com.example.newwindowsapp;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Toast;

import static android.widget.Toast.*;

public class Main2Activity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
        //Mostrando resultado por medio de un mensaje
        makeText(this, "Entrando al MainActivity2", LENGTH_LONG).show();
    }

}

