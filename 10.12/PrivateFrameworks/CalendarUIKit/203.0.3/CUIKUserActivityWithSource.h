//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity
{
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (void).cxx_destruct;
- (BOOL)_isLocalSource;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)arg1;
- (BOOL)_requiresHostAndOwner;
- (unsigned long long)isMatchForSource:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 type:(unsigned long long)arg2;

@end

