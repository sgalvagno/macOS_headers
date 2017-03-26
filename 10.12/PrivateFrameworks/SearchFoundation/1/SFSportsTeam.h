//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSString, SFImage;

@interface SFSportsTeam : NSObject <NSSecureCoding>
{
    SFImage *_logo;
    NSString *_record;
    NSString *_score;
    NSString *_accessibilityDescription;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *record; // @synthesize record=_record;
@property(retain, nonatomic) SFImage *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

