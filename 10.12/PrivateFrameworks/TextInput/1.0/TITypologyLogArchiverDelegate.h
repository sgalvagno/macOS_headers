//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSKeyedArchiverDelegate-Protocol.h>

@class NSMutableSet, NSString;

@interface TITypologyLogArchiverDelegate : NSObject <NSKeyedArchiverDelegate>
{
    NSMutableSet *_objects;
}

@property(readonly, nonatomic) NSMutableSet *objects; // @synthesize objects=_objects;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

