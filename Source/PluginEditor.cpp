/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
NEWJUCE0001AudioProcessorEditor::NEWJUCE0001AudioProcessorEditor (NEWJUCE0001AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

NEWJUCE0001AudioProcessorEditor::~NEWJUCE0001AudioProcessorEditor()
{
}

//==============================================================================
void NEWJUCE0001AudioProcessorEditor::paint (juce::Graphics& g)
{
    
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setGradientFill(juce::ColourGradient::vertical(juce::Colours::green, juce::Colours::darkgreen, juce::Rectangle<int>(0,0,100,100)));
    g.fillRect(0.0f, 0.0f, 100.0f, 100.0f);
    g.setFillType(juce::FillType(juce::Colours::white));
    g.fillRect(0.0f, 0.0f, 100.0f, 3.0f);
    
    
    /*g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);*/
}

void NEWJUCE0001AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
