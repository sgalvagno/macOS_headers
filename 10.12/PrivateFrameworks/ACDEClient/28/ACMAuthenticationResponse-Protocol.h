//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString;

@protocol ACMAuthenticationResponse <NSObject>
@property(retain) NSError *error;
@property(retain) NSDictionary *rawResponseData;
@property(retain) NSString *userName;
@property(retain) NSString *token;

@optional
@property BOOL generatedWithTouchID;
@end

