//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject
{
    int _message;
    long long _progress;
    long long _currentPrimaryComponentID;
    NSDictionary *_captureImage;
    NSDictionary *_renderedImage;
    NSDictionary *_messageDetails;
}

@property(retain, nonatomic) NSDictionary *messageDetails; // @synthesize messageDetails=_messageDetails;
@property(nonatomic) int message; // @synthesize message=_message;
@property(retain, nonatomic) NSDictionary *renderedImage; // @synthesize renderedImage=_renderedImage;
@property(retain, nonatomic) NSDictionary *captureImage; // @synthesize captureImage=_captureImage;
@property(nonatomic) long long currentPrimaryComponentID; // @synthesize currentPrimaryComponentID=_currentPrimaryComponentID;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
- (void)dealloc;
- (id)init;

@end

