//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MCObject.h>

@class NSString;

@interface MCAsset : MCObject
{
    NSString *mPath;
}

@property(copy) NSString *path; // @synthesize path=mPath;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
@property(readonly, nonatomic) BOOL isInUse;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;

@end

