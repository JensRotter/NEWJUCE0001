/*
  ==============================================================================

    MIDIProcessor.h
    Created: 20 Jul 2021 12:32:43am
    Author:  Jens T. Rotter

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
//test
class MIDIProcessor
{
public:
    void MIDIProcessor::processBlock(int samples, juce::MidiBuffer &midiMessages)
    {
        juce::MidiBufferIterator midiIterator;
        for (const juce::MidiMessageMetadata metadata : midiMessages)
            if (metadata.numBytes == 3)
                DBG(metadata.getMessage().getDescription());
        
    }
};