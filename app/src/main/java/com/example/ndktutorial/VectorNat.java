package com.example.ndktutorial;

/**
 * Created by Miguel on 02/06/2015.
 */
public abstract class VectorNat{
    public static native double norm(double signal1[]);

    // Para cargar la libreria
    static {
        System.loadLibrary("signal");
    }
}