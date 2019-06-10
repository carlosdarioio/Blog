package com.example.suma;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    //Creando Variables
    EditText et1, et2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //Obteniendo Valors de num1 y num2 los cuales son ediText
        et1=(EditText) findViewById(R.id.editText);
        et2=(EditText) findViewById(R.id.editText2);
        //Boton
        Button btnSuma = (Button) findViewById(R.id.button);
        //Texto donde mostraremos el resultado
        final TextView tvResultado = (TextView) findViewById(R.id.textView);
        //Ejemplo Centrando TextView en Android Studio Java
        tvResultado.setGravity(Gravity.CENTER);

        //Si presiona clic en boton ejecutamos:
        btnSuma.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //Obteniendo Valores y Calculando Resultado
                int aux1 = Integer.valueOf(et1.getText().toString());
                int aux2 = Integer.valueOf(et2.getText().toString());
                int resultado = aux1 + aux2;
                tvResultado.setText(" "+resultado);
            }
        });
    }
}
