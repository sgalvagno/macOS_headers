//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MFMailbox, MailboxOutlineItem, MailboxOutlineItemController, NSString;

@protocol MailboxOutlineItemControllerDelegate <NSObject>
- (BOOL)isItemExpandedForOutlineItemController:(MailboxOutlineItemController *)arg1;
- (BOOL)useAccountNameForOutlineItemController:(MailboxOutlineItemController *)arg1 item:(MailboxOutlineItem *)arg2;
- (void)mailbox:(MFMailbox *)arg1 nameUpdated:(NSString *)arg2;
- (unsigned long long)badgeCountForItem:(MailboxOutlineItem *)arg1;
@end

