package com.ericgtkb;

public abstract class GuitarFactory {
    public Guitar getGuitar(String type) {
        Guitar guitar = buildGuitar(type);

        guitar.assemble();
        guitar.stringTheGuitar();

        return guitar;
    }

    // The actual factory method
    protected abstract Guitar buildGuitar(String type);
}

class GibsonFactory extends GuitarFactory {
    @Override
    protected Guitar buildGuitar(String type) {
        if (type.equals("Les Paul")) {
            return new GibsonLesPaul();
        } else if (type.equals("SG")) {
            return new GibsonSG();
        } else {
            return null;
        }
    }
}


class FenderFactory extends GuitarFactory {
    @Override
    protected Guitar buildGuitar(String type) {
        if (type.equals("Stratocaster")) {
            return new FenderStratocaster();
        } else if (type.equals("Telecaster")) {
            return new FenderTelecaster();
        } else {
            return null;
        }
    }
}


