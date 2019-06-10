package com.example.getjsonappletenhtml;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;
import android.widget.Toast;

import com.android.volley.Request;
import com.android.volley.RequestQueue;
import com.android.volley.Response;
import com.android.volley.VolleyError;
import com.android.volley.toolbox.JsonObjectRequest;
import com.android.volley.toolbox.Volley;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class MainActivity extends AppCompatActivity {
    //Creando variables
    private RequestQueue queue;
    private TextView textview;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        //asignando variables
        textview=(TextView) findViewById(R.id.textView);
        queue= Volley.newRequestQueue(this);
        //ejecutando void de get Json con Valley en Android Studio
        getDatosVolley();
    }
    //----------
    private void getDatosVolley()
    {
        //url del get
        String url="https://api.androidhive.info/contacts/";
        //objeto Request Que ontendra el get
        JsonObjectRequest request = new JsonObjectRequest(Request.Method.GET, url, null, new Response.Listener<JSONObject>() {
            @Override
            public void onResponse(JSONObject response)
            {

                try {
                    //Asignando el JSONArray contac
                    JSONArray mJSONArray=response.getJSONArray("contacts");
                    //Asignando valores dle array 2
                    JSONObject mJSONObject = mJSONArray.getJSONObject(2);
                    //Obtendiendo valores de la variable name
                    String name = mJSONObject.getString("name");
                    //asignado reusltado
                    textview.setText("Nombre: "+name);
                    Toast.makeText(MainActivity.this,"Nombre:"+name,Toast.LENGTH_LONG).show();


                } catch (JSONException e) {
                    e.printStackTrace();
                }

            }
        }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error)
            {


            }
        });
        //agregando request
        queue.add(request);
    }
    //----------
}
