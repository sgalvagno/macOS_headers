//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFIMAPResponse.h>

@class NSData, NSString;

@interface ICNFIMAPBasicResponse : ICNFIMAPResponse
{
    NSData *_userData;
    long long _responseCode;
    id _responseInfo;
}

@property(retain, nonatomic) id responseInfo; // @synthesize responseInfo=_responseInfo;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
@property(readonly, copy, nonatomic) NSString *userString;
@property(copy, nonatomic) NSData *userData;
- (const char *)_responseName;

@end

