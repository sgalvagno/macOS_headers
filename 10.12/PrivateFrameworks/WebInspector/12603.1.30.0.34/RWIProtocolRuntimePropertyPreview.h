//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimePropertyPreview : RWIProtocolJSONObject
{
}

@property(nonatomic) BOOL internal;
@property(retain, nonatomic) RWIProtocolRuntimeObjectPreview *valuePreview;
@property(copy, nonatomic) NSString *value;
@property(nonatomic) long long subtype;
@property(nonatomic) long long type;
@property(copy, nonatomic) NSString *name;
- (id)initWithName:(id)arg1 type:(long long)arg2;

@end

