//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface FRNextArticleButtonSection : NSObject
{
    NSString *_sectionName;
    UIColor *_sectionColor;
}

+ (id)moreNewsSection;
+ (id)discoverMoreSection;
+ (id)nextSection;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *sectionColor; // @synthesize sectionColor=_sectionColor;
@property(retain, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
- (BOOL)isEqual:(id)arg1;
- (id)initForMoreNewsSection;
- (id)initForDiscoverMoreSection;
- (id)initForNextSection;
- (id)init;

@end

