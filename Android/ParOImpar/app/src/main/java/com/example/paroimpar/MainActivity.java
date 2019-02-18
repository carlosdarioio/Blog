package com.example.paroimpar;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
EditText num;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        num=(EditText) findViewById(R.id.num);
        Button btn=(Button) findViewById(R.id.btn);
        final TextView r = (TextView) findViewById(R.id.resultado);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                int numero=Integer.valueOf(num.getText().toString());
                if (numero % 2 == 0)
                {
                    r.setText("El numero introducido es par.");
                }
                else
                {
                    r.setText("El numero introducido es impar.");
                }

            }
        });





    }
}
