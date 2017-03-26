//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RKMessageResponseManager;

@interface SGQPResponseKitPredictor : NSObject
{
    RKMessageResponseManager *_manager;
    NSString *_language;
    struct NSDictionary *_whitelist;
    double _responseKitTypeWeight;
}

+ (void)seedRng:(unsigned long long)arg1;
+ (id)predictorWithLanguage:(id)arg1 whitelist:(struct NSDictionary *)arg2 weights:(struct NSDictionary *)arg3;
- (void).cxx_destruct;
- (id)predictionsForMessages:(id)arg1;
- (id)relevantTranscriptFromMessages:(id)arg1;
- (id)initWithLanguage:(id)arg1 whitelist:(id)arg2 responseKitTypeWeight:(double)arg3;
- (id)init;

@end

