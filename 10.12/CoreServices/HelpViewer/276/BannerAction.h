//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Banner;

@interface BannerAction : NSObject
{
    Banner *_banner;
    int _actionType;
    BOOL _animates;
}

- (void).cxx_destruct;
- (BOOL)animates;
- (int)actionType;
- (id)banner;
- (id)initWithBanner:(id)arg1 actionType:(int)arg2 animates:(BOOL)arg3;

@end

