//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFDataStore, AFDialogPhase, AceObject, NSString, NSUUID;

@protocol AFConversationStorable <NSObject>
- (AFDataStore *)associatedDataStore;
- (BOOL)isVirgin;
- (long long)presentationState;
- (NSString *)aceCommandIdentifier;
- (AFDialogPhase *)dialogPhase;
- (AceObject *)aceObject;
- (NSUUID *)revisionIdentifier;
- (long long)type;
- (NSUUID *)identifier;
@end

