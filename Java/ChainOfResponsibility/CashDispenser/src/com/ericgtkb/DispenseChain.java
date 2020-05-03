package com.ericgtkb;

public interface DispenseChain {
    void setNextChain(DispenseChain chain);
    void dispense(int amount);
}


class DispenseChain100Dollar implements DispenseChain {
    private DispenseChain nextChain;

    @Override
    public void setNextChain(DispenseChain chain) {
        nextChain = chain;
    }

    @Override
    public void dispense(int amount) {
        if (amount >= 100) {
            int num = amount / 100;
            int remainder = amount % 100;

            System.out.println("Dispensing " + num + " 100 dollar bill(s)");
            if (remainder != 0) {
                nextChain.dispense(remainder);
            }
        } else {
            nextChain.dispense(amount);
        }
    }
}

class DispenseChain50Dollar implements DispenseChain {
    private DispenseChain nextChain;

    @Override
    public void setNextChain(DispenseChain chain) {
        nextChain = chain;
    }

    @Override
    public void dispense(int amount) {
        if (amount >= 50) {
            int num = amount / 50;
            int remainder = amount % 50;

            System.out.println("Dispensing " + num + " 50 dollar bill(s)");
            if (remainder != 0) {
                nextChain.dispense(remainder);
            }
        } else {
            nextChain.dispense(amount);
        }
    }
}


class DispenseChain20Dollar implements DispenseChain {
    private DispenseChain nextChain;

    @Override
    public void setNextChain(DispenseChain chain) {
        nextChain = chain;
    }

    @Override
    public void dispense(int amount) {
        if (amount >= 20) {
            int num = amount / 20;
            int remainder = amount % 20;

            System.out.println("Dispensing " + num + " 20 dollar bill(s)");
            if (remainder != 0) {
                nextChain.dispense(remainder);
            }
        } else {
            nextChain.dispense(amount);
        }
    }
}


class DispenseChain5Dollar implements DispenseChain {
    private DispenseChain nextChain;

    @Override
    public void setNextChain(DispenseChain chain) {
        nextChain = chain;
    }

    @Override
    public void dispense(int amount) {
        if (amount >= 5) {
            int num = amount / 5;
            int remainder = amount % 5;

            System.out.println("Dispensing " + num + " 5 dollar bill(s)");
            if (remainder != 0) {
                nextChain.dispense(remainder);
            }
        } else {
            nextChain.dispense(amount);
        }
    }
}

class DispenseChain1Dollar implements DispenseChain {
    private DispenseChain nextChain;

    @Override
    public void setNextChain(DispenseChain chain) {
        nextChain = chain;
    }

    @Override
    public void dispense(int amount) {
        if (amount >= 1) {
            int num = amount / 1;
            int remainder = amount % 1;

            System.out.println("Dispensing " + num + " 1 dollar bill(s)");
            if (remainder != 0) {
                nextChain.dispense(remainder);
            }
        } else {
            nextChain.dispense(amount);
        }
    }
}
