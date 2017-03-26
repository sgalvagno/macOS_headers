//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SiriUISiriLanguageDelegate;

__attribute__((visibility("hidden")))
@interface SiriUISiriLanguage : NSObject
{
    BOOL _macBuddyChecked;
    BOOL _macBuddyRunning;
    NSString *_spokenLanguageCode;
    id <SiriUISiriLanguageDelegate> _delegate;
}

@property(nonatomic, getter=_isMacBuddyRunning) BOOL macBuddyRunning; // @synthesize macBuddyRunning=_macBuddyRunning;
@property(nonatomic) BOOL macBuddyChecked; // @synthesize macBuddyChecked=_macBuddyChecked;
@property(readonly, nonatomic, getter=_delegate) __weak id <SiriUISiriLanguageDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode; // @synthesize spokenLanguageCode=_spokenLanguageCode;
- (void).cxx_destruct;
- (id)_computeSpokenLanguageCode;
- (void)_updateSpokenLanguageCode;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

