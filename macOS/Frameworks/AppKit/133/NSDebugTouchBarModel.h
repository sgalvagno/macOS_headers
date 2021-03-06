//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, NSTouchBar;

__attribute__((visibility("hidden")))
@interface NSDebugTouchBarModel : NSObject
{
    void *_address;
    NSString *_className;
    NSString *_responderDescription;
    NSTouchBar *_touchBar;
    NSMutableArray *_warnings;
    BOOL _isSuppressed;
}

@property BOOL isSuppressed; // @synthesize isSuppressed=_isSuppressed;
@property(readonly) NSArray *warnings; // @synthesize warnings=_warnings;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property(copy) NSString *responderDescription; // @synthesize responderDescription=_responderDescription;
@property(copy) NSString *className; // @synthesize className=_className;
@property void *address; // @synthesize address=_address;
- (void)dealloc;
- (id)description;
- (void)addWarning:(id)arg1;
@property(readonly) NSString *prettyDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

