//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface PKDispatchAfterBlocks : NSObject
{
    id <NSCopying> _identifier;
}

@property(copy, nonatomic) id <NSCopying> identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)cancelAll;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)dispatchAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

