//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BrowserKit/NSCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BKBaseContentsSelectionState : NSObject <NSCoding>
{
    NSString *_searchText;
    NSArray *_predicateEditorSelectionPath;
}

+ (id)baseContentsSelectionStateWithSearchText:(id)arg1 predicateEditorSelectionPath:(id)arg2;
@property(readonly, copy) NSArray *predicateEditorSelectionPath; // @synthesize predicateEditorSelectionPath=_predicateEditorSelectionPath;
@property(readonly, copy) NSString *searchText; // @synthesize searchText=_searchText;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchText:(id)arg1 predicateEditorSelectionPath:(id)arg2;

@end

