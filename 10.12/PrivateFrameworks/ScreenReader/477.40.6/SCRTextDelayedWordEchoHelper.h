//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRSimpleTimer, SCRTextMarkerRange;
@protocol SCRTextDelayedWordEchoHelperDataSource, SCRTextDelayedWordEchoHelperDelegate;

__attribute__((visibility("hidden")))
@interface SCRTextDelayedWordEchoHelper : NSObject
{
    id <SCRTextDelayedWordEchoHelperDataSource> _dataSource;
    id <SCRTextDelayedWordEchoHelperDelegate> _delegate;
    SCRSimpleTimer *__timer;
    SCRTextMarkerRange *__textMarkerRange;
    SCRTextMarkerRange *__punctuationMarkerRange;
    SCRTextMarkerRange *__lastEchoedTextMarkerRange;
    double _delay;
}

@property(nonatomic, setter=_setDelay:) double delay; // @synthesize delay=_delay;
@property(retain, nonatomic, setter=_setLastEchoedTextMarkerRange:) SCRTextMarkerRange *_lastEchoedTextMarkerRange; // @synthesize _lastEchoedTextMarkerRange=__lastEchoedTextMarkerRange;
@property(retain, nonatomic, setter=_setPunctuationMarkerRange:) SCRTextMarkerRange *_punctuationMarkerRange; // @synthesize _punctuationMarkerRange=__punctuationMarkerRange;
@property(retain, nonatomic, setter=_setTextMarkerRange:) SCRTextMarkerRange *_textMarkerRange; // @synthesize _textMarkerRange=__textMarkerRange;
@property(retain, nonatomic, setter=_setTimer:) SCRSimpleTimer *_timer; // @synthesize _timer=__timer;
@property(nonatomic) id <SCRTextDelayedWordEchoHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <SCRTextDelayedWordEchoHelperDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)invalidate;
- (void)cancel;
- (void)_echo;
- (void)_timerFired;
- (unsigned long long)updateWithChange:(id)arg1;
- (long long)_shouldEchoWordIfTypingChangeAtEndOfWord:(id)arg1 wordTextMarkerRange:(id)arg2;
- (BOOL)_shouldEchoWordIfWhitespaceOrNewline:(id)arg1;
- (BOOL)_shouldEchoWordIfPunctuation:(id)arg1;
- (void)dealloc;
- (id)initWithDelay:(double)arg1;

@end

