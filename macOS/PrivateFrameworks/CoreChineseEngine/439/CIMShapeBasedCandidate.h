//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreChineseEngine/CIMCandidate.h>

@class CIMDisplayCandidateFadeProperties, NSString;

@interface CIMShapeBasedCandidate : CIMCandidate
{
    BOOL _readingIsShort;
    BOOL _showReading;
    CIMDisplayCandidateFadeProperties *_annotationFade;
    NSString *_inputModeName;
    void *_mecabraCandidate;
}

+ (id)shapeBasedCandidateWithCandidate:(id)arg1;
@property(nonatomic) void *mecabraCandidate; // @synthesize mecabraCandidate=_mecabraCandidate;
@property(nonatomic) BOOL showReading; // @synthesize showReading=_showReading;
@property(nonatomic) BOOL readingIsShort; // @synthesize readingIsShort=_readingIsShort;
@property(copy, nonatomic) NSString *inputModeName; // @synthesize inputModeName=_inputModeName;
@property(retain, nonatomic) CIMDisplayCandidateFadeProperties *annotationFade; // @synthesize annotationFade=_annotationFade;
- (void).cxx_destruct;
- (id)fadingAnnotation;
- (id)colorsForNumberOfFadingCharacters:(unsigned long long)arg1;
- (id)defaultReadingAttributes;
- (id)readingColor;
- (void)dealloc;

@end

