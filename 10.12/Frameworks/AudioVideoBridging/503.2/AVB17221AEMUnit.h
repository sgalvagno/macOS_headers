//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMNamedClockDomainedModelObject.h>

@class NSArray;

@interface AVB17221AEMUnit : AVB17221AEMNamedClockDomainedModelObject
{
    unsigned short numberOfStreamInputPorts;
    unsigned short baseStreamInputPort;
    unsigned short numberOfStreamOutputPorts;
    unsigned short baseStreamOutputPort;
    unsigned short numberOfExternalInputPorts;
    unsigned short baseExternalInputPort;
    unsigned short numberOfExternalOutputPorts;
    unsigned short baseExternalOutputPort;
    unsigned short numberOfInternalInputPorts;
    unsigned short baseInternalInputPort;
    unsigned short numberOfInternalOutputPorts;
    unsigned short baseInternalOutputPort;
    unsigned short numberOfControls;
    unsigned short baseControl;
    unsigned short numberOfSignalSelectors;
    unsigned short baseSignalSelector;
    unsigned short numberOfMixers;
    unsigned short baseMixer;
    unsigned short numberOfMatrices;
    unsigned short baseMatrix;
    unsigned short numberOfSplitters;
    unsigned short baseSplitter;
    unsigned short numberOfCombiners;
    unsigned short baseCombiner;
    unsigned short numberOfDemultiplexers;
    unsigned short baseDemultiplexer;
    unsigned short numberOfMultiplexers;
    unsigned short baseMultiplexer;
    unsigned short numberOfTranscoders;
    unsigned short baseTranscoder;
    unsigned short numberOfControlBlocks;
    unsigned short baseControlBlock;
    NSArray *inputStreamPorts;
    NSArray *outputStreamPorts;
    NSArray *inputExternalPorts;
    NSArray *outputExternalPorts;
    NSArray *inputInternalPorts;
    NSArray *outputInternalPorts;
    NSArray *controls;
    NSArray *signalSelectors;
    NSArray *mixers;
    NSArray *matrices;
    NSArray *splitters;
    NSArray *combiners;
    NSArray *demultiplexers;
    NSArray *multiplexers;
    NSArray *transcoders;
    NSArray *controlBlocks;
    NSArray *forwardSignals;
}

@property(retain) NSArray *forwardSignals; // @synthesize forwardSignals;
@property(copy) NSArray *controlBlocks; // @synthesize controlBlocks;
@property(copy) NSArray *transcoders; // @synthesize transcoders;
@property(copy) NSArray *multiplexers; // @synthesize multiplexers;
@property(copy) NSArray *demultiplexers; // @synthesize demultiplexers;
@property(copy) NSArray *combiners; // @synthesize combiners;
@property(copy) NSArray *splitters; // @synthesize splitters;
@property(copy) NSArray *matrices; // @synthesize matrices;
@property(copy) NSArray *mixers; // @synthesize mixers;
@property(copy) NSArray *signalSelectors; // @synthesize signalSelectors;
@property(copy) NSArray *controls; // @synthesize controls;
@property(copy) NSArray *outputInternalPorts; // @synthesize outputInternalPorts;
@property(copy) NSArray *inputInternalPorts; // @synthesize inputInternalPorts;
@property(copy) NSArray *outputExternalPorts; // @synthesize outputExternalPorts;
@property(copy) NSArray *inputExternalPorts; // @synthesize inputExternalPorts;
@property(copy) NSArray *outputStreamPorts; // @synthesize outputStreamPorts;
@property(copy) NSArray *inputStreamPorts; // @synthesize inputStreamPorts;
@property unsigned short baseControlBlock; // @synthesize baseControlBlock;
@property unsigned short numberOfControlBlocks; // @synthesize numberOfControlBlocks;
@property unsigned short baseTranscoder; // @synthesize baseTranscoder;
@property unsigned short numberOfTranscoders; // @synthesize numberOfTranscoders;
@property unsigned short baseMultiplexer; // @synthesize baseMultiplexer;
@property unsigned short numberOfMultiplexers; // @synthesize numberOfMultiplexers;
@property unsigned short baseDemultiplexer; // @synthesize baseDemultiplexer;
@property unsigned short numberOfDemultiplexers; // @synthesize numberOfDemultiplexers;
@property unsigned short baseCombiner; // @synthesize baseCombiner;
@property unsigned short numberOfCombiners; // @synthesize numberOfCombiners;
@property unsigned short baseSplitter; // @synthesize baseSplitter;
@property unsigned short numberOfSplitters; // @synthesize numberOfSplitters;
@property unsigned short baseMatrix; // @synthesize baseMatrix;
@property unsigned short numberOfMatrices; // @synthesize numberOfMatrices;
@property unsigned short baseMixer; // @synthesize baseMixer;
@property unsigned short numberOfMixers; // @synthesize numberOfMixers;
@property unsigned short baseSignalSelector; // @synthesize baseSignalSelector;
@property unsigned short numberOfSignalSelectors; // @synthesize numberOfSignalSelectors;
@property unsigned short baseControl; // @synthesize baseControl;
@property unsigned short numberOfControls; // @synthesize numberOfControls;
@property unsigned short baseInternalOutputPort; // @synthesize baseInternalOutputPort;
@property unsigned short numberOfInternalOutputPorts; // @synthesize numberOfInternalOutputPorts;
@property unsigned short baseInternalInputPort; // @synthesize baseInternalInputPort;
@property unsigned short numberOfInternalInputPorts; // @synthesize numberOfInternalInputPorts;
@property unsigned short baseExternalOutputPort; // @synthesize baseExternalOutputPort;
@property unsigned short numberOfExternalOutputPorts; // @synthesize numberOfExternalOutputPorts;
@property unsigned short baseExternalInputPort; // @synthesize baseExternalInputPort;
@property unsigned short numberOfExternalInputPorts; // @synthesize numberOfExternalInputPorts;
@property unsigned short baseStreamOutputPort; // @synthesize baseStreamOutputPort;
@property unsigned short numberOfStreamOutputPorts; // @synthesize numberOfStreamOutputPorts;
@property unsigned short baseStreamInputPort; // @synthesize baseStreamInputPort;
@property unsigned short numberOfStreamInputPorts; // @synthesize numberOfStreamInputPorts;
- (void)dealloc;
- (void)renumberDescriptorWithNextIndexes:(id)arg1;
- (void)updateDependentContent;
- (id)debugLogStringWithIndentation:(id)arg1;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)description;
- (id)validChildrenDescriptorTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;

@end

