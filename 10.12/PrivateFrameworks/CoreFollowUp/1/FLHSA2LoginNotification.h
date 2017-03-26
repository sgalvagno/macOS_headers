//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/NSSecureCoding-Protocol.h>

@class NSNumber, NSSet, NSString;

@interface FLHSA2LoginNotification : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_informativeText;
    NSString *_codePrompt;
    NSString *_approveButtonTitle;
    NSString *_dismissButtonTitle;
    NSSet *_supportedDismissActions;
    NSString *_appleID;
    NSString *_altDSID;
    NSNumber *_longitude;
    NSNumber *_latitude;
    NSString *_deviceType;
    NSString *_deviceModel;
    NSString *_deviceColorString;
    NSString *_pushMessageID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *pushMessageID; // @synthesize pushMessageID=_pushMessageID;
@property(copy, nonatomic) NSString *deviceColorString; // @synthesize deviceColorString=_deviceColorString;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSSet *supportedDismissActions; // @synthesize supportedDismissActions=_supportedDismissActions;
@property(copy, nonatomic) NSString *dismissButtonTitle; // @synthesize dismissButtonTitle=_dismissButtonTitle;
@property(copy, nonatomic) NSString *approveButtonTitle; // @synthesize approveButtonTitle=_approveButtonTitle;
@property(copy, nonatomic) NSString *codePrompt; // @synthesize codePrompt=_codePrompt;
@property(copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)followUpItemUserInfo;
- (id)initWithFollowUpItemUserInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

