//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaAsset : NSObject
{
    NSURL *_URL;
    NSDictionary *_colors;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *colors; // @synthesize colors=_colors;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithURL:(id)arg1 colors:(id)arg2 name:(id)arg3;

@end

