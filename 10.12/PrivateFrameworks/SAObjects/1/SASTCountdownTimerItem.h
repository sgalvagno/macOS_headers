//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class NSString, SAUIColor;
@protocol SASTTemplateAction;

@interface SASTCountdownTimerItem : AceObject <SASTActionableTemplateItem>
{
}

+ (id)countdownTimerItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)countdownTimerItem;
@property(retain, nonatomic) SAUIColor *headerTextColor;
@property(copy, nonatomic) NSString *headerText;
@property(retain, nonatomic) SAUIColor *headerBackgroundColor;
@property(retain, nonatomic) SAUIColor *countdownTextColor;
@property(retain, nonatomic) SAUIColor *bodyBackgroundColor;
@property(nonatomic) long long actionDelayInSeconds;
@property(retain, nonatomic) id <SASTTemplateAction> action; // @dynamic action;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

