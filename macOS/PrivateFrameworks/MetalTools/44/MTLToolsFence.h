//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import "MTLFence.h"

@class NSString;

@interface MTLToolsFence : MTLToolsObject <MTLFence>
{
}

@property(copy) NSString *label;
- (void)acceptVisitor:(id)arg1;
@property(readonly) id <MTLDevice> device;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

