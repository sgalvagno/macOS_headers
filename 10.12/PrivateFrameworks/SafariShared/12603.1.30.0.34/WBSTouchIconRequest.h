//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSString;

@interface WBSTouchIconRequest : WBSSiteMetadataRequest
{
    NSString *_monogramTitle;
    struct CGSize _minimumIconSize;
    struct CGSize _maximumIconSize;
}

+ (id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize)arg3 maximumIconSize:(struct CGSize)arg4;
@property(readonly, copy, nonatomic) NSString *monogramTitle; // @synthesize monogramTitle=_monogramTitle;
@property(readonly, nonatomic) struct CGSize maximumIconSize; // @synthesize maximumIconSize=_maximumIconSize;
@property(readonly, nonatomic) struct CGSize minimumIconSize; // @synthesize minimumIconSize=_minimumIconSize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize)arg3 maximumIconSize:(struct CGSize)arg4;

@end

