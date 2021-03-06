//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TCEPUBFontInfo : NSObject
{
    BOOL _italic;
    int _cssWeight;
    int _width;
    NSString *_familyName;
}

+ (id)EPUBFontInfoWithFamilyName:(id)arg1 italic:(BOOL)arg2 cssWeight:(int)arg3 width:(int)arg4;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) int cssWeight; // @synthesize cssWeight=_cssWeight;
@property(readonly, nonatomic) BOOL italic; // @synthesize italic=_italic;
@property(readonly, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
- (void).cxx_destruct;
- (id)initWithFamilyName:(id)arg1 italic:(BOOL)arg2 cssWeight:(int)arg3 width:(int)arg4;

@end

