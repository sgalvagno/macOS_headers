//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class PHPerson;
@protocol PGQuestion;

@protocol PGQuestion <NSObject>
+ (id)questionForPerson:(PHPerson *)arg1;
@property(readonly, nonatomic) double score;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) PHPerson *person;
- (BOOL)isEqualToQuestion:(id <PGQuestion>)arg1;
- (void)remove;
- (void)persist;
@end

