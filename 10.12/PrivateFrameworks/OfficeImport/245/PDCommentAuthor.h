//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDCommentAuthor : NSObject
{
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (id)description;
- (void)setColorIndex:(unsigned int)arg1;
- (unsigned int)colorIndex;
- (void)setLastCommentIndex:(unsigned int)arg1;
- (unsigned int)lastCommentIndex;
- (void)setInitials:(id)arg1;
- (id)initials;
- (void)setName:(id)arg1;
- (id)name;
- (void)setId:(unsigned int)arg1;
- (unsigned int)id;
- (void)dealloc;
- (id)init;

@end

