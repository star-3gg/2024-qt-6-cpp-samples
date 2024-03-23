#include <QApplication> // The most important library in Qt
#include <QLabel>

/**
 * INFO: This basic Qt application renders a 400x400 window, showing a 'Hello World' label.
*/

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    /**
     * INFO: Whatever is written here between lines 'QApplication app();',
     * and 'app.exec();', will be added to the GUI application.
    */

    QLabel *label = new QLabel("Hello World"); // Pointer to label object

    // Add label attributes
    label->setWindowTitle("MY APP");
    label->resize(400,400); // Set width & height in pixels

    // Render the label
    label->show(); // Method that renders the label

    return app.exec();
}
