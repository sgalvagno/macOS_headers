//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface WebBookmarkExporter : NSObject
{
    NSError *_error;
}

- (void).cxx_destruct;
- (id)error;
- (id)initWithRootBookmark:(id)arg1 path:(id)arg2 hideExtension:(BOOL)arg3;
- (id)fileContentsWithRootBookmark:(id)arg1;
- (id)stringForRootBookmark:(id)arg1 withIndentLevel:(int)arg2;
- (id)stringForBookmark:(id)arg1 withIndentLevel:(int)arg2;
- (id)stringForBookmarkList:(id)arg1 withIndentLevel:(int)arg2;
- (id)stringForBookmarkLeaf:(id)arg1 withIndentLevel:(int)arg2;
- (id)escapeHTML:(id)arg1;
- (id)leadingWhiteSpaceForIndentLevel:(int)arg1;

@end

