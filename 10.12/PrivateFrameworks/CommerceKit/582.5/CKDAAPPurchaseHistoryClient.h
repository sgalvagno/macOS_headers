//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/ISBookLibraryObserver-Protocol.h>

@interface CKDAAPPurchaseHistoryClient : NSObject <ISBookLibraryObserver>
{
    CDUnknownBlockType _observerBlock;
}

@property(copy) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
- (void).cxx_destruct;
- (void)bookLibraryHasAdded:(id)arg1 changed:(id)arg2 removed:(id)arg3;

@end

