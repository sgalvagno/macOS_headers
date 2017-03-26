//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFSpeechToken : NSObject <NSSecureCoding>
{
    BOOL _removeSpaceBefore;
    BOOL _removeSpaceAfter;
    NSString *_text;
    long long _confidenceScore;
    double _startTime;
    double _endTime;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property(nonatomic) BOOL removeSpaceBefore; // @synthesize removeSpaceBefore=_removeSpaceBefore;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

