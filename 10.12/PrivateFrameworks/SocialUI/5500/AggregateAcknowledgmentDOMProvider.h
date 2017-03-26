//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialUI/DOMProvider.h>

#import <SocialUI/AssociatedMessageDOMProvider-Protocol.h>

@class NSString;

@interface AggregateAcknowledgmentDOMProvider : DOMProvider <AssociatedMessageDOMProvider>
{
}

- (void)parseAssociatedChatItem:(id)arg1 appendToElement:(id)arg2 withChatItemElement:(id)arg3;
- (id)DOM;
- (id)_acknowledgmentsStackWithChatItem:(id)arg1 justTwoAcknowledgments:(BOOL)arg2;
- (id)_acknowledgmentWithChatItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

