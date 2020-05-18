package com.ericgtkb;

public class Main {
    private static WidgetFactory getFactory(String factoryType) throws Exception {
        if (factoryType.equalsIgnoreCase("Windows")) {
            return new WindowsWidgetFactory();
        } else if (factoryType.equalsIgnoreCase("Mac")) {
            return new MacWidgetFactory();
        } else {
            throw new Exception("Unknown factory type...");
        }
    }

    public static void main(String[] args) throws Exception {
        WidgetFactory factory = getFactory("Windows");
        Button button = factory.createButton();
        Scrollbar scrollbar = factory.createScrollbar();

        button.click();
        scrollbar.scroll();
        System.out.println();

        factory = getFactory("Mac");
        button = factory.createButton();
        scrollbar = factory.createScrollbar();

        button.click();
        scrollbar.scroll();
        System.out.println();

    }
}
