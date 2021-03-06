/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CONTROLSVIEWBASE_HPP
#define CONTROLSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/controls_screen/ControlsPresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <gui/containers/McuLoadWidget.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/Container.hpp>

#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
class ControlsViewBase : public touchgfx::View<ControlsPresenter>
{
public:
    ControlsViewBase();
    virtual ~ControlsViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void newBrightnessValueHandler(int value)
    {
        // Override and implement this function in Controls
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image background;
    touchgfx::Image dots;
    McuLoadWidget mcuLoad;
    touchgfx::Button gotoMenuButton;
    touchgfx::TextArea headline;
    touchgfx::Container potentiometerScreen;
    touchgfx::Image board;
    touchgfx::Image line;

    touchgfx::Container brightnessScreen;
    touchgfx::Image brightnessSmall;
    touchgfx::Image brightnessLarge;
    touchgfx::Slider slider;
    touchgfx::TextArea brightnessPercentageText;
    touchgfx::TextAreaWithOneWildcard brightnessText;


    /*
     * Wildcard Buffers
     */
    static const uint16_t BRIGHTNESSTEXT_SIZE = 5;
    touchgfx::Unicode::UnicodeChar brightnessTextBuffer[BRIGHTNESSTEXT_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ControlsViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<ControlsViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);

};

#endif // CONTROLSVIEWBASE_HPP
