//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SWScrollbar;

@interface SWScrollbarHitTest : NSObject
{
    SWScrollbar *_scrollbar;
    struct CGPoint _mouseSlip;
}

@property(nonatomic) struct CGPoint mouseSlip; // @synthesize mouseSlip=_mouseSlip;
@property(retain, nonatomic) SWScrollbar *scrollbar; // @synthesize scrollbar=_scrollbar;
- (void)dealloc;

@end

