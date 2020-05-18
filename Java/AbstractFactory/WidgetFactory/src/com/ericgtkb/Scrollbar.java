package com.ericgtkb;

public interface Scrollbar {
    void scroll();
}

class WindowsStyleScrollbar implements Scrollbar {
    @Override
    public void scroll() {
        System.out.println("Scrolling this Windows-style scrollbar!!!");
    }
}

class MacStyleScrollbar implements Scrollbar {
    @Override
    public void scroll() {
        System.out.println("Scrolling this Mac-style scrollbar!!!");
    }
}
