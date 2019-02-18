package com.example.cicloffor3;

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
        Button btn=(Button) findViewById(R.id.button);
        final TextView r = (TextView) findViewById(R.id.r);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                int numero=Integer.valueOf(num.getText().toString());
                String Total="";
                for(int i = 1; i<=10;i++)
                {
                Total+= String.format(num.getText().toString() + " x " + i+" = "+(numero*i)+" \n" );
                }
                    r.setText(Total);
            }
        });


    }
}
