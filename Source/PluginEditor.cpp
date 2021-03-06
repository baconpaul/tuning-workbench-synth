/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
TuningworkbenchsynthAudioProcessorEditor::TuningworkbenchsynthAudioProcessorEditor (TuningworkbenchsynthAudioProcessor& p,
    AudioProcessorValueTreeState &vts)
    : AudioProcessorEditor (&p), mainPanel( p ), processor (p), parameters( vts )
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (784, 742);

    // Do some look and feel magic
    mainPanel.connectValueTreeState( vts );
    addAndMakeVisible(mainPanel);
}

TuningworkbenchsynthAudioProcessorEditor::~TuningworkbenchsynthAudioProcessorEditor()
{
}

//==============================================================================
void TuningworkbenchsynthAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void TuningworkbenchsynthAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
