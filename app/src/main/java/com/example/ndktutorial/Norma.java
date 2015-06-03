package com.example.ndktutorial;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;


public class Norma extends Activity {
    private TextView tNorm;
    private double[] signal1;
    private double result;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_norma);
        tNorm=(TextView) findViewById(R.id.textView2);

        signal1=new double[49];
        for (int i=0; i<49; i++) {
            signal1[i] = 1.0;
        }
        result=VectorNat.norm(signal1);
        tNorm.setText(String.valueOf(result));
    }
}
