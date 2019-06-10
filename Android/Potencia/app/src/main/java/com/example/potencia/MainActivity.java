package com.example.potencia;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    public EditText Exponente;
    public EditText Base;
    public Button btn;
    public TextView Resultado;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Exponente = (EditText) findViewById(R.id.Exponente);
        Base = (EditText) findViewById(R.id.Base);
        Resultado=(TextView) findViewById(R.id.Resultado);
        btn=(Button) findViewById(R.id.btn);

        btn.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {
        potencia();
    }

    public void potencia(){
        //Asignando valores
        int base=Integer.parseInt(Base.getText().toString());
        int exponente=Integer.parseInt(Exponente.getText().toString());
        int p=1;
        //Mientras el exponente sea mayor al cero
        while(exponente>0)
        {
            //calculando potencia
            p=p*base;
            exponente--;
        }
        //mostrando reusltados
        Resultado.setText("La potencia de "+Base.getText().toString()+" elevado al "+Exponente.getText().toString()+" es "+String.valueOf(p));
    }
}
