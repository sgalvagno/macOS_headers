//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSColor;

@protocol iTermSmartCursorColorDelegate <NSObject>
- (NSColor *)cursorBlackColor;
- (NSColor *)cursorWhiteColor;
- (NSColor *)cursorColorByDimmingSmartColor:(NSColor *)arg1;
- (NSColor *)cursorColorForCharacter:(struct screen_char_t)arg1 wantBackground:(BOOL)arg2 muted:(BOOL)arg3;
- (CDStruct_52d450d8)cursorNeighbors;
@end

