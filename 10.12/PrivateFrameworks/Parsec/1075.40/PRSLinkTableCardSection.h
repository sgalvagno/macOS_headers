//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Parsec/PRSCardSection.h>

@class NSArray;

@interface PRSLinkTableCardSection : PRSCardSection
{
    NSArray *_links;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithTitle:(id)arg1 links:(id)arg2;

@end

