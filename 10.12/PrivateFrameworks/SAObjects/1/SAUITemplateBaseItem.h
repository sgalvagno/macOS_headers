//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/SAUITemplateItem-Protocol.h>

@class NSArray, NSString, SAUITemplateEdgeInsets;

@interface SAUITemplateBaseItem : SABaseAceObject <SAUITemplateItem>
{
}

+ (id)baseItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseItem;
@property(nonatomic) BOOL shouldBeOffscreenInPartial; // @dynamic shouldBeOffscreenInPartial;
@property(copy, nonatomic) NSArray *presentationOptions; // @dynamic presentationOptions;
@property(retain, nonatomic) SAUITemplateEdgeInsets *padding; // @dynamic padding;
@property(nonatomic) BOOL hasPriorityLayout; // @dynamic hasPriorityLayout;
@property(retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta; // @dynamic fullScreenPaddingDelta;
@property(copy, nonatomic) NSArray *communicationOptions; // @dynamic communicationOptions;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

