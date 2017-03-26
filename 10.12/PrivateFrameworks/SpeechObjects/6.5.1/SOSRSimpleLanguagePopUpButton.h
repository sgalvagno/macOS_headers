//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@class NSArray, NSString;

@interface SOSRSimpleLanguagePopUpButton : NSPopUpButton
{
    NSString *_previouslyChosenLocaleIdentifier;
    NSArray *_supportedLocaleIdentifiers;
}

@property(retain) NSArray *supportedLocaleIdentifiers; // @synthesize supportedLocaleIdentifiers=_supportedLocaleIdentifiers;
@property(retain) NSString *previouslyChosenLocaleIdentifier; // @synthesize previouslyChosenLocaleIdentifier=_previouslyChosenLocaleIdentifier;
- (id)_rowsFromSRLanguageItems:(id)arg1;
- (void)_updateSRLanguageMenu;
- (void)_startDelayedPopUpUpdate;
- (id)selectedLanguageItem;
- (void)buildPopUpButtonAndSelectLocaleIdentifier:(id)arg1 supportedLocaleIdentifiers:(id)arg2;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

