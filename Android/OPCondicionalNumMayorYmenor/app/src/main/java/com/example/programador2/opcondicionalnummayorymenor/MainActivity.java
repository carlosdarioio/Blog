package com.example.programador2.opcondicionalnummayorymenor;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity {
    //numero mayor y  menor del 0 al 100
    EditText num1,num2,num3,num4,num5;
    List<Integer> list;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        num1=(EditText) findViewById(R.id.editText);
        num2=(EditText) findViewById(R.id.editText2);
        num3=(EditText) findViewById(R.id.editText3);
        num4=(EditText) findViewById(R.id.editText4);
        num5=(EditText) findViewById(R.id.editText5);

        Button btn=(Button) findViewById(R.id.btn);
        final TextView r = (TextView) findViewById(R.id.Resultado);
        list = new ArrayList<Integer>();

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                list.add((Integer.parseInt(num1.getText().toString())));
                list.add((Integer.parseInt(num2.getText().toString())));
                list.add((Integer.parseInt(num3.getText().toString())));
                list.add((Integer.parseInt(num4.getText().toString())));
                list.add((Integer.parseInt(num5.getText().toString())));
                int mayor=0;
                int menor=100;
                for (int i = 0; i < list.size(); i ++)
                {
                    mayor=list.get(i)>mayor?list.get(i):mayor;
                    menor=list.get(i)<menor?list.get(i):menor;
                }
                r.setText("El numero mayor es "+mayor+" el menor es "+menor);
                list.clear();
            }
        });




    }
}

