//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSString;

@interface PGSeasonMemoryTitleGenerator : PGTitleGenerator
{
    NSString *_season;
    unsigned long long _category;
}

@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *season; // @synthesize season=_season;
- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 seasonName:(id)arg2 category:(unsigned long long)arg3;

@end

