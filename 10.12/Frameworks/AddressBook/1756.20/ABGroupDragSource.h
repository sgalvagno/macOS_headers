//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABGroup, ABRecordContext, NSString;

__attribute__((visibility("hidden")))
@interface ABGroupDragSource : NSObject
{
    ABRecordContext *_recordContext;
    ABGroup *_group;
    NSString *_entryIdentifier;
    NSString *_name;
}

@property(readonly) NSString *entryIdentifier; // @synthesize entryIdentifier=_entryIdentifier;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) ABGroup *group; // @synthesize group=_group;
@property(readonly) ABRecordContext *recordContext; // @synthesize recordContext=_recordContext;
- (void)dealloc;
- (id)initWithRecordContext:(id)arg1 group:(id)arg2 name:(id)arg3 entryIdentifier:(id)arg4;

@end

