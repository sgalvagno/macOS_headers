//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketResponse : RWIProtocolJSONObject
{
}

@property(retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property(copy, nonatomic) NSString *statusText;
@property(nonatomic) double status;
- (id)initWithStatus:(double)arg1 statusText:(id)arg2 headers:(id)arg3;

@end

