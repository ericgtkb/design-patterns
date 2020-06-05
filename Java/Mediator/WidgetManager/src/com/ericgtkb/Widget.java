package com.ericgtkb;

import java.util.Arrays;

public abstract class Widget {
    protected WidgetManager manager;

    protected Widget(WidgetManager manager) {
        this.manager = manager;
    }

    void changed() {
        manager.widgetChanged(this);
    }
}


class TextBox extends Widget {
    private String text;

    public TextBox(WidgetManager manager, String text) {
        super(manager);
        this.text = text;
    }

    public void setText(String text) {
        System.out.println("Setting text to \"" + text + "\"...");
        this.text = text;
        // Call manager when new text is set
        changed();
    }

    public String getText() {
        return text;
    }
}

class DisplayWindow extends Widget {
    public DisplayWindow(WidgetManager manager) {
        super(manager);
    }

    void display(String text) {
        char[] spaces = new char[76 - text.length()];
        char s = ' ';
        Arrays.fill(spaces, s);
        String rightPad = new String(spaces) + "||";
        System.out.println("Displaying text...");
        System.out.println("================================================================================");
        System.out.println("||                                                                            ||");
        System.out.println("||" + text + rightPad);
        System.out.println("||                                                                            ||");
        System.out.println("================================================================================");
    }
}

class Button extends Widget {
    private String name;

    public Button(WidgetManager manager, String name) {
        super(manager);
        this.name = name;
    }

    public void clicked() {
        System.out.println("Button " + name + " clicked...");
        // Call manager to handle event
        changed();
    }
}


