//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BrowserKit/NSCoding-Protocol.h>

@class NSImage, NSString;

@interface BKSelectionPathComponent : NSObject <NSCoding>
{
    NSString *_name;
    NSImage *_icon;
    NSString *_moduleIdentifier;
    id _selectionState;
    unsigned long long _flags;
    void *_selectionPathComponentReserved1;
    void *_selectionPathComponentReserved2;
    void *_selectionPathComponentReserved3;
}

+ (id)selectionPathComponentWithName:(id)arg1 icon:(id)arg2 moduleIdentifier:(id)arg3 selectionState:(id)arg4 flags:(unsigned long long)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)displayName;
- (unsigned long long)flags;
- (id)selectionState;
- (id)moduleIdentifier;
- (id)icon;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1 icon:(id)arg2 moduleIdentifier:(id)arg3 selectionState:(id)arg4 flags:(unsigned long long)arg5;
- (id)initWithName:(id)arg1 icon:(id)arg2 moduleIdentifier:(id)arg3 selectionState:(id)arg4 pruneIfLeaf:(BOOL)arg5;

@end

