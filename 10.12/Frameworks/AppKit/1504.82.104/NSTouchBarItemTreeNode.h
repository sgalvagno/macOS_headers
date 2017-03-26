//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSArray;

@interface NSTouchBarItemTreeNode : NSObject <NSCopying>
{
    NSArray *_childNodes;
}

@property(copy) NSArray *childNodes; // @synthesize childNodes=_childNodes;
- (id)flatFilterWithOrder:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enumerateWithOrder:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enumerateWithOrder:(long long)arg1 descentHandler:(CDUnknownBlockType)arg2;
- (BOOL)_enumerateWithOrder:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNode:(id)arg1 children:(id)arg2;
- (id)nodeByMovingChild:(id)arg1 toIndex:(long long)arg2;
- (id)nodeByReplacingChild:(id)arg1 withNodes:(id)arg2;
- (id)nodeByRemovingChild:(id)arg1;
- (id)nodeByInsertingChild:(id)arg1 atIndex:(long long)arg2;

@end

