//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDeviceInputSourceInternal, NSString;

@interface AVCaptureDeviceInputSource : NSObject
{
    AVCaptureDeviceInputSourceInternal *_internal;
}

+ (id)inputSourceWithID:(id)arg1 localizedName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *inputSourceID;
- (void)dealloc;
- (id)description;
- (id)initWithDeviceInputSourceID:(id)arg1 localizedName:(id)arg2;

@end

