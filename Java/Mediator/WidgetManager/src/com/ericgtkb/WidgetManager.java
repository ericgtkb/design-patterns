package com.ericgtkb;

// Here we only have one mediator. This interface is not required
public interface WidgetManager {
    void widgetChanged(Widget widget);
}

class WindowManager implements WidgetManager {
    private TextBox textBox;
    private Button drawButton;
    private Button clearButton;
    private DisplayWindow displayWindow;

    public WindowManager() {
        textBox = new TextBox(this, "");
        drawButton = new Button(this, "Draw");
        clearButton = new Button(this, "Clear");
        displayWindow = new DisplayWindow(this);
    }

    @Override
    public void widgetChanged(Widget widget) {
        if (widget == textBox) {
            // Text changed, call displayWindow to redraw
            displayWindow.display(textBox.getText());
        } else if (widget == drawButton) {
            // drawButton clicked, call displayWindow to draw
            displayWindow.display(textBox.getText());
        } else if (widget == clearButton) {
            // clearButton clicked clear text in textBox
            textBox.setText("");
        }
    }

    public TextBox getTextBox() {
        return textBox;
    }

    public Button getDrawButton() {
        return drawButton;
    }

    public Button getClearButton() {
        return clearButton;
    }

    public DisplayWindow getDisplayWindow() {
        return displayWindow;
    }
}

