//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *frameId;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) BOOL isPageContext;
@property(nonatomic) int identifier;
- (id)initWithIdentifier:(int)arg1 isPageContext:(BOOL)arg2 name:(id)arg3 frameId:(id)arg4;

@end

