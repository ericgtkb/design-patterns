package com.ericgtkb;

// Factory classes are also often singletons
public interface WidgetFactory {
    // These are factory methods
    Button createButton();
    Scrollbar createScrollbar();
}

class WindowsWidgetFactory implements WidgetFactory {
    @Override
    public Button createButton() {
        return new WindowsStyleButton();
    }

    @Override
    public Scrollbar createScrollbar() {
        return new WindowsStyleScrollbar();
    }
}

class MacWidgetFactory implements WidgetFactory {
    @Override
    public Button createButton() {
        return new MacStyleButton();
    }

    @Override
    public Scrollbar createScrollbar() {
        return new MacStyleScrollbar();
    }
}

