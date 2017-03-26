//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OADColorMap, OADColorScheme;

@interface CMState : NSObject
{
    NSMutableDictionary *components;
    NSMutableDictionary *htmlResource;
    NSString *mResourceUrlPrefix;
    OADColorMap *mColorMap;
    OADColorScheme *mColorScheme;
    id mResources;
    int mSrcFormat;
    BOOL mIsThumbnail;
    BOOL mIsOnPhone;
    long long _textLevel;
}

- (long long)textLevel;
- (void)popTextLevel;
- (void)pushTextLevel;
- (BOOL)isOnPhone;
- (void)setIsOnPhone:(BOOL)arg1;
- (BOOL)isThumbnail;
- (void)setIsThumbnail:(BOOL)arg1;
- (BOOL)isOffice12;
- (void)copyFromCMStateWithoutComponents:(id)arg1;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setColorMap:(id)arg1;
- (id)colorMap;
- (int)sourceFormat;
- (void)setSrcFormat:(int)arg1;
- (id)getHtmlResource;
- (void)setHtmlResource:(id)arg1;
- (id)resourceUrlPrefix;
- (void)setResourceUrlPrefix:(id)arg1;
- (void)setComponentWithName:(id)arg1 value:(id)arg2;
- (id)componentByName:(id)arg1;
- (void)dealloc;
- (id)init;

@end

