//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Parsec/PRSTriggerTask-Protocol.h>

@interface PRSFTETask : NSObject <PRSTriggerTask>
{
    CDUnknownBlockType _reply;
}

@property(copy) CDUnknownBlockType reply; // @synthesize reply=_reply;
- (void).cxx_destruct;
- (BOOL)allowLocation;
- (void)triggerQuery:(BOOL)arg1;
- (id)initWithReply:(CDUnknownBlockType)arg1;
- (BOOL)needsBag;

@end

