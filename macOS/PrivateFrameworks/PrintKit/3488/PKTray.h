//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface PKTray : NSObject
{
    NSDictionary *_trayDict;
}

+ (id)trayWithString:(id)arg1 andMediaSource:(id)arg2;
+ (id)filter:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)traysWithAttrs:(struct _ipp_s *)arg1;
@property(retain) NSDictionary *trayDict; // @synthesize trayDict=_trayDict;
- (id)description;
@property(readonly) BOOL isEmpty; // @dynamic isEmpty;
@property(readonly) NSString *localizedName;
@property(readonly) NSString *name; // @dynamic name;
- (void)dealloc;
- (id)initWithString:(id)arg1 andMediaSource:(id)arg2;

@end

