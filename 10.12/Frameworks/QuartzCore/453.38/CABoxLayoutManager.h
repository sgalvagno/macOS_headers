//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/CALayoutManager-Protocol.h>
#import <QuartzCore/NSCoding-Protocol.h>

@class NSString;

@interface CABoxLayoutManager : NSObject <NSCoding, CALayoutManager>
{
}

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)layoutManager;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidateLayoutOfLayer:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGSize)preferredSizeOfLayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

