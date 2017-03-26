//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject
{
}

@property(nonatomic) double startColumn;
@property(nonatomic) double startLine;
@property(nonatomic) BOOL isInline;
@property(nonatomic) BOOL disabled;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) long long origin;
@property(copy, nonatomic) NSString *sourceURL;
@property(copy, nonatomic) NSString *frameId;
@property(copy, nonatomic) NSString *styleSheetId;
- (id)initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(long long)arg4 title:(id)arg5 disabled:(BOOL)arg6 isInline:(BOOL)arg7 startLine:(double)arg8 startColumn:(double)arg9;

@end

