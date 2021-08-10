/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "MIDIProcessor.h"

//==============================================================================
/**
*/
class NEWJUCE0001AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    NEWJUCE0001AudioProcessorEditor (NEWJUCE0001AudioProcessor&);
    ~NEWJUCE0001AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    NEWJUCE0001AudioProcessor& audioProcessor;
    MIDIProcessor midiProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NEWJUCE0001AudioProcessorEditor)
};
