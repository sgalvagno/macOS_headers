//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProKit/NSProOneDFramesTimecodeFormatDeputy.h>

#import <ProKit/NSCoding-Protocol.h>
#import <ProKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSProOneDAudioTimecodeFormatDeputy : NSProOneDFramesTimecodeFormatDeputy <NSCoding, NSCopying>
{
}

+ (long long)version;
+ (id)subtractFramesInvocation;
+ (id)addFramesInvocation;
+ (id)setFramesInvocation;
+ (id)framesInvocation;
+ (void)initialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requiredProtocol;

@end

