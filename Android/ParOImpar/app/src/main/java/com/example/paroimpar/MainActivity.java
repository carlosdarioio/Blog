package com.example.paroimpar;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity implements View.OnClickListener{
    //Creando Variables
    public EditText num;
    public TextView respuesta;
    public Button btn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        //Asignando R id
        num = (EditText) findViewById(R.id.num);
        respuesta=(TextView) findViewById(R.id.r);
        btn=(Button) findViewById(R.id.btn);
        //Asignando evento onclick al boton btn
        btn.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {


        int numero=Integer.parseInt(num.getText().toString());
        //Si el numero es impar lo mostraremos con un mensaje
        if((numero % 2 ) ==0)
        {
            respuesta.setText("El numero es par");
        }
        else {
            //Mostrando resultado por medio de un mensaje
            Toast.makeText(this, "El numero es impar", Toast.LENGTH_LONG).show();
        }



    }
}
