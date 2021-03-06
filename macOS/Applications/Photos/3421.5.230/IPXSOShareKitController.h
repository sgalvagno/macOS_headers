//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOInputLineViewControllerDelegate-Protocol.h"

@class NSImageView, NSMutableDictionary, NSString, SOInputLineViewController, SONewChatDisplayController, SORecipientBarViewController;

@interface IPXSOShareKitController : NSObject <SOInputLineViewControllerDelegate>
{
    NSString *_listenerID;
    CDUnknownBlockType _sendMessageLogInOutCompletionBlock;
    unsigned int _sendStatus;
    unsigned int _tokensHaveChanged:1;
    _Bool _hasText;
    BOOL _compact;
    NSImageView *_shareSheetImageView;
    SOInputLineViewController *_inputLineViewController;
    SORecipientBarViewController *_recipientBarViewController;
    SONewChatDisplayController *_chatDisplayController;
    NSMutableDictionary *_messageGUIDToCompletionBlock;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *messageGUIDToCompletionBlock; // @synthesize messageGUIDToCompletionBlock=_messageGUIDToCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType sendMessageLogInOutCompletionBlock; // @synthesize sendMessageLogInOutCompletionBlock=_sendMessageLogInOutCompletionBlock;
@property(readonly) SONewChatDisplayController *chatDisplayController; // @synthesize chatDisplayController=_chatDisplayController;
@property(retain) SORecipientBarViewController *recipientBarViewController; // @synthesize recipientBarViewController=_recipientBarViewController;
@property(retain) SOInputLineViewController *inputLineViewController; // @synthesize inputLineViewController=_inputLineViewController;
@property(retain, nonatomic) NSImageView *shareSheetImageView; // @synthesize shareSheetImageView=_shareSheetImageView;
@property(nonatomic, getter=isCompact) BOOL compact; // @synthesize compact=_compact;
- (void).cxx_destruct;
- (void)_daemonLostConnection;
- (void)_daemonDisconnected;
- (void)_daemonConnected;
- (void)_recipientsSelected:(id)arg1;
- (void)_forceInputLineLayout;
- (BOOL)addRecipient:(id)arg1 onABServiceName:(id)arg2;
- (void)appendAttributedString:(id)arg1;
- (void)signOnAllOfflineAccounts;
- (BOOL)isAnyConfiguredAccountOnline;
- (id)accountIDToConfigure;
- (BOOL)hasConfiguredAccounts;
- (void)disconnectFromAgent;
- (BOOL)connectToAgent;
- (void)dealloc;
- (id)init;
- (void)setRecipientWithHandleID:(id)arg1 accountGUID:(id)arg2 service:(id)arg3 accountLogin:(id)arg4;
@property long long completionWindowLevel; // @dynamic completionWindowLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

